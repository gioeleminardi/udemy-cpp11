//
// Created by gminardi on 13/02/18.
//

#include <iostream>
#include "Checking.h"

void Checking::Withdraw(float amount) {
    if (amount <= m_Balance - 50){
        m_Balance -= amount;
    } else {
        std::cout << "Balance will go below 50" << std::endl;
    }
}

Checking::Checking(const std::string &name, float balance) : Account(name, balance) {}

Checking::~Checking() {

}
