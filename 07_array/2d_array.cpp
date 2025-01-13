#include <iostream>

using namespace std;

int main()
{
    // to declare 2d array
    int foo[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9},
    };

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << foo[i][j] << " | ";
        }
        cout << endl;
        cout << "----------";
        cout << endl;
    }

    return 0;
}