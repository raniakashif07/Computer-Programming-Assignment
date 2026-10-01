#include <iostream>
using namespace std;
//parking system
int main()
{
    int vehicle, hours;
    float fee;

    cout << "Smart Parking Garage\n\n";

    cout << "Select vehicle:\n";
    cout << "1. Motorcycle\n";
    cout << "2. Car\n";
    cout << "3. SUV\n";
    cout << "4. Electric Car\n";
    cin >> vehicle;

    if (vehicle < 1 || vehicle > 4)
    {
        cout << "Invalid vehicle type.";
        return 0;
    }

    cout << "\nEnter parking hours: ";
    cin >> hours;

    if (hours <= 0)
    {
        cout << "Invalid number of hours.";
        return 0;
    }

    switch (vehicle)
    {
        case 1:
            switch (hours)
            {
                case 1:
                    fee = 50;
                    break;

                case 2:
                    fee = 80;
                    break;

                default:
                    fee = 80 + (hours - 2) * 30;
            }
            cout << "Motorcycle parking fee: " << fee;
            break;

        case 2:
            switch (hours)
            {
                case 1:
                    fee = 100;
                    break;

                case 2:
                    fee = 170;
                    break;

                default:
                    fee = 170 + (hours - 2) * 50;
            }
            cout << "Car parking fee: " << fee;
            break;

        case 3:
            switch (hours)
            {
                case 1:
                    fee = 150;
                    break;

                case 2:
                    fee = 250;
                    break;

                default:
                    fee = 250 + (hours - 2) * 70;
            }
            cout << "SUV parking fee: " << fee;
            break;

        case 4:
            switch (hours)
            {
                case 1:
                    fee = 70;
                    break;

                case 2:
                    fee = 120;
                    break;

                default:
                    fee = 120 + (hours - 2) * 40;
            }
            cout << "Electric car parking fee: " << fee;
            break;
    }

    return 0;
}