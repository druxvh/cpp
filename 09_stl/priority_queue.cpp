#include <iostream>
#include <queue>

// Under the hood its a complete binary tree either maxHeap or minHeap based structure.

int main()
{
    std::priority_queue<int> q;                                      // default -- max heap
    std::priority_queue<int, std::vector<int>, std::greater<int>> r; // min heap || greater is a functor here reverses the default behavior || vector is an underlying container to store elements and allows efficient heap operations

    q.push(5);
    q.push(3);
    q.push(10);
    q.push(4);

    r.push(5);
    r.push(3);
    r.push(10);
    r.push(4);

    while (!q.empty())
    {
        std::cout << q.top() << " ";
        q.pop();
    }
    std::cout << std::endl;

    while (!r.empty())
    {
        std::cout << r.top() << " ";
        r.pop();
    }
    std::cout << std::endl;

    return 0;
}