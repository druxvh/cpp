#include <iostream>

using namespace std;

int main()
{
    // lambda (anonymous funcs)
    auto num = [](int foo)
    {
        cout << "foo: " << foo << endl;
    };
    num(111);
    return 0;
}
