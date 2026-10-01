
#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;

    if(n<1 || n>9)
    {
        cout<<"enter a digit between 1 and 9";
    }
    else if(n==1)
    {
        cout<<"I";
    }
    else if(n==2)
    {
        cout<<"II";
    }
    else if(n==3)
    {
        cout<<"III";
    }
    else if(n==4)
    {
        cout<<"IV";
    }
    else if(n==5)
    {
        cout<<"V";
    }
    else if(n==6)
    {
        cout<<"VI";
    }
    else if(n==7)
    {
        cout<<"VII";
    }
    else if(n==8)
    {
        cout<<"VIII";
    }
    else
    {
        cout<<"IX";
    }
    return 0;
}