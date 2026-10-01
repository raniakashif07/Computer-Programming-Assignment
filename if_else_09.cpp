#include <iostream>
using namespace std;
int main ()
//Determine if number is divisible by 3 or not
{
    int x;
    cout<<"Enter number:";
    cin>>x;
    if (x%3==0 && x>0)
    {
        cout<<"Divisble by three";
    }
    else
    {
        cout<<"Not divisble by three";
    }
    return 0;
}