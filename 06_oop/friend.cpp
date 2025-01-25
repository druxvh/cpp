#include <iostream>
#include <vector>

class Chai
{
private:
    std::string teaName;
    int servings;
    std::vector<std::string> ingredients;

public:
    Chai(std::string name, int serve) : teaName(name), servings(serve) {};

    void display() const
    {
        std::cout << "tea name: " << teaName << std::endl;
        std::cout << "servings: " << servings << std::endl;
        std::cout << std::endl;
    }

    friend bool compareChaiServings(const Chai &chai1, const Chai &chai2);
};

bool compareChaiServings(const Chai &chai1, const Chai &chai2)
{
    return chai1.servings > chai2.servings;
}

int main()
{
    Chai masalaChai("masala chai", 40);
    Chai gingerTea("ginger tea", 30);
    masalaChai.display();
    gingerTea.display();
    std::cout << std::endl;
    std::cout << "masala chai have more servings? --> t/f :   ";

    if (compareChaiServings(masalaChai, gingerTea))
    {
        std::cout << "true" << std::endl;
    }
    else
    {
        std::cout << "false" << std::endl;
    }

    return 0;
}