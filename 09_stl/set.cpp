#include <iostream>
#include <set>
#include <unordered_set>

// a datastructure that stores all the unique values only in some sorted order, ignores the duplicate values.
// internally follows a self balancing tree implementation
// insert, erase, count performs in O(logN)

int main()
{
    // set
    std::set<int> s;
    s.insert(1);
    s.insert(1);
    s.insert(2);

    // multi-set -- support duplicate values
    std::multiset<int> ms;
    ms.insert(1);
    ms.insert(1);
    ms.insert(2);
    ms.insert(3);

    // unordered-set -- stores in random order, performs insert, erase, count in O(1)
    std::unordered_set<int> us;
    us.insert(1);
    us.insert(1);
    us.insert(2);
    us.insert(3);

    for (auto val : us)
    {
        std::cout << val << " ";
    }
    std::cout << std::endl;
    std::cout << us.size() << std::endl;

    return 0;
}