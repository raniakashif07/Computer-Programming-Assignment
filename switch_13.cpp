#include <iostream>
using namespace std;
//music for your mood
int main()
{
    int mood;

    cout << "Choose your mood:\n";
    cout << "1. Chill\n";
    cout << "2. Energetic\n";
    cout << "3. Sad\n";
    cout << "4. Focused\n";
    cout << "5. Angry\n";
    cin >> mood;

    switch (mood)
    {
        case 1:
            cout << "Try chill and relaxing music.";
            break;

        case 2:
            cout << "Try upbeat and energetic music.";
            break;

        case 3:
            cout << "Try emotional or slow music.";
            break;

        case 4:
            cout << "Try instrumental or lo-fi music.";
            break;

        case 5:
            cout << "Try intense rock or energetic music.";
            break;

        default:
            cout << "Invalid mood.";
    }

    return 0;
}