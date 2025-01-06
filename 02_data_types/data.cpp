#include <iostream>

using namespace std;

// Primitive Data Types
int main()
{
    int age = 21;                             // Integer: Whole numbers (4 bytes)
    float cgpa = 7.55;                        // Float: Decimal numbers, single precision (4 bytes)
    double percentile = 97.6574;              // Double: Decimal numbers, double precision (8 bytes)
    char name = 'A';                          // Character: Single character/ASCII (1 byte)
    bool isStudent = true;                    // Boolean: true/false (1 byte)

    cout << name << endl;
    cout << age << endl;
    cout << cgpa << endl;
    cout << percentile << endl;
    cout << isStudent << endl;

    return 0;
}