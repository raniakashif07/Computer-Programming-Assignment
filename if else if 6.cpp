



#include<iostream>
using namespace std;
int main()
{
    double weight;
    cin>>weight;

    double cost;

    if(weight<=0)
    {
        cout<<"invalid weight";
    }
    else
    {
        if(weight<=1)
        {
            cost=150;
        }
        else if(weight<=5)
        {
            cost=150+(weight-1)*80;
        }
        else if(weight<=20)
        {
            cost=150+(4*80)+(weight-5)*60;
        }
        else
        {
            cost=150+(4*80)+(15*60)+(weight-20)*40;
        }

        cout<<"shipping cost: Rs "<<cost;
    }
    return 0;
}