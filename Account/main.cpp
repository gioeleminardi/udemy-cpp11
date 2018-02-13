
#include "Account.h"
#include "Savings.h"

int main() {
//    Savings acc("Bob", 100, 0.5f);
//    Transaction(&acc);

    Account *p_acc = new Savings("Bob", 100, 0.05f);
    delete p_acc;

    return 0;
}