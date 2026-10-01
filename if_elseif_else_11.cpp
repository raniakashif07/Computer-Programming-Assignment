#include <iostream>
using namespace std;
int main()
//cloth size finder
{
    float weight, height;

    cout<<"Enter weight:";
    cin>>weight;
    cout<<"Enter height:";
    cin>>height;

    if (weight<=0 || height<=0)
    {
        cout<<"invalid input";
        return 0;
    }

    if (weight >= 40 && weight <= 50 && height <= 160)
    {
        cout << "XS";
    }
    else if (weight > 50 && weight <= 60 && height <= 165)
    {
        cout << "S";
    }
    else if (weight > 60 && weight <= 70 && height <= 175)
    {
        cout << "M";
    }
    else if (weight > 70 && weight <= 80 && height <= 180)
    {
        cout << "L";
    }
    else if (weight > 80 && weight <= 95 && height <= 185)
    {
        cout << "XL";
    }
    else if (weight > 95 && weight <= 110 && height <= 195)
    {
        cout << "XXL";
    }
    else
    {
        cout << "Measurements outside available sizes";
    }
}