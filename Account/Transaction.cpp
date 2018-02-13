#include "Transaction.h"

void Transaction(Account *pAccount) {

    std::cout << "Transaction started" << std::endl;
    std::cout << "Initial balance: " << pAccount->getBalance() << std::endl;
    pAccount->Deposit(100);
    pAccount->AccumulateInterest();
    pAccount->Withdraw(170);
    std::cout << "Interest rate: " << pAccount->GetInterestRate() << std::endl;
    std::cout << "Final balance: " << pAccount->getBalance() << std::endl;
    std::cout << "Transaction ended" << std::endl;
}
