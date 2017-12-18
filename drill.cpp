//Chapter 09 drill

#include "std_lib_facilities.h"
#include "Chrono.h"

void chapter941()
{
    using namespace Chrono941;
    cout << "Chapter 9.4.1:\n";
    Date today;
    init_day(today,1978,6,25);
    Date tomorrow = today;
    add_day(tomorrow,1);
    cout << "Today: " << today << endl;
    cout << "Tomorrow: " << tomorrow << endl;
    Date invalid_date;
    init_day(invalid_date,2004,13,-5);
}

int main()
try
{
    chapter941();
}

catch (exception& e)
{
    cerr << "exception: " << e.what() << endl;
}

catch(...)
{
    cerr << "exception\n";
}