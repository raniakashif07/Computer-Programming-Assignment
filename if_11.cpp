#include <iostream>
using namespace std;
int main()
//detrmine wether dat is valid or not
{
    int day,month,year;
    cout<<"enter days:";
    cin>>day;
    cout<<"enter month:";
    cin>>month;
    cout<<"enter year:";
    cin>>year; 
    
    if((month==1 || month==3 || month==5 || month==7 ||
       month==8 || month==10 || month==12) && (day<=31 && day>=1))
    {
        cout<<"Valid date";
    }

    if((month==4 || month==6 || month==9 || month==11) && (day<=30 && day>=1))
    {
        cout<<"Valid date";
    }
    if((month==2) && ((year%4==0 && year%100!=0)||year%400==0) && (day<=29 && day>=1))
    {
        cout<<"Valid date";
    }
     if((month==2) && !((year%4==0 && year%100!=0)||year%400==0) && (day<=28 && day>=1))
    {
        cout<<"Valid date";
    }
    if(!((month==1 || month==3 || month==5 || month==7 ||
      month==8 || month==10 || month==12) && day>=1 && day<=31) &&
   !((month==4 || month==6 || month==9 || month==11) && day>=1 && day<=30) &&
   !(month==2 && ((year%4==0 && year%100!=0) || year%400==0) && day>=1 && day<=29) &&
   !(month==2 && !((year%4==0 && year%100!=0) || year%400==0) && day>=1 && day<=28))
{
    cout<<"Invalid date";
}
return 0;
}