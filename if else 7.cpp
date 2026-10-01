
#include<iostream>
using namespace std;
int main()
{
    int d,m,y;
    cin>>d>>m>>y;

    if(m<1 || m>12 || y<1)
    {
        cout<<"invalid date";
    }
    else
    {
        int daysInMonth;

        if(m==4 || m==6 || m==9 || m==11)
        {
            daysInMonth=30;
        }
        else
        {
            if(m==2)
            {
                bool leap=(y%4==0 && y%100!=0) || (y%400==0);
                if(leap)
                {
                    daysInMonth=29;
                }
                else
                {
                    daysInMonth=28;
                }
            }
            else
            {
                daysInMonth=31;
            }
        }

        if(d>=1 && d<=daysInMonth)
        {
            cout<<"valid date";
        }
        else
        {
            cout<<"invalid date";
        }
    }
    return 0;
}