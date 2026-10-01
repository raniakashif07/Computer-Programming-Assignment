
#include<iostream>
using namespace std;
int main()
{
    char ch;
    cin>>ch;
    if(ch>='A' && ch<='Z')
    {
        cout<<"uppercase";
    }
    if(ch>='a' && ch<='z')
    {
        cout<<"lowercase";
    }
    return 0;
}