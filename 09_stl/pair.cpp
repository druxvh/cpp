#include <iostream>
#include <vector>

// Special container part of the c++ utility library

int main()
{
    // pair of int & int
    std::pair<int, int> p = {2, 5};
    std::cout << p.first << " " << p.second << std::endl;

    // pair of string & int
    std::pair<std::string, int> q = {"Hey", 5};
    std::cout << q.first << " " << q.second << std::endl;

    // pair storing another pair's value
    std::pair<std::string, int> r = q;
    std::cout << r.first << " " << r.second << std::endl;

    // pair in a pair
    std::pair<int, std::pair<int, int>> s = {1, {2, 3}};
    std::cout << s.first << " " << s.second.first << " " << s.second.second << std::endl;

    // vector of pairs
    std::vector<std::pair<int, int>> vec = {{1, 2}, {3, 4}, {5, 6}};

    vec.push_back({7, 8});   // inserts
    vec.emplace_back(9, 10); // in-place creates onjects || also better effeciency than push back

    for (auto p : vec)
    {
        std::cout << p.first << " " << p.second << " ";
    }
    std::cout << std::endl;

    return 0;
}