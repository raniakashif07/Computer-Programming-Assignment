
#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;

    if(n>0)
    {
        if(n%2==0)
        {
            cout<<"positive even";
        }
        else
        {
            cout<<"positive odd";
        }
    }
    else if(n<0)
    {
        if(n%2==0)
        {
            cout<<"negative even";
        }
        else
        {
            cout<<"negative odd";
        }
    }
    else
    {
        cout<<"zero";
    }
    return 0;
}