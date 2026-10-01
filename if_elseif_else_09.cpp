#include <iostream>
using namespace std;
int main ()
//Determine parking fee based on hours of parking
{
    int hours, parking_fee;
    string vehicle;
    cout<<"Enter hour:";
    cin>>hours;
    if (hours<0)
    {
        cout<<"invalid input";
        return 0;
    }
    cout<<"Enter vehicle type (e.g bike,car,truck):";
    cin>>vehicle;
    if (vehicle=="bike" || vehicle=="BIKE" || vehicle=="Bike")
    {
        parking_fee=50*hours;
        cout<<"Parkin fee:"<<parking_fee;
    }
    else if (vehicle=="car" || vehicle=="CAR" || vehicle=="Car")
    {
        parking_fee=100*hours;
        cout<<"Parkin fee:"<<parking_fee;
    }
    else if (vehicle=="truck" || vehicle=="TRUCK" || vehicle=="Truck")
    {
        parking_fee=200*hours;
        cout<<"Parkin fee:"<<parking_fee;
    }
    else
    {
        cout<<"invalid input";
    }
    return 0;
}