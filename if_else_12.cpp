#include <iostream>
using namespace std;
int main()
//determine whether candidate is elligable to vote or not
{
    int age;
    cout<<"Enter age:";
    cin>>age;
    if (age<=0)
    {
        cout<<"Invalid";
        return 0;
    }
    if (age>=18)
    {
        cout<<"Elligable to vote.";
    }
    else
    {
        cout<<"Inelligable to vote";
    }
    return 0;
}