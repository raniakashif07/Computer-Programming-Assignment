
#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    if(n%5==0)
    {
        cout<<"divisible by 5";
    }
    if(n%5!=0)
    {
        cout<<"not divisible by 5";
    }
    return 0;
}