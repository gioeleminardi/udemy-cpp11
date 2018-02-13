//
// Created by gminardi on 13/02/18.
//

#ifndef ACCOUNT_CHECKING_H
#define ACCOUNT_CHECKING_H


#include "Account.h"

class Checking : public Account {
public:
    using Account::Account;
//    Checking(const std::string &name, float balance);

    ~Checking() override;

    void Withdraw(float amount) override;
};


#endif //ACCOUNT_CHECKING_H
