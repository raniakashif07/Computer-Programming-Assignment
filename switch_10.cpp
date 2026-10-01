#include <iostream>
using namespace std;
//university buildings
int main()
{
    int choice;

    cout << "Enter building code:\n";
    cout << "1. CS Block\n";
    cout << "2. Library\n";
    cout << "3. Science Block\n";
    cout << "4. Cafeteria\n";
    cout << "5. Auditorium\n";
    cin >> choice;

    switch (choice)
    {
        case 1:
            cout << "CS Block - Programming and computer classes.";
            break;

        case 2:
            cout << "Library - Books, research and studying.";
            break;

        case 3:
            cout << "Science Block - Science laboratories and classes.";
            break;

        case 4:
            cout << "Cafeteria - Food and drinks.";
            break;

        case 5:
            cout << "Auditorium - Events and presentations.";
            break;

        default:
            cout << "Invalid building code.";
    }

    return 0;
}