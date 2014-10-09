#ifndef _DATE_H_
#define _DATE_H_

#include <time.h>
#include <string>
#include <iostream>
#include <stdio.h>
using namespace std;

class CDate
{
private:
	time_t		m_nTime;
	struct tm	m_tm;

public:
	CDate();
	CDate(time_t time);
	CDate(int year, int month, int day, int hour, int min, int sec);
	CDate(const CDate& date);
	~CDate();

public:
	// Format String
	int format(char* buf, int bufSize, const char* fmtString);

public:
	int getMEndDay();		// Returns the end of day of the month (from 28-31)
	int getMDay();			// Returns the day of the month (from 1-31)
	int getWDay();			// Returns the day of the week (from 0-6)
	int getFullYear();		// Returns the year (four digits)
	int getHours();			// Returns the hour (from 0-23)
	int getMinutes();		// Returns the minutes (from 0-59)
	int getMonth();			// Returns the month (from 1-12)
	int getSeconds();		// Returns the seconds (from 0-59)
	time_t getTime();		// Returns the number of seconds since midnight Jan 1, 1970
	bool after(CDate d);
	string toString();

	void setDate(int year, int month, int day);
	void setDate(int year, int month, int day, int hour, int min, int sec);
	void setDay(int day);	// Sets the day of the month of a date object
	void setFullYear(int year);	// Sets the year (four digits) of a date object
	void setHours(int hour);	// Sets the hour of a date object
	void setMinutes(int min);	// Set the minutes of a date object
	void setMonth(int month);	// Sets the month of a date object
	void setSeconds(int sec);	// Sets the seconds of a date object
	void setTime(time_t time);	// Sets a date and time by adding or subtracting a specified number of milliseconds to/from midnight January 1, 1970
};

#endif