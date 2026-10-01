
#include<iostream>
using namespace std;
int main()
{
    int op;
    int a,b;
    cin>>op>>a>>b;

    int result;
    bool valid=true;

    switch(op)
    {
        case 1:
            result=a+b;
            break;
        case 2:
            result=a-b;
            break;
        case 3:
            result=a*b;
            break;
        default:
            valid=false;
    }

    if(valid)
    {
        cout<<"result: "<<result<<" -> ";
        switch(result/10)
        {
            case 0:
                cout<<"single digit result";
                break;
            default:
                cout<<"multi digit result";
        }
    }
    else
    {
        cout<<"invalid operation";
    }
    return 0;
}