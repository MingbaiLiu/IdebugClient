#include "stdafx.h"
#include <ctime>
#include <map>
#include <iostream>
#include "litelog.h"
using namespace std;
using namespace litelog;

string
BaseLogger::getCurrentDatetime()
{
    time_t nowtime;
    nowtime = time(NULL);
    struct tm pNowtime;
    localtime_s(&pNowtime, &nowtime);
    char tmp[64];
    strftime(tmp,
        sizeof(tmp),
        "%Y-%m-%d %H:%M:%S",
        &pNowtime);
    return tmp;
}

static const map<Level, const char*>
LevelStr =
{
    { Level::Debug,     "DEBUG"   },
    { Level::Info,      "INFO"    },
    { Level::Warn,      "WARNING" },
    { Level::Error,     "ERROR"   },
    { Level::Fatal,     "FATAL"   },
};

BaseLogger::LogStream BaseLogger::operator()(Level nLevel, string sTitle)
{
    return LogStream(*this, nLevel, sTitle);
}

void
BaseLogger::endline(Level nLevel,
    string sTitle,
    string oMessage)
{
    DWORD dwWaitResult = WaitForSingleObject(
        _lock,    // handle to mutex
        INFINITE);  // no time-out interval
    //_lock.lock();
    //output(getCurrentDatetime(), LevelStr.find(nLevel)->second, sTitle, oMessage);
    output(LevelStr.find(nLevel)->second, sTitle, oMessage);
    ReleaseMutex(_lock);
    //_lock.unlock();
}


FileLogger::FileLogger(string filename) noexcept
    : BaseLogger()
{
    _file.open(filename,
        fstream::out | fstream::app | fstream::ate);
}

FileLogger::~FileLogger()
{
    _file.flush();
    _file.close();
}


void
FileLogger::output(
    string level,
    string title,
    string message)
{
    _file << " - " << title
        << " - " << level
        << " - " << message << endl;
    _file.flush();
}