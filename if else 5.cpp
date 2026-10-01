
#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;

    if(n<100 || n>999)
    {
        cout<<"enter a valid 3 digit number";
    }
    else
    {
        int d1=n/100;
        int d2=(n/10)%10;
        int d3=n%10;

        int sum=(d1*d1*d1)+(d2*d2*d2)+(d3*d3*d3);

        if(sum==n)
        {
            cout<<n<<" is an Armstrong number";
        }
        else
        {
            cout<<n<<" is not an Armstrong number";
        }
    }
    return 0;
}