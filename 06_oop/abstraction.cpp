#include <iostream>

// Abstraction focuses on exposing only essential features of an object while hiding unnecessary details. It’s achieved through abstract classes (classes with pure virtual functions) or interfaces.

// Abstract Class
class Tea
{
public:
    virtual void prepareIngredients() = 0;
    virtual void brew() = 0;
    virtual void serve() = 0;

    void makeTea()
    {
        prepareIngredients();
        brew();
        serve();
    }
};

// Derived Class: ->  inherits from a base class and implements or extends its functionality.
class GreenTea : public Tea
{
public:
    void prepareIngredients() override
    {
        std::cout << "Preparing for Green tea" << std::endl;
    }
    void brew() override
    {
        std::cout << "Green tea is brewed" << std::endl;
    }
    void serve() override
    {
        std::cout << "Green tea is served" << std::endl;
    }
};

// Derived Class
class MasalaTea : public Tea
{
public:
    void prepareIngredients() override
    {
        std::cout << "Preparing for Masala tea" << std::endl;
    }
    void brew() override
    {
        std::cout << "Masala tea is brewed" << std::endl;
    }
    void serve() override
    {
        std::cout << "Masala tea is served" << std::endl;
    }
};

int main()
{
    GreenTea greentea;
    greentea.makeTea();
    MasalaTea masalatea;
    masalatea.makeTea();

    return 0;
}