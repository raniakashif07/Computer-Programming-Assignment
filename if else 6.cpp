
#include<iostream>
using namespace std;
int main()
{
    int h,m;
    cin>>h>>m;

    if(h<0 || h>23 || m<0 || m>59)
    {
        cout<<"invalid time";
    }
    else
    {
        int hour12;
        string period;

        if(h==0)
        {
            hour12=12; period="AM";
        }
        else
        {
            if(h<12)
            {
                hour12=h; period="AM";
            }
            else
            {
                if(h==12)
                {
                    hour12=12; period="PM";
                }
                else
                {
                    hour12=h-12; period="PM";
                }
            }
        }

        cout<<hour12<<":"<<m<<" "<<period;
    }
    return 0;
}

