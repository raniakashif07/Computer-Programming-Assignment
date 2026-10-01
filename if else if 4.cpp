
#include<iostream>
using namespace std;
int main()
{
    char file;
    int rank;
    cin>>file>>rank;

    if(file<'a' || file>'h' || rank<1 || rank>8)
    {
        cout<<"invalid square";
    }
    else
    {
        int col=file-'a'+1;
        int sum=col+rank;

        if(sum%2==0)
        {
            cout<<"dark square";
        }
        else
        {
            cout<<"light square";
        }
    }
    return 0;
}