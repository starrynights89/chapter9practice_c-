#include "std_lib_facilities.h"

//simple Date
struct Date
{
    int y; //year
    int m; //month in a year
    int d; //day of month
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
    int_day(today, 12, 24, 2005); 
    add_day(today, 1);
}