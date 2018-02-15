
#include <iostream>
#include <typeinfo>
#include "Account.h"
#include "Savings.h"
#include "Checking.h"
#include "Transaction.h"


int main() {
    Savings acc("Bob", 100, 0.5f);
    acc.Withdraw(5000);
    Account *pAcc = &acc;
    Transact(&acc);

//    Account *p_acc = new Savings("Bob", 100, 0.05f);
//    delete p_acc;

//    Checking ch("Bob", 100, 50);
//    Transact(&ch);
//    Savings sa("Bob2", 100, 0.05f);
//    Transact(&sa);
//    std::cout << ch.getMinimumBalance() << std::endl;
//    Account *pAccount = &ch;
//
//    Checking *pChecking = static_cast<Checking*>(pAccount);

//    int i{};
//    bool z{};
//    const std::type_info &ti = typeid(pAcc);
//    if (ti == typeid(Savings)) {
//        std::cout << "typeid Savings" << std::endl;
//    } else {
//        std::cout << "Not Savings type!" << std::endl;
//    }
    return 0;
}