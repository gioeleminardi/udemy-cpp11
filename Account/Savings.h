//
// Created by gminardi on 13/02/18.
//

#ifndef ACCOUNT_SAVINGS_H
#define ACCOUNT_SAVINGS_H


#include "Account.h"

class Savings: public Account {
    float m_Rate;
public:
    Savings(const std::string &name, float balance, float m_Rate);

    virtual ~Savings();

    void AccumulateInterest() override;

    float GetInterestRate() const override;
};


#endif //ACCOUNT_SAVINGS_H
