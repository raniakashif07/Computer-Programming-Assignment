
#include<iostream>
using namespace std;
int main()
{
    char light;
    cin>>light;

    switch(light)
    {
        case 'r':
        case 'R':
            cout<<"stop";
            break;
        case 'y':
        case 'Y':
            cout<<"get ready";
            break;
        case 'g':
        case 'G':
            cout<<"go";
            break;
        default:
            cout<<"invalid signal";
    }
    return 0;
}