#include "Integer.h"
#include <iostream>

class IntPtr {
    Integer *m_p;
public:
    IntPtr(Integer *m_p) : m_p(m_p) {}

    ~IntPtr() {
        delete m_p;
    }

    Integer *operator->() {
        return m_p;
    }

    Integer &operator*(){
        return *m_p;
    }
};

void CreateInteger() {
    IntPtr p = new Integer;
    p->SetValue(3);
    (*p).SetValue(4);
    std::cout << p->GetValue() << std::endl;
}

int main() {
    CreateInteger();
    return 0;
}