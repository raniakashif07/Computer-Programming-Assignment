#include <iostream>
using namespace std;
//flight boarding group
int main()
{
    char group;

    cout << "Enter boarding group (A, B, C or D): ";
    cin >> group;

    switch (group)
    {
        case 'A':
        case 'a':
            cout << "Priority Boarding - Board first.";
            break;

        case 'B':
        case 'b':
            cout << "Business Boarding - Proceed to the business lane.";
            break;

        case 'C':
        case 'c':
            cout << "Standard Boarding - Wait for your group to be called.";
            break;

        case 'D':
        case 'd':
            cout << "Economy Boarding - Board when Group D is announced.";
            break;

        default:
            cout << "Invalid boarding group.";
    }

    return 0;
}