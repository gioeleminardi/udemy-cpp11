//
// Created by gminardi on 13/02/18.
//

#include <iostream>
#include "Checking.h"

Checking::~Checking() {
    std::cout << "~Checking()" << std::endl;
}

Checking::Checking(const std::string &name, float balance, float minbalance) : Account(name, balance),
                                                                               m_MinimumBalance(minbalance) {
    std::cout << "Checking()" << std::endl;

}

void Checking::Withdraw(float amount) {
    if ((m_Balance - amount) >= m_MinimumBalance) {
        Account::Withdraw(amount);
    } else {
        throw std::out_of_range("Balance will go below 50");
    }
}


float Checking::getMinimumBalance() const {
    return m_MinimumBalance;
}
