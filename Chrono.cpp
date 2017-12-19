//Chrono.cpp
#include "Chrono.h"

namespace Chrono {
//member function definitions

Date::Date(int yy, Month mm, int dd)
:y{yy}, m{mm}, d{dd}
{
    if(!is_date(yy,mm,dd)) throw Invalid{};
}

const Date& default_date()
{
    static Date dd {2001,Month::jan,1}; //start of the 21st century
    return dd;
}

Date::Date()
:y{default_date().year()},
m{default_date().month()},
d{default_date().day()}
{
}

void Date::add_day(int n)
{
}

void Date::add_month(int n)
{
}

void Date::add_year(int n)
{
    if (m==Month::feb && d==29 && !leapyear(y+n)) {    // beware of leap years!
        m = Month::mar;                                // use March 1 instead of February 29
        d = 1;
    }
    y+=n;
}
//helper functions:

bool is_date(int y, Month m, int d)
{
    //assume that y is valid

    if(d<=0) return false; //d must be positive
    if(m<Month::jan || Month::dec<m) return false;
}
}