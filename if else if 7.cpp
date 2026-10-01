
#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int n;
    cin>>n;

    if(n<0)
    {
        cout<<"negative numbers have no real square root";
    }
    else
    {
        int root=(int)sqrt((double)n);

        if(root*root==n)
        {
            if(root%2==0)
            {
                cout<<n<<" is a perfect square with an even root ("<<root<<")";
            }
            else
            {
                cout<<n<<" is a perfect square with an odd root ("<<root<<")";
            }
        }
        else
        {
            cout<<n<<" is not a perfect square";
        }
    }
    return 0;
}