#include <iostream>

// Def: The wrapping up of data and information in a single unit. In Object Oriented Programming, Encapsulation is defined as binding together the data and the functions that manipulate them.

// Encapsulated Class
class BankAccount
{
private:
    std::string accountNumber;
    double balance;

public:
    // Default Constructor
    BankAccount(std::string accNo, double initialBalance)
    {
        accountNumber = accNo;
        balance = initialBalance;
    }

    // Getter to see balance
    double getBalance() const
    {
        return balance;
    }

    // Deposit money
    void deposit(double amount)
    {
        if (amount > 0)
        {
            balance += amount;
            std::cout << "Deposited: " << amount << std::endl;
        }
        else
        {
            std::cout << "Invalid Deposit Amount" << std::endl;
        }
    }

    // Withdraw money
    void withdraw(double amount)
    {
        if (amount > 0 && amount <= balance)
        {
            balance -= amount;
            std::cout << "Withdraw: " << amount << std::endl;
        }
        else
        {
            std::cout << "Invalid Request" << std::endl;
        }
    }
};

int main()
{
    BankAccount dhruv("324242442", 200.00);
    std::cout << "total bal: " << dhruv.getBalance() << std::endl;

    dhruv.deposit(400);
    std::cout << "total bal: " << dhruv.getBalance() << std::endl;
    dhruv.deposit(4000);
    std::cout << "total bal: " << dhruv.getBalance() << std::endl;
    dhruv.withdraw(3276);
    std::cout << "total bal: " << dhruv.getBalance() << std::endl;

    return 0;
}