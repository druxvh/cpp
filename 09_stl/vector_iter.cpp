#include <iostream>
#include <vector>

int main()
{

    std::vector<int> vec = {1, 2, 3, 4, 5};
    std::cout << *(vec.end() - 1) << std::endl;

    std::vector<int>::iterator iter;

    // vector iterator
    for (auto iter = vec.begin(); iter != vec.end(); iter++)
    {
        std::cout << *(iter) << " ";
    }

    std::cout << std::endl;

    // vector reverse iterator
    for (auto iter = vec.rbegin(); iter != vec.rend(); iter++)
    {
        std::cout << *(iter) << " ";
    }

    std::cout << std::endl;

    return 0;
}