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

    Integer &operator*() {
        return *m_p;
    }
};




////Smart Shared Ptr C++11
void Process(std::shared_ptr<Integer> ptr) {
    std::cout << ptr->GetValue() << std::endl;
}

void CreateInteger(){
    std::shared_ptr<Integer> p(new Integer);
    (*p).SetValue(3);
    Process(p);
    std::cout << p->GetValue() << std::endl;
}

////Smart Unique Ptr C++11
//void Process(std::unique_ptr<Integer> ptr) {
//    std::cout << ptr->GetValue() << std::endl;
//}
//
//void CreateInteger(){
//    std::unique_ptr<Integer> p(new Integer);
//    (*p).SetValue(3);
//    std::cout << p->GetValue() << std::endl;
//    Process(std::move(p));
//}

// Smart Ptr Basic
//void CreateInteger() {
//    IntPtr p = new Integer;
//    p->SetValue(3);
//    (*p).SetValue(4);
//    std::cout << p->GetValue() << std::endl;
//}

int main() {
    CreateInteger();
    return 0;
}