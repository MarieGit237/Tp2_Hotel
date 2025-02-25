#include <string>

#ifndef DATE_H
#define DATE_H

class Date {
public:
   Date(int year=1, int month=1, int day=1);
   int year() const;
   int month() const;
   int day() const;
   void updateYear(int year);
   void updateMonth(int month);
   void updateDay(int day);
   void next();
   void back();
private:
   int _year;
   int _month;
   int _day;

};

bool isDate(int year, int month, int day);
int getDaysInMonth(int year, int month);
int dayOfYear(Date d);
std::string toString(Date d);

#endif // DATE_H
