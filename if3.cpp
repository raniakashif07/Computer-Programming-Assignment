
#include<iostream>
using namespace std;
int main()
{
    int age;
    cin>>age;
    if(age>=18)
    {
        cout<<"eligible to vote";
    }
    if(age<18)
    {
        cout<<"not eligible to vote";
    }
    return 0;
}