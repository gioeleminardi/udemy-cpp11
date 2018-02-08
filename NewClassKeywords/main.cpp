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

    // With delete compiler will not generate default copy ctor
    Integer(const Integer &) = delete;

    void SetValue(int value) {
        m_Value = value;
    }

    void SetValue(float) = delete;
};

int main() {
    Integer i1;
    Integer i2(3);
    i1.SetValue(42);
    // Deleted function
//    i1.SetValue(3f);
    return 0;
}