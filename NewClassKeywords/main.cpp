#include <iostream>

class Integer {
    int m_Value{0};
public:
    Integer() = default;
//    Integer() {
//        m_Value = 0;
//    }
    Integer(int value) {
        m_Value = value;
    }
    // Copy Ctor REDUNDANT
    Integer(const Integer &) = default;
};

int main() {
    Integer i1;
    Integer i2(3);
    return 0;
}