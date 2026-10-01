
#include<iostream>
using namespace std;
int main()
{
    int age;
    char passedTest;    
    cin>>age>>passedTest;

    if(age>=18)
    {
        if(passedTest=='y')
        {
            cout<<"license approved";
        }
        else
        {
            cout<<"must pass the driving test first";
        }
    }
    else
    {
        cout<<"too young to apply";
    }
    return 0;
}
