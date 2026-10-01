#include <iostream>
using namespace std;
int main()
//Determine if student passed or failed
{
    int marks;
    cout<<"enter marks:";
    cin>>marks;
    if (marks<0)
    {
        cout<<"invalid";
        return 0;
    }
    if (marks>=50 && marks>=0 && marks<=100)
    {
        cout<<"Pass";
    }
    else
    {
        cout<<"Fail";
    }
    return 0;
}