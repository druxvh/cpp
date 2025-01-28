#include <iostream>

class Tea
{
protected:
    std::string teaName;
    int servings;

public:
    Tea(std::string name, int serve) : teaName(name), servings(serve)
    {
        std::cout << "Tea constructor called." << std::endl;
    }
    virtual void brew() const
    {
        std::cout << "Brewing " << teaName << std::endl;
    }
    virtual void serve() const
    {
        std::cout << "Serving " << teaName << std::endl;
    }
    virtual ~Tea()
    {
        std::cout << "Destructor Called." << std::endl;
    }
};

// Inheriting the class
class GreenTea : public Tea
{
public:
    GreenTea(int serve) : Tea("Green Tea", serve)
    {
        std::cout << "Green Tea constructor called" << std::endl;
    }
    void brew() const override
    {
        std::cout << "Brewing Green Tea" << std::endl;
    }
    ~GreenTea()
    {
        std::cout << "Green tea Destructor called" << std::endl;
    }
};

class MasalaTea : public Tea
{
public:
    MasalaTea(int serve) : Tea("Masala Tea", serve)
    {
        std::cout << "Masala Tea constructor called" << std::endl;
    }
    void brew() const override
    {
        std::cout << "Brewing Masala tea" << std::endl;
    }
    ~MasalaTea()
    {
        std::cout << "Masala tea Destructor called" << std::endl;
    }
};

int main()
{
    Tea *tea1 = new GreenTea(3);
    Tea *tea2 = new MasalaTea(6);

    tea1->brew();
    tea1->serve();
    tea2->brew();
    tea2->serve();

    return 0;
}