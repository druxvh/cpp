#include <iostream>
#include <map>
#include <unordered_map>
// to store key value pairs where key storing the unique ids or values.
// by default sorts the data in ascending order

int main()
{
    // map (implemented as a self balancing tree)
    // insert, erase, count performs in O(logN)
    std::map<int, int> m;
    m[1] = 10;
    m[2] = 20;
    m[2] = 20;
    m[3] = 30;

    m.insert({4, 40});
    m.emplace(5, 50);

    for (auto map : m)
    {
        std::cout << map.first << " " << map.second << " ";
    }
    std::cout << std::endl;
    std::cout << m.count(2) << std::endl;

    // // multi map || does't allow [] (sq. bracket notation), duplicate values
    std::multimap<std::string, int> mm;
    mm.emplace("tv", 100);
    mm.emplace("tv", 100);
    mm.emplace("tv", 100);
    mm.emplace("tv", 100);

    for (auto mmap : mm)
    {
        std::cout << mmap.first << " " << mmap.second << std::endl;
    }
    std::cout << std::endl;
    std::cout << mm.count("tv") << std::endl;

    // unordered map || keeps the values in unordered order and stores in random order, no duplicate values
    // insert, erase, count --  performs in O(1)
    std::unordered_map<std::string, int> um;
    um.emplace("tv", 100);
    um.emplace("lgtv", 100);
    um.emplace("sonytv", 100);
    um.emplace("tv", 100);

    for (auto map : um)
    {
        std::cout << map.first << " " << map.second << std::endl;
    }
    std::cout << std::endl;
    std::cout << um.count("tv") << std::endl;

    return 0;
}