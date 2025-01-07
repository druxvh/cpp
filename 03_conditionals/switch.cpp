#include <iostream>
#include <string>

using namespace std;

int main()
{
    int drink;
    cout << "Select your drink \n";
    cout << "1. black coffee \n";
    cout << "2. tea \n";
    cout << "3. water \n";
    cout << "enter your choice in number below: \n";
    cin >> drink;

    switch (drink)
    {
    case 1:
        cout << "you selected black coffee";
        break;
    case 2:
        cout << "you selected tea";
        break;
    case 3:
        cout << "you selected water";
        break;

    default:
        cout << "Invalid";
        break;
    }

    return 0;
}