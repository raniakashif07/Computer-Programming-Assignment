#include <iostream>
using namespace std;
int main()
//Determine the nature of number
{
    int x;
    cin>>x;
    if(x>0)
    {
        cout<<"positive\n";
    }
    if (x<0)
    {
        cout<<"negative\n";
    }
    if(x==0)
    {
        cout<<"zero\n";
    }
    if (x%2==0 && !x==0)
    {
        cout<<"even\n";
    }
    if (x%2==1)
    {
        cout<<"odd\n";
    }
}