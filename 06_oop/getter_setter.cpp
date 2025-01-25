#include <iostream>
#include <vector>

class Chai
{

private:
    std::string teaName;
    int servings;
    std::vector<std::string> ingredients;

public:
    Chai()
    {
        teaName = "unknown tea";
        servings = 1;
        ingredients = {"water", "tea", "milk"};
    }
    Chai(std::string name, int serve, std::vector<std::string> ingr)
    {
        teaName = name;
        servings = serve;
        ingredients = ingr;
    }
    // Getter
    std::string getTeaName()
    {
        return teaName;
    }
    int getTeaServings()
    {
        return servings;
    }
    std::vector<std::string> getTeaIngredients()
    {
        return ingredients;
    }
    // Setter
    void setTeaName(std::string name)
    {
        teaName = name;
    }
    void setTeaServings(int serve)
    {
        servings = serve;
    }
    void setTeaIngredients(std::vector<std::string> ingr)
    {
        ingredients = ingr;
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
    chai.setTeaName("masala tea");
    chai.setTeaServings(20);
    chai.displayChai();

    return 0;
}
