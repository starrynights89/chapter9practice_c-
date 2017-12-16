#include "std_lib_facilities.h"

enum class Month
{
    Jan=1, Feb, Mar, Apr, May, Jun, Aug, Sep, Oct, Nov, Dec
};

//simple Date
//guarantee initialization with constuctor
//provide some notational convenience 
class Date
{
public:
    class Invalid { }; //to be used as exception
    Date(int y, Month m, int d); //check the valid date and initialize
    void add_day(int n); //increase the Date by n days
    int month() { return m; } 
    int day() { return d; }
    int year() { return y; }
private:
    int y, Month m, d; //year, month, day
    bool is_valid(); //return true if date is valid
};

Month operator++(Month& m) //prefix increment operator
{
    m = (m==Dec) ? Jan : Month(int(m)+1); //"wrap around"
    return m;
}

Date::Date(int yy, int mm, int dd) //constructor
:y{yy}, m{mm}, d{dd} //note: member initializers
{
    if(!is_valid()) throw Invalid{}; //check for validity
}

bool Date::is_valid() //return true if date is valid
{
    if(m<1 || 12<m) return false;
}

Month m = Month::feb;

void a(Date d1, Date d2)
{
    cout << d1.month() << ' ' << d2.month() << '\n';
}

void f(int x, int y)
try
{
    Date dxy {2004,x,y};
    cout << dxy << '\n'; 
    dxy.add_day(2);
}
catch(Date::Invalid)
{
    error("invalid date"); 
}