#include <iostream>
using namespace std;
int main()
//Determine if phone needs to be charged or not
{
    int battery;
    cout<<"Enter phone battery percentage:";
    cin>>battery;
    if(battery<0)
    {
        cout<<"invalid";
        return 0;
    }
    if (battery>20 && battery>0 && battery<=100)
    {
        cout<<"Phone charging is sufficient";
        return 0;
    }
    else
    {
        cout<<"charge phone immediately";
    }
    return 0;
}