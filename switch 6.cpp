
#include<iostream>
using namespace std;
int main()
{
    int choice;
    double value;

    cin>>choice>>value;

    switch(choice)
    {
        case 1:
            cout<<value*0.621371<<" miles";
            break;
        case 2:
            cout<<value/0.621371<<" km";
            break;
        case 3:
            cout<<value*2.20462<<" lbs";
            break;
        case 4:
            cout<<value/2.20462<<" kg";
            break;
        default:
            cout<<"invalid choice";
    }
    return 0;
}