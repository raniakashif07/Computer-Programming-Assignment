#include <iostream>
using namespace std;
int main()
//Determine grade
{
    int math, physics, computer, total;
    float percentage;
    cout << "Enter Math marks: ";
    cin >> math;
    cout << "Enter Physics marks: ";
    cin >> physics;
    cout << "Enter Computer marks: ";
    cin >> computer;
    if (math > 100 || physics > 100 || computer > 100)
    {
        cout << "Invalid marks" << endl;
    }
    if (math < 0 || physics < 0 || computer < 0)
    {
        cout << "Invalid marks" << endl;
    }
    total = math + physics + computer;
    percentage = (total / 300.0) * 100;
    cout << "Total marks: " << total;
    cout << "\nPercentage: " << percentage << "%";
    if (math >= 50 && physics >= 50 && computer >= 50)
    {
        cout << "\nStudent passed all subjects";
    }
    if (math >= 80 && physics >= 80 && computer >= 80)
    {
        cout << "\nStudent scored above 80 in every subject";
    }
    if (math < 50 || physics < 50 || computer < 50)
    {
        cout << "\nStudent has marks below 50 in at least one subject";
    }
    if (percentage >= 85 && math >= 50 && physics >= 50 && computer >= 50)
    {
        cout << "\nStudent qualifies for scholarship";
    }
}