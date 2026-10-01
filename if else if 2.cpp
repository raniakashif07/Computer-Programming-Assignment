
#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    double a,b,c;
    cin>>a>>b>>c;

    if(a==0)
    {
        cout<<"not a quadratic equation";
    }
    else
    {
        double d=(b*b)-(4*a*c);

        if(d>0)
        {
            double r1=(-b+sqrt(d))/(2*a);
            double r2=(-b-sqrt(d))/(2*a);
            cout<<"real and distinct roots: "<<r1<<" , "<<r2;
        }
        else if(d==0)
        {
            double r=-b/(2*a);
            cout<<"real and equal roots: "<<r;
        }
        else
        {
            double real=-b/(2*a);
            double imag=sqrt(-d)/(2*a);
            cout<<"complex roots: "<<real<<" + "<<imag<<"i , "<<real<<" - "<<imag<<"i";
        }
    }
    return 0;
}