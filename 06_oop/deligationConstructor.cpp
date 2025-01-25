#include <iostream>
#include <vector>

class Chai
{
private:
    std::string teaName;
    int servings;
    std::vector<std::string> ingredients;

public:
    // deligation constructor
    Chai(std::string name) : Chai(name, 1, {"water", "lemon", "honey"}) {};

    // constructor
    Chai(std::string name, int serve, std::vector<std::string> ingr)
    {
        teaName = name;
        servings = serve;
        ingredients = ingr;
        std::cout << "Constructor called!" << std::endl;
    }

    void displayChai()
    {
        std::cout << "tea name: " << teaName << std::endl;
        std::cout << "servings: " << servings << std::endl;
        std::cout << "ingredients: " << " ";

        for (std::string ingredient : ingredients)
        {
            std::cout << ingredient << " ";
        }

        std::cout << std::endl;
    }
};

int main()
{
    Chai lemonTea("Lemon tea", 1, {"water", "lemon", "honey"});
    lemonTea.displayChai();
    Chai masala("masala tea");
    masala.displayChai();
    return 0;
}