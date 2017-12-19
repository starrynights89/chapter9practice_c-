//Chapter 09 drill

#include "Chrono.h"
#include <iostream>

void chapter941()
{
    using namespace Chrono941;
    std::cout << "Chapter 9.4.1:\n";
    Date today;
    init_day(today,1978,6,25);
    Date tomorrow = today;
    add_day(tomorrow,1);
    cout << "Today: " << today << std::endl;
    cout << "Tomorrow: " << tomorrow << std::endl;
    Date invalid_date;
    init_day(invalid_date,2004,13,-5);
}

int main()
try
{
    chapter941();
}

catch (std::exception& e)
{
    std::cerr << "exception: " << e.what() << std::endl;
}

catch(...)
{
    std::cerr << "exception\n";
}