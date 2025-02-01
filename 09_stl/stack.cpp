#include <iostream>
#include <stack>

// Stack is a LIFO (Last-In First-Out) based datastructure

int main()
{
    std::stack<int> s;
    s.push(1);
    s.push(2);
    s.push(3);
    s.push(4);

    // Stack swap
    std::stack<int> t;
    t.swap(s); // swaps with s

    std::cout << "s size: " << s.size() << std::endl;
    std::cout << "t size: " << t.size() << std::endl;

    // Printing Stack
    while (!t.empty())
    {
        std::cout << t.top();
        t.pop();
    }
    std::cout << std::endl;

    return 0;
}