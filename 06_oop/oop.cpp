#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Chai
{
public:
    // attributes (variables)
    string teaName;             // name of tea
    int servings;               // no. of servings
    vector<string> ingredients; // list of ingredients for the tea

    void displayChaiDetails()
    {
        cout << "Tea name : " << teaName << endl;
        cout << "Servings : " << servings << endl;
        cout << "ingredients: ";

        // special syntax for arrays / vectors
        for (string ingredient : ingredients)
        {
            cout << ingredient << " ";
        }
        cout << endl;
    }
};

int main()
{
    Chai chai;
    chai.teaName = "lemon tea";
    chai.servings = 2;
    chai.ingredients = {"sugar", "water", "tea", "lemon"};
    chai.displayChaiDetails();

    Chai masalaChai;
    masalaChai.teaName = "masala tea";
    masalaChai.servings = 5;
    masalaChai.ingredients = {"sugar", "water", "tea", "masala"};
    masalaChai.displayChaiDetails();

    return 0;
}