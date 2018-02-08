#include <iostream>

class Integer {
    int m_Value;
public:
    Integer() {
        m_Value = 0;
    }
    Integer(int value) {
        m_Value = value;
    }
};

int main() {
    Integer i1;
    Integer i2(3);
    return 0;
}