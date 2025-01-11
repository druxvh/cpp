#include <iostream>
#include <string>
using namespace std;

int main()
{
    string response;

    while (true)
    {
        cout << "Do you want more tea (yes/no): ";
        cin >> response;
        if (response != "Yes" && response != "yes")
        {
            break;
        }
    }
    return 0;
}
