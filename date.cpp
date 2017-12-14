#include "std_lib_facilities.h"

//simple Date
//guarantee initialization with constuctor
//provide some notational convenience 
class Date
{
private:
    int y, m, d; //year, month, day
public:
    Date(int y, int m, int d); //check the valid date and initialize
    void add_day(int n); //increase the Date by n days
    int month() { return m; } 
    int day() { return d; }
    int year() { return y; }
};

