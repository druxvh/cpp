#include <iostream>
#include <vector>

class Chai
{

public:
    std::string *teaName;
    int servings;
    std::vector<std::string> ingredients;

    // constructor
    Chai(std::string name, int serve, std::vector<std::string> ingr)
    {
        teaName = new std::string(name);
        servings = serve;
        ingredients = ingr;
        std::cout << "Parameter Constructor called!" << std::endl;
    }

    // copy constructor
    Chai(Chai &copyObj)
    {
        teaName = new std::string(*copyObj.teaName);
        servings = copyObj.servings;
        ingredients = copyObj.ingredients;
        std::cout << "Copy Constructor called!" << std::endl;
    }

    // destructor
    ~Chai()
    {
        delete teaName;
        std::cout << "destructor called" << std::endl;
    }

    void displayChai()
    {
        std::cout << "tea name: " << *teaName << std::endl;
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
    std::cout << "---------------" << std::endl;
    Chai copyTea = lemonTea;
    copyTea.displayChai();
    std::cout << "---------------" << std::endl;
    *lemonTea.teaName = "Masala tea";
    lemonTea.displayChai();
    std::cout << "---------------" << std::endl;

    return 0;
}