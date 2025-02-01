#include <iostream>
#include <deque>

// Internally it implements with the help of dynammic array so it allows random access to an element

int main()
{
    std::deque<int> d = {1, 2, 3, 4, 5};

    for (int val : d)
    {
        std::cout << val << " ";
    }

    std::cout << std::endl;
    std::cout << d[3] << std::endl; // random access to an element

    return 0;
}