#include <iostream>
using namespace std;
int main()
//determine if file can be uploaded
{
    int file_size;
    cout<<"Enter the size of file in MB:";
    cin>>file_size;
    if (file_size<0)
    {
        cout<<"Invalid input.";
        return 0;
    }
    if (file_size<= 25)
    {
        cout<<"File succesfully uploaded.";
    }
    else 
    {
        cout<<"File size is too big. File upload is unsuccessfull.";
    }
    return 0;
}