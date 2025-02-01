#include <iostream>
#include <list>

// By default the list implementation is like a doubly linked list unlike vectors that are more like a dynammic array.

int main()
{
    std::list<int> l;
    l.push_front(1);
    l.push_back(2);
    l.push_front(3);
    l.pop_front();

    for (int val : l)
    {
        std::cout << val << " ";
    }
    std::cout << std::endl;

    return 0;
}