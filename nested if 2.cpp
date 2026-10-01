
#include<iostream>
#include<string>
using namespace std;

int main()
{
    string user,pass;
    cin>>user>>pass;
    if(user=="admin")
    {
        if(pass=="1234")
        {
            cout<<"login successfull";
        }
        else if(pass!="1234")
        {
            cout<<"incorrect password";

        }
        else
        {
          cout<<" user not found";

        }
        
    }
    else
        {
            cout<<"invaild ";
            
        }
        return 0;
}