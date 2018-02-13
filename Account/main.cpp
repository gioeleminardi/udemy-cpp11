#include <iostream>
#include "Checking.h"

int main() {
    Checking acc("Bob", 1000);
    std::cout << "Initial balance: " << acc.getBalance() << std::endl;
    std::cout << "AccNo: " << acc.getAccNo() << std::endl;
//    acc.Withdraw(300);
//    acc.Deposit(150);
//    acc.AccumulateInterest();
    acc.Withdraw(951);
    std::cout << "Final balance: " << acc.getBalance() << std::endl;
//    std::cout << "Rate: " << acc.GetInterestRate() << std::endl;



    return 0;
}