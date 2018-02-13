#include "Transaction.h"
#include "Checking.h"

void Transact(Account *pAccount) {

    std::cout << "Transaction started" << std::endl;
    std::cout << "Initial balance: " << pAccount->getBalance() << std::endl;
    pAccount->Deposit(100);
    pAccount->AccumulateInterest();
//    if (typeid(*pAccount) == typeid(Checking)) {
//        auto *pChecking = static_cast<Checking *>(pAccount);
//        std::cout << "Min Balance of Checking: " << pChecking->getMinimumBalance() << std::endl;
//    }
    auto *pChecking = dynamic_cast<Checking *>(pAccount);
    if (pChecking != nullptr) {
        std::cout << "Min Balance of Checking: " << pChecking->getMinimumBalance() << std::endl;
    }

    pAccount->Withdraw(170);
    std::cout << "Interest rate: " << pAccount->GetInterestRate() << std::endl;
    std::cout << "Final balance: " << pAccount->getBalance() << std::endl;
    std::cout << "Transaction ended" << std::endl;
}
