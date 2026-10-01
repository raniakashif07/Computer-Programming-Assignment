#include <iostream>
using namespace std;
//Determine data usage
int main()
{
    float data;

    cout << "Enter data used in GB: ";
    cin >> data;

    if (data < 0)
    {
        cout << "Invalid data usage";
    }

    if (data == 0)
    {
        cout << "No data used";
    }

    if (data > 0 && data <= 2)
    {
        cout << "Low usage";
    }

    if (data > 2 && data <= 8)
    {
        cout << "Normal usage";
    }

    if (data > 8 && data <= 15)
    {
        cout << "High usage";
    }

    if (data > 15)
    {
        cout << "Data limit exceeded";
    }

    return 0;
}