// Call By Value & Call By Reference

#include <iostream>
using namespace std;

// Copies the real val and excutes the func on the copied val without affecting the real value.
void callByValue(int number)
{
    number = number + 10;
    cout << "CBVal: " << number << endl;
}

// the `&` picks and mutates the real value saved in the memory
void callByRef(int &number)
{
    number = number + 10;
    cout << "CBRef: " << number << endl;
}

int main()
{
    int foo = 5;
    cout << "1 | foo: " << foo << endl;
    callByValue(foo);
    cout << "2 | foo val after exec CBVal: " << foo << endl;
    callByRef(foo);
    cout << "3 | foo val after exec CBRef: " << foo << endl;

    return 0;
}
