#include <iostream>
using namespace std;
int main()
//determine if password is strong or not
{
    string password;
    cout<<"enter password:";
    cin>>password;
    if (password.length()>8)
    {
        cout<<"Password is strong";
    }
    else
    {
        cout<<"Password is weak";
    }
    return 0;
}