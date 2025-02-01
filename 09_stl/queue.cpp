#include <iostream>
#include <queue>

// Queue is a FIFO (First-In First-Out) based datastructure

int main()
{
    std::queue<int> q;
    std::queue<int> r;

    q.push(1);
    q.push(2);
    q.push(3);

    r.swap(q); // swap

    while (!r.empty())
    {
        std::cout << r.front() << " ";
        r.pop();
    }
    std::cout << std::endl;

    return 0;
}