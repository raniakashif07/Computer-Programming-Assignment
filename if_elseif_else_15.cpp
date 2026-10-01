#include <iostream>
using namespace std;
int main ()
//phone storage checker
{
    int used_storage, total_storage;
    cout<<"Enter total phone storage:";
    cin>>total_storage;

    if (total_storage<=0)
    {
        cout<<"invalid input";
        return 0;
    }

    cout<<"Enter used storage:";
    cin>>used_storage;

    if (used_storage<0)
    {
        cout<<"invalid input";
        return 0;
    }

    if (used_storage <= 0.5*total_storage)
    {
        cout<<"Plenty of space";
    }
    else if (used_storage<=0.7*total_storage && used_storage >= 0.5*total_storage)
    {
        cout<<"Normal space";
    }
    else if (used_storage<=0.85*total_storage && used_storage >= 0.7*total_storage)
    {
        cout<<"Storage is getting full";
    }
    else if (used_storage<=0.95*total_storage && used_storage >= 0.85*total_storage)
    {
        cout<<"Low storage";
    }
    else if (used_storage == total_storage && used_storage >= 0.95*total_storage)
    {
        cout<<"Critically full";
    }
    else 
    {
        cout<<"invalid input";
    }

}