
#include<iostream>
using namespace std;
int main()
{
    int a,b;
    cin>>a>>b;
    if(a>b)
    {
        cout<<a<<" is largest";
    }
    if(b>a)
    {
        cout<<b<<" is largest";
    }
    if(a==b)
    {
        cout<<"both are equal";
    }
    return 0;
}