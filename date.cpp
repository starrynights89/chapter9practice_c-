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

