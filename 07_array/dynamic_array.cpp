#include <iostream>
using namespace std;

int *getArray(int size)
{
    int *arr = new int[size]; // Allocate memory on the heap
    for (int i = 0; i < size; i++)
    {
        arr[i] = i + 1; // Initialize elements
    }
    return arr; // Return pointer to the array
}

int main()
{
    int size = 5;
    int *myArray = getArray(size);
    cout << "getarr: " << myArray << endl;
    cout << "getarr: in depth mem addr 1st elm" << &myArray[0] << endl;

    for (int i = 0; i < size; ++i)
    {
        cout << myArray[i] << " ";
    }

    delete[] myArray; // Free allocated memory
    return 0;
}
