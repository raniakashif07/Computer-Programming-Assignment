#include <iostream>
using namespace std;
int main()
//determine the quadrant of coordinates
{
    float x,y;
    cout<<"enter x cordinate:";
    cin>>x;
    cout<<"enter y cordinate:";
    cin>>y;

    if (x>0 && y>0)
    {
        cout<<"Coordinates lie in first quadrant";
    }
    if (x<0 && y>0)
    {
        cout<<"Coordinates lie in second quadrant";
    }
    if (x<0 && y<0)
    {
        cout<<"Coordinates lie in third quadrant";
    }
    if (x>0 && y<0)
    {
        cout<<"Coordinates lie in fourth quadrant";
    }
    if(x==0 && y!=0)
    {
        cout<<"Point lies on y-axis";
    }
    if(y==0 && x!=0)
    {
       cout<<"Point lies on x-axis"; 
    }
    if(x==0 && y==0) 
    {
        cout<<"Point lies at origin";
    }
    return 0;
}