//
// Created by gminardi on 13/02/18.
//

#include "Account.h"
#include <iostream>


int Account::s_ANGenerator = 1000;

Account::Account(const std::string &name, float balance) : m_Name(name), m_Balance(balance) {
    m_AccNo = ++s_ANGenerator;
}

Account::~Account() {

}

const std::string &Account::getName() const {
    return m_Name;
}

float Account::getBalance() const {
    return m_Balance;
}

int Account::getAccNo() const {
    return m_AccNo;
}

void Account::Withdraw(float amount) {
    if (amount <= m_Balance)
        m_Balance -= amount;
    else
        std::cout << "No money!" << std::endl;
}

void Account::Deposit(float amount) {
    m_Balance += amount;
}

void Account::AccumulateInterest() {

}

float Account::GetInterestRate() const {
    return 0;
}
