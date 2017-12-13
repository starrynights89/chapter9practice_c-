#include "std_lib_facilities.h"

//simple Date
//guarantee initialization with constuctor
//provide some notational convenience 
struct Date
{
    int y, m, d; //year, month, day
    Date(int y, int m, int d); //check the valid date and initialize
    void add_day(int n); //increase the Date by n days
};

Date today; //a Date variable (a named object)

//helper functions:

void int_day(Date& dd, int y, int m, int d)
{
    //check that (y,m,d) is a valid date
    //if it is, use it to initialize dd
}

void add_day(Date& dd, int n)
{
    //increse dd by n days
}

void f()
{
    Date today;
    cout << today << '\n'; //use today
    int_day(today, 2008, 3, 30);
    Date tomorrow;
    tomorrow.y = today.y;
    tomorrow.m = today.m;
    tomorrow.d = today.d+1; //add 1 to today
    cout << tomorrow << '\n';
    add_day(today, 1);
}