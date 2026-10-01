
#include<iostream>
using namespace std;
int main()
{
    int a,b,c;
    cin>>a>>b>>c;

    int largest;
    int s1,s2;

    if(a>=b && a>=c)
    {
        largest=a; s1=b; s2=c;
    }
    else
    {
        if(b>=a && b>=c)
        {
            largest=b; s1=a; s2=c;
        }
        else
        {
            largest=c; s1=a; s2=b;
        }
    }

    if((s1*s1)+(s2*s2)==largest*largest)
    {
        cout<<"right angled triangle";
    }
    else
    {
        cout<<"not a right angled triangle";
    }
    return 0;
}