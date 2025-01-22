#include <iostream>

// `*` pointer --> to declare memory data type & dereference operator
// `&` used to get memory address of a variable (reference of memory)

using namespace std;

int main()
{
    string name = "drx";
    int age = 21;
    string favs[3] = {"playstation", "JS", "python"};

    string *pName = &name;
    int *pAge = &age;
    string *pFavs = favs;

    cout << "name: " << name << endl;
    cout << "age: " << age << endl;
    cout << "favs: " << favs << endl;
    cout << "pname: " << *pName << endl;
    cout << "page: " << *pAge << endl;
    cout << "pfavs: " << *pFavs << endl;

    return 0;
}