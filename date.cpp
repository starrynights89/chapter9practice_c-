#include "std_lib_facilities.h"

//simple Date
struct Date
{
    int y; //year
    int m; //month in a year
    int d; //day of month
};

Date today; //a Date variable (a named object)

//set today to December 24, 2005
today.y = 2005;
today.m = 24; 
today.d = 12; 