#include <iostream>
using namespace std;
//study methods
int main()
{
    int choice;

    cout << "Choose a study mode:\n";
    cout << "1. Pomodoro\n";
    cout << "2. Deep Focus\n";
    cout << "3. Revision\n";
    cout << "4. Practice Questions\n";
    cin >> choice;

    switch (choice)
    {
        case 1:
            cout << "Pomodoro: Best for studying in short focused sessions.";
            break;

        case 2:
            cout << "Deep Focus: Best for difficult topics requiring concentration.";
            break;

        case 3:
            cout << "Revision: Best for reviewing previously studied topics.";
            break;

        case 4:
            cout << "Practice Questions: Best for testing your knowledge.";
            break;

        default:
            cout << "Invalid choice.";
    }

    return 0;
}