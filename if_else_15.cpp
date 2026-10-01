#include <iostream>
using namespace std;
int main()
//determine if delivery will be free or not
{
    float price;
    cout<<"Enter price in ruppees:";
    cin>>price;
    if (price<=0)
    {
        cout<<"Inavlid input.";
        return 0;
    }
    if (price>=5000)
    {
        cout<<"Delivery will be free!";
    }
    else
    {
        cout<<"No free delivery.";
    }
    return 0;
}