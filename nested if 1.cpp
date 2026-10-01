
#include<iostream>
using namespace std;
int main()
{
    int  a,b,c;
    cin>>a>>b>>c;
     if(a != b && b != c && c != a)
     {
        if(a>b&&a>c)
        {
            cout<<"a is the largest";
            
        }
        else if(b>a&&b>c)
        {
            cout<<"b is largest ";
        }
        else
        {
            cout<<"c is the largest ";
        }

     }
     else
     {
        cout<<"invalid";

     }
     return 0;
}
