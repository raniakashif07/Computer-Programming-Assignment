#include <iostream>
using namespace std;
//course registeration
int main()
{
    int department, course;

    cout << "University Course Registration\n\n";

    cout << "Select Department:\n";
    cout << "1. Computer Science\n";
    cout << "2. Business\n";
    cout << "3. Engineering\n";
    cout << "4. Media Studies\n";
    cin >> department;

    switch (department)
    {
        case 1:
            cout << "\nComputer Science Courses:\n";
            cout << "1. Programming Fundamentals\n";
            cout << "2. Data Structures\n";
            cout << "3. Database Systems\n";
            cin >> course;

            switch (course)
            {
                case 1:
                    cout << "Programming Fundamentals selected.";
                    break;

                case 2:
                    cout << "Data Structures selected.";
                    break;

                case 3:
                    cout << "Database Systems selected.";
                    break;

                default:
                    cout << "Invalid course.";
            }
            break;

        case 2:
            cout << "\nBusiness Courses:\n";
            cout << "1. Marketing\n";
            cout << "2. Accounting\n";
            cout << "3. Entrepreneurship\n";
            cin >> course;

            switch (course)
            {
                case 1:
                    cout << "Marketing selected.";
                    break;

                case 2:
                    cout << "Accounting selected.";
                    break;

                case 3:
                    cout << "Entrepreneurship selected.";
                    break;

                default:
                    cout << "Invalid course.";
            }
            break;

        case 3:
            cout << "\nEngineering Courses:\n";
            cout << "1. Mechanics\n";
            cout << "2. Electronics\n";
            cout << "3. Thermodynamics\n";
            cin >> course;

            switch (course)
            {
                case 1:
                    cout << "Mechanics selected.";
                    break;

                case 2:
                    cout << "Electronics selected.";
                    break;

                case 3:
                    cout << "Thermodynamics selected.";
                    break;

                default:
                    cout << "Invalid course.";
            }
            break;

        case 4:
            cout << "\nMedia Studies Courses:\n";
            cout << "1. Film Studies\n";
            cout << "2. Digital Media\n";
            cout << "3. Journalism\n";
            cin >> course;

            switch (course)
            {
                case 1:
                    cout << "Film Studies selected.";
                    break;

                case 2:
                    cout << "Digital Media selected.";
                    break;

                case 3:
                    cout << "Journalism selected.";
                    break;

                default:
                    cout << "Invalid course.";
            }
            break;

        default:
            cout << "Invalid department.";
    }

    return 0;
}