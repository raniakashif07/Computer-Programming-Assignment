#include <iostream>
using namespace std;
int main()
//check restaurant availability
{
    int people, day, time;

    cout << "Enter number of people: ";
    cin >> people;

    if (people <= 0 || people > 20)
    {
        cout << "Invalid input";
        return 0;
    }

    cout << "Enter day (1 = Weekday, 2 = Weekend): ";
    cin >> day;

    if (day < 1 || day > 2)
    {
        cout << "Invalid input";
        return 0;
    }

    cout << "Enter time (1 = Lunch, 2 = Dinner): ";
    cin >> time;

    if (time < 1 || time > 2)
    {
        cout << "Invalid input";
        return 0;
    }

    if (people > 12)
    {
        cout << "No table available";
    }
    else if (people <= 2 && day == 2 && time == 2)
    {
        cout << "Small tables are unavailable on weekend dinner";
    }
    else if (people >= 9)
    {
        cout << "Private dining area";
    }
    else if (people >= 5)
    {
        cout << "Large table";
    }
    else if (people >= 3)
    {
        cout << "Regular table";
    }
    else
    {
        cout << "Small table";
    }

    return 0;
}