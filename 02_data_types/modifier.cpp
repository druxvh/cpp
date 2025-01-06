#include <iostream>

using namespace std;
// Type Modifiers
int main()
{
    unsigned int positiveNum = 500;               // Unsigned: Only positive values
    signed int negativeNum = -300;                // Signed: Allows both positive and negative values (default for `int`)
    short int smallRangeNum = 32767;              // Short: Smaller range, uses less memory (2 bytes)
    long int largeRangeNum = 2147483647;          // Long: Larger range than `int` (4 or 8 bytes)
    long long veryLargeNum = 9223372036854775807; // Long Long: Largest range for integers (8 bytes)

    cout << positiveNum << endl;
    cout << negativeNum << endl;
    cout << smallRangeNum << endl;

    return 0;
}