#include <iostream>
#include <vector>
// Arrays are constant in size while vectors have a dynamic nature.

// loop to print vectors values
int loop(std::vector<int> vec)
{
    for (int val : vec)
    {
        std::cout << val << " ";
    }
    std::cout << std::endl;
    return 0;
}

int main()
{
    std::vector<int> vec;

    vec.push_back(1);
    vec.push_back(2);
    vec.push_back(3);
    vec.push_back(4);
    vec.push_back(5);

    loop(vec);

    std::cout << "Size: " << vec.size() << std::endl;
    std::cout << "Capacity: " << vec.capacity() << std::endl;

    std::cout << vec.at(0) << std::endl; // to check the element's value of a given pos

    std::cout << vec[1] << std::endl; // to check the element's value of a given pos

    std::cout << vec.front() << std::endl; // first el of vector

    std::cout << vec.back() << std::endl; // last el of vector

    vec.erase(vec.begin()); // vector.erase(pos) or vector.erase(start, end) --- Changes the size but keeps the capacity unchanged.

    vec.insert(vec.begin() + 1, 4); // vector.insert(pos, value)

    vec.clear(); // clears the vector and its size but keep its capacity unchanged.

    vec.empty(); // to know if a vector is empty or not

    return 0;
}