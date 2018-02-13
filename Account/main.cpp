#include <iostream>
#include "Checking.h"
#include "Transaction.h"
#include "Savings.h"

int main() {
    Savings acc("Bob", 100, 0.5f);
    Transaction(&acc);


    return 0;
}