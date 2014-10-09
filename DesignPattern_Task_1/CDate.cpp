#include "CDate.h"

inline static struct tm* _localtime(time_t* time, struct tm* _tm)
{
#ifdef _WIN32
	localtime_s(_tm, time);
#else
	localtime_r(time, _tm);
#endif
	return _tm;
}

CDate::CDate()
{
	m_nTime = time(NULL);
	_localtime(&m_nTime, &m_tm);
}

CDate::CDate(time_t time)
{
	m_nTime = time;
	_localtime(&m_nTime, &m_tm);
}

CDate::CDate(int year, int month, int day, int hour, int min, int sec)
{
	struct tm tmp_tm;

	memset(&tmp_tm, 0, sizeof(tmp_tm));
	tmp_tm.tm_year = year - 1900;
	tmp_tm.tm_mon = month - 1;
	tmp_tm.tm_mday = day;
	tmp_tm.tm_hour = hour;
	tmp_tm.tm_min = min;
	tmp_tm.tm_sec = sec;

	setTime(mktime(&tmp_tm));
}

CDate::CDate(const CDate& date)
{
	m_nTime = date.m_nTime;
	_localtime(&m_nTime, &m_tm);
}

CDate::~CDate()
{
}

int CDate::format(char* buf, int bufSize, const char* fmtString)
{
	return strftime(buf, bufSize, fmtString, &m_tm);
}

int CDate::getMEndDay()
{
	static unsigned char month_days[] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };

	if (m_tm.tm_mon == 1) {
		int year = m_tm.tm_year + 1900;
		if (year % 4 == 0 && (year % 100 != 0 || year % 400 == 0)) {
			return 29;
		}
	}

	return (int)month_days[m_tm.tm_mon];
}

int CDate::getMDay()
{
	return m_tm.tm_mday;
}

int CDate::getWDay()
{
	return m_tm.tm_wday;
}

int CDate::getFullYear()
{
	return m_tm.tm_year + 1900;
}

int CDate::getHours()
{
	return m_tm.tm_hour;
}

int CDate::getMinutes()
{
	return m_tm.tm_min;
}

int CDate::getMonth()
{
	return m_tm.tm_mon + 1;
}

int CDate::getSeconds()
{
	return m_tm.tm_sec;
}

time_t CDate::getTime()
{
	return m_nTime;
}

void CDate::setDate(int year, int month, int day)
{
	m_tm.tm_year = year - 1900;
	m_tm.tm_mon = month - 1;
	m_tm.tm_mday = day;
	setTime(mktime(&m_tm));
}

void CDate::setDate(int year, int month, int day, int hour, int min, int sec)
{
	m_tm.tm_year = year - 1900;
	m_tm.tm_mon = month - 1;
	m_tm.tm_mday = day;
	m_tm.tm_hour = hour;
	m_tm.tm_min = min;
	m_tm.tm_sec = sec;
	setTime(mktime(&m_tm));
}

void CDate::setDay(int day)
{
	m_tm.tm_mday = day;
	setTime(mktime(&m_tm));
}

void CDate::setFullYear(int year)
{
	m_tm.tm_year = year - 1900;
	setTime(mktime(&m_tm));
}

void CDate::setHours(int hour)
{
	m_tm.tm_hour = hour;
	setTime(mktime(&m_tm));
}

void CDate::setMinutes(int min)
{
	m_tm.tm_min = min;
	setTime(mktime(&m_tm));
}

void CDate::setMonth(int month)
{
	m_tm.tm_mon = month - 1;
	setTime(mktime(&m_tm));
}

void CDate::setSeconds(int sec)
{
	m_tm.tm_sec = sec;
	setTime(mktime(&m_tm));
}

void CDate::setTime(time_t time)
{
	m_nTime = time;
	_localtime(&m_nTime, &m_tm);
}
string CDate::toString()
{
	string s = (to_string(getFullYear()) + "³â " + to_string(getMonth()) + "¿ù " + to_string(getMDay()) + "ÀÏ ");
	return s;
}

bool CDate::after(CDate d)
{
	bool judge = false;
	if (d.getFullYear() <= getFullYear())
	{
		if (d.getMonth() <= getMonth())
		{
			if (d.getMDay() <= getMDay())
				judge = true;
		}
	}
	return judge;
}