
#include<iostream>
using namespace std;
int main()
{
    int x,y;
    cin>>x>>y;
    if(x==0 || y==0)
    {
        if(x==0 && y==0)
        {
            cout<<"point is at origin";
        }
        else
        {
            cout<<"point lies on an axis";
        }
    }
    else
    {
        if(x>0)
        {
            if(y>0)
            {
                cout<<"quadrant 1";
            }
            else
            {
                cout<<"quadrant 4";
            }
        }
        else
        {
            if(y>0)
            {
                cout<<"quadrant 2";
            }
            else
            {
                cout<<"quadrant 3";
            }
        }
    }
    return 0;
}