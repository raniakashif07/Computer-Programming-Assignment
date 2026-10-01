#include <iostream>
using namespace std;
int main()
//Determine bill per unit
{
    int unit,bill;
    cout<<"Enter Units:";
    cin>>unit;
    if (unit<=100)
    {
        bill=10*unit;
        cout<<"Total Bill:"<<bill;
    }
    if (unit<=200 && unit>=101)
    {
        bill=15*unit;
        cout<<"Total Bill:"<<bill;
    }
    if (unit<=300 && unit>=201)
    {
        bill=20*unit;
        cout<<"Total Bill:"<<bill;
    }
    if (unit>300)
    {
        bill=25*unit;
        cout<<"Total Bill:"<<bill;
    }
}
