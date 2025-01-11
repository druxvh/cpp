#include <iostream>
using namespace std;

int main()
{
    int order;
    cout << "How many orders you've?" << endl;
    cin >> order;
    while (order >= 0)
    {
        cout << "Order served: " << order << endl;
        order--;
    }
    cout << "All orders served" << endl;

    return 0;
}