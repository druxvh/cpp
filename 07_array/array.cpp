#include <iostream>

using namespace std;

int totalChaiServed(int arr[], int size)
{
    int total = 0;

    for (int i = 0; i < size; i++)
    {
        total += arr[i];
    }
    return total;
}

int main()
{
    // int numbers[5] = {1, 2, 3, 4, 5};
    // cout << "Num: ";
    // for (int i = 0; i < 10; i++)
    // {
    //     cout << numbers[i] << " num" << endl;
    // }

    int chaiServed[5] = {10, 20, 30, 40, 50};
    int total = totalChaiServed(chaiServed, 5);
    cout << total << endl;

    return 0;
}