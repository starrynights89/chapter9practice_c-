#include "std_lib_facilities.h"

//simple Date
//guarantee initialization with constuctor
//provide some notational convenience 
class Date
{
public:
    class Invalid { }; //to be used as exception
    Date(int y, int m, int d); //check the valid date and initialize
    void add_day(int n); //increase the Date by n days
    int month() { return m; } 
    int day() { return d; }
    int year() { return y; }
private:
    int y, m, d; //year, month, day
    bool is_valid(); //return true if date is valid
};

Date::Date(int yy, int mm, int dd) //constructor
:y{yy}, m{mm}, d{dd} //note: member initializers
{
}

void Date::add_day(int n)
{
}

void f(Date d1, Date d2)
{
    cout << d1.month() << ' ' << d2.month() << '\n';
}