
#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    double a,b;
    int choice;
    cin>>a>>b>>choice;

    switch(choice)
    {
        case 1:
            cout<<a+b;
            break;
        case 2:
            cout<<a-b;
            break;
        case 3:
            cout<<a*b;
            break;
        case 4:
            if(b!=0)
            {
                cout<<a/b;
            }
            else
            {
                cout<<"cannot divide by zero";
            }
            break;
        case 5:
            cout<<pow(a,b);
            break;
        default:
            cout<<"invalid choice";
    }
    return 0;
}