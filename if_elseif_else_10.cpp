#include <iostream>
using namespace std;
int main ()
//determine laptop performance
{
    int RAM, processor;
    string storage_type;
    cout<<"enter RAM:";
    cin>>RAM;
    if (RAM<0)
    {
        cout<<"invalid input";
        return 0;
    } 

    cout<<"enter proccessor generation:";
    cin>>processor;
    if (processor<0)
    {
        cout<<"invalid input";
        return 0;
    }

    cout<<"enter storage type:";
    cin>>storage_type;
    if ((storage_type != "ssd" && storage_type != "SSD") && (storage_type != "hdd" && storage_type!= "HDD"))
    {
        cout<<"invalid input";
        return 0;
    }


    if (RAM<=4 || ((storage_type== "HDD" || storage_type== "hdd") || (storage_type== "SSD" || storage_type== "ssd")) && processor<8)
    {
        cout<<"Low performance";
    }
    else if ((RAM<=8 && RAM>4) || ((storage_type== "HDD" || storage_type== "hdd") || (storage_type== "SSD" || storage_type== "ssd")) && (processor>=8 && processor<=10))
    {
        cout<<"Average performance";
    }
    else if ((RAM>=16 && RAM>8) || ((storage_type== "HDD" || storage_type== "hdd") || (storage_type== "SSD" || storage_type== "ssd")) && (processor>=11) )
    {
        cout<<"High Performance";
    }
    else
    {
        cout<<"invalid input";
    }
}