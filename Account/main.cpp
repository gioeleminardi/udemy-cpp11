#include <iostream>
#include "Savings.h"

int main() {
    Savings acc("Bob", 1000, 0.5f);
    std::cout << "Initial balance: " << acc.getBalance() << std::endl;
    std::cout << "AccNo: " << acc.getAccNo() << std::endl;
    acc.Withdraw(300);
    acc.Deposit(150);
    acc.AccumulateInterest();
    std::cout << "Final balance: " << acc.getBalance() << std::endl;
    acc.Withdraw(851);
    std::cout << "Rate: " << acc.GetInterestRate() << std::endl;



    return 0;
}