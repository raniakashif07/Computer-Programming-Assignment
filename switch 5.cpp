
#include<iostream>
using namespace std;
int main()
{
    char grade;
    cin>>grade;

    switch(grade)
    {
        case 'A':
            cout<<"GPA: 4.0";
            break;
        case 'B':
            cout<<"GPA: 3.0";
            break;
        case 'C':
            cout<<"GPA: 2.0";
            break;
        case 'D':
            cout<<"GPA: 1.0";
            break;
        case 'F':
            cout<<"GPA: 0.0";
            break;
        default:
            cout<<"invalid grade";
    }
    return 0;
}