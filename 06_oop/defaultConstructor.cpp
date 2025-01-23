#include <iostream>
#include <vector>

class Chai
{
private:
    std::string teaName;
    int servings;
    std::vector<std::string> ingredients;

public:
    // default constructor
    Chai()
    {
        teaName = "Unknown";
        servings = 1;
        ingredients = {"water", "milk", "tea"};
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
    Chai chai;
    chai.displayChai();
    return 0;
}