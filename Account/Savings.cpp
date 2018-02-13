//
// Created by gminardi on 13/02/18.
//

#include "Savings.h"

Savings::Savings(const std::string &name, float balance, float m_Rate) : Account(name, balance), m_Rate(m_Rate) {}

Savings::~Savings() {

}

void Savings::AccumulateInterest() {
    m_Balance += (m_Balance * m_Rate);
}

float Savings::GetInterestRate() const {
    return m_Rate;
}

