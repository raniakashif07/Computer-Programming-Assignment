
#include<iostream>
#include<string>
using namespace std;
int main()
{
    int rem,withroll,balance;
    string PIN;

    cin>>PIN;
    cin>>withroll;

    balance=10000;
    
    if(PIN=="1234")
    {
        if(balance>0 && withroll<balance)
        {



            rem=balance-withroll;

            cout<<"withroll"<<withroll;
            cout<<"rem "<<rem;

        }
        else
        {
          cout<<" incorrect pin";

        }

    }
    else
    {
        cout<<"invalid";

    }
    return 0;
}