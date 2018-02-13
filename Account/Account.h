//
// Created by gminardi on 13/02/18.
//

#ifndef ACCOUNT_ACCOUNT_H
#define ACCOUNT_ACCOUNT_H

#include <string>


class Account {
private:
    std::string m_Name;
    int m_AccNo;
    static int s_ANGenerator;
protected:
    float m_Balance;
public:
    Account(const std::string &name, float balance);

    virtual ~Account();

    const std::string &getName() const;

    float getBalance() const;

    int getAccNo() const;

    void Withdraw(float amount);
    void Deposit(float amount);

    virtual void AccumulateInterest() = 0;
    virtual float GetInterestRate()const = 0;
};


#endif //ACCOUNT_ACCOUNT_H
