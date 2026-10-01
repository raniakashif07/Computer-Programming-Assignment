#include<iostream>
using namespace std;
int main()
//Determine the type of triangle by using sides
{
 float a,b,c;
 cout<<"Enter side 1 of triangle:";
 cin>>a;
 cout<<"Enter side 2 of triangle:";
 cin>>b;
 cout<<"Enter side 3 of triangle:";
 cin>>c;

 if(a==b && b==c)
 {
    cout<<"type of triangle: Equilateral";
 }
 if((a==b || a==c || b==c) && !(a==b && b==c))
 {
    cout<<"type of triangle: Isosceles";
 }
 if (a!=b && b!=c || a!=c)
 {
    cout<<"type of triangle: Scalene";
 }
 return 0;
}