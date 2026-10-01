

#include<iostream>
using namespace std;
int main()
{
    double temp;
    cin>>temp;

    if(temp<0)
    {
        cout<<"solid (ice)";
    }
    else if(temp==0)
    {
        cout<<"melting point (solid/liquid mix)";
    }
    else if(temp<100)
    {
        cout<<"liquid (water)";
    }
    else if(temp==100)
    {
        cout<<"boiling point (liquid/gas mix)";
    }
    else
    {
        cout<<"gas (steam)";
    }
    return 0;
}