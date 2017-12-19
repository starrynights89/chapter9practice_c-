#include <iostream>
#include "std_lib_facilities.h"

namespace Chrono
{
class Date 
{
public:
    enum class Month
    {
        jan=1, feb, mar, apr, may, jun, jul, aug, sep, oct, nov, dec
    };

    class Invalid { }; //to throw as exception

    Date(int y, Month m, int d); //check for valid date and initialize
    Date();                      //default constructor
    // the default copy operations are fine

    //nonmodifying operations:
    int day() const { return d; }
    Month month() const { return m; }
    int year() const { return y; }

    //modifying operations:
    void add_day(int n);
    void add_month(int n);
    void add_year(int n);
private:
    int y;
    Month m;
    int d;
};

bool is_date(int y, Date::Month m, int d); //true for valid date

bool leapyear(int y); //true if y is a leap year
int day_in_year(const Date& d); //number of day in year
int n_leapyears(int y); //number of leap years between Jan 1 of year y and first_date
long int days_linear(const Date& d);

enum Day
{
    sunday, monday, tuesday, wednesday, thursday, friday, saturday
};
Day day_of_week(const Date& d); //weekday of d
std::ostream& operator<<(std::ostream& os, Day d);

bool operator==(const Date& a, const Date& b); 
bool operator!=(const Date& a, const Date& b);

std::ostream& operator<<(std::ostream& os, const Date& d);
std::istream& operator>>(std::istream& is, Date& dd);

} //Chrono

namespace Chrono941
{
    //simple Date
    struct Date
    {
        int y; //year
        int m; //month in year
        int d; //day of month
    };

    //helper functions
    void init_day(Date& dd, int y, int m, int d);
    void add_day(Date& dd, int n);

    //operators
    std::ostream& operator<<(std::ostream os, const Date& d);
} //Chrono941