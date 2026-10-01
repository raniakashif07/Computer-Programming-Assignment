#include <iostream>
using namespace std;
//determine speed of internet
int main()
{
    float download, upload, ping;

    cout << "Enter download speed (Mbps): ";
    cin >> download;

    if (download < 0)
    {
        cout << "Invalid input";
        return 0;
    }

    cout << "Enter upload speed (Mbps): ";
    cin >> upload;

    if (upload < 0)
    {
        cout << "Invalid input";
        return 0;
    }

    cout << "Enter ping (ms): ";
    cin >> ping;

    if (ping < 0)
    {
        cout << "Invalid input";
        return 0;
    }

    if (download < 10 || upload < 2 || ping > 150)
    {
        cout << "Poor Internet Connection";
    }
    else if (download >= 10 && download < 50 && upload >= 2 && upload < 10 && ping >= 80 && ping <= 150)
    {
        cout << "Average Internet Connection";
    }
    else if (download >= 50 && download < 100 && upload >= 10 && upload < 20 && ping >= 40 && ping < 80)
    {
        cout << "Good Internet Connection";
    }
    else if (download >= 100 && upload >= 20 && ping < 40)
    {
        cout << "Excellent Internet Connection";
    }
    else
    {
        cout << "Internet Connection does not fit a category";
    }

    return 0;
}