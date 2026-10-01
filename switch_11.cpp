#include <iostream>
using namespace std;
//game difficulty
int main()
{
    int choice;

    cout << "Choose difficulty:\n";
    cout << "1. Story\n";
    cout << "2. Easy\n";
    cout << "3. Normal\n";
    cout << "4. Hard\n";
    cout << "5. Nightmare\n";
    cin >> choice;

    switch (choice)
    {
        case 1:
            cout << "Story Mode - Unlimited lives.";
            break;

        case 2:
            cout << "Easy Mode - 5 lives.";
            break;

        case 3:
            cout << "Normal Mode - 3 lives.";
            break;

        case 4:
            cout << "Hard Mode - 2 lives.";
            break;

        case 5:
            cout << "Nightmare Mode - 1 life.";
            break;

        default:
            cout << "Invalid difficulty.";
    }

    return 0;
}