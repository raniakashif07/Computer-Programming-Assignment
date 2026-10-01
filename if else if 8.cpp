
#include<iostream>
using namespace std;
int main()
{
    double income;
    cin>>income;

    double tax;

    if(income<=600000)
    {
        tax=0;
    }
    else if(income<=1200000)
    {
        tax=(income-600000)*0.05;
    }
    else if(income<=2200000)
    {
        tax=(600000*0.05)+(income-1200000)*0.15;
    }
    else if(income<=3200000)
    {
        tax=(600000*0.05)+(1000000*0.15)+(income-2200000)*0.25;
    }
    else
    {
        tax=(600000*0.05)+(1000000*0.15)+(1000000*0.25)+(income-3200000)*0.35;
    }

    cout<<"tax payable: "<<tax;
    return 0;
}