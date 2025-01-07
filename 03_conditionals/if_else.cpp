#include <iostream>
#include <string>

int main()
{
    std::string word;
    std::cout << "Enter `check` to evaluate: \n";
    std::cin >> word;

    if (word == "check")
    {
        std::cout << "its working, you wrote check" << std::endl;
    }
    else if (word == "1")
    {
        std::cout << "you wrote 1" << std::endl;
    }
    else
    {
        std::cout << "you didn't wrote check" << std::endl;
    }

    return 0;
}