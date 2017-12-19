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
    if(m==feb && d==29 && !leapyear(y+n)) {
        m = mar;
        d = 1;
    }
    y+=n;
}
}