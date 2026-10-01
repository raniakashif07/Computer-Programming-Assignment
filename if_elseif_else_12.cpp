#include <iostream>
using namespace std;
int main()
//check harshness of weather
{
    int temperature, rain, wind, shelter;

    cout << "Enter temperature in Celsius: ";
    cin >> temperature;

    if (temperature < -50 || temperature > 60)
    {
        cout << "Invalid input";
        return 0;
    }

    cout << "Enter rain level (1 = No rain, 2 = Light rain, 3 = Heavy rain): ";
    cin >> rain;

    if (rain < 1 || rain > 3)
    {
        cout << "Invalid input";
        return 0;
    }

    cout << "Enter wind speed in km/h: ";
    cin >> wind;

    if (wind < 0)
    {
        cout << "Invalid input";
        return 0;
    }

    cout << "Is shelter available? (1 = Yes, 2 = No): ";
    cin >> shelter;

    if (shelter < 1 || shelter > 2)
    {
        cout << "Invalid input";
        return 0;
    }

    if (temperature <= -5 || wind >= 80)
    {
        cout << "Emergency - Stay Indoors";
    }
    else if (temperature <= 0 || wind >= 60 || (rain == 3 && wind >= 40))
    {
        cout << "Dangerous Conditions";
    }
    else if (rain == 3 || wind >= 40)
    {
        cout << "Find Shelter";
    }
    else if (temperature >= 40 || (temperature <= 5 && shelter == 2))
    {
        cout << "Return Home";
    }
    else
    {
        cout << "Safe to Continue";
    }

    return 0;
}