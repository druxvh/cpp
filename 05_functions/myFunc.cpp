#include <iostream>

using namespace std;
int tellMyNum(int num); // other way

// function (1st way -> put the funcs on the top level)
int numberLoop(int n)
{
    for (int i = 0; i <= n; i++)
    {
        cout << "Num -> " << i << endl;
    }
    return 0;
}

int main()
{
    numberLoop(10);
    int foo = tellMyNum(22);
    cout << "foo: " << foo << endl;
    return 0;
}

// other way of writing func
int tellMyNum(int num)
{
    return num;
}