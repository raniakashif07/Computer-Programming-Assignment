
#include<iostream>
#include<string>
using namespace std;
int main()
{
    string pass;
    cin>>pass;

    bool hasUpper=false, hasLower=false, hasDigit=false, hasSpecial=false;

    for(char c: pass)
    {
        if(c>='A' && c<='Z') hasUpper=true;
        if(c>='a' && c<='z') hasLower=true;
        if(c>='0' && c<='9') hasDigit=true;
        if(!((c>='A'&&c<='Z')||(c>='a'&&c<='z')||(c>='0'&&c<='9'))) hasSpecial=true;
    }

    int score=hasUpper+hasLower+hasDigit+hasSpecial;

    if(pass.length()<6)
    {
        cout<<"weak (too short)";
    }
    else if(score<=1)
    {
        cout<<"weak";
    }
    else if(score==2 || score==3)
    {
        cout<<"medium";
    }
    else
    {
        cout<<"strong";
    }
    return 0;
}