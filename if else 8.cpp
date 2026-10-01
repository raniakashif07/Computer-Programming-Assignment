
#include<iostream>
using namespace std;
int main()
{
    char ch;
    cin.get(ch);

    if(ch>='A' && ch<='Z')
    {
        cout<<"uppercase letter";
    }
    else
    {
        if(ch>='a' && ch<='z')
        {
            cout<<"lowercase letter";
        }
        else
        {
            if(ch>='0' && ch<='9')
            {
                cout<<"digit";
            }
            else
            {
                if(ch==' ')
                {
                    cout<<"space";
                }
                else
                {
                    cout<<"special character";
                }
            }
        }
    }
    return 0;
}