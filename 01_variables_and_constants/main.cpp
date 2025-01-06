#include <iostream>
using namespace std;

int main()
{
    int age = 25;         // Integer variable
    float pi = 3.14;      // Floating point variable
    char grade = 'A';     // Character variable
    bool isPassed = true; // Boolean variable

    const double another_pi = 3.14159; // Immutable & Double precission

    cout << "Age: " << age << endl;
    cout << "pi: " << pi << endl;
    cout << "grade: " << grade << endl;
    cout << "isPassed: " << isPassed << endl;
    cout << "another pi: " << another_pi << endl;

    return 0;
}