#include "Integer.h"
#include <iostream>

//void Print(Integer i) {
//
//}

//Integer Add(int x, int y) {
//    return Integer(x + y);
//}

//Integer Add(const Integer &a, const Integer &b) {
//    Integer temp;
//    temp.SetValue(a.GetValue() + b.GetValue());
//    return temp;
//}

Integer operator+(const Integer &a, const Integer &b) {
    Integer temp;
    temp.SetValue(a.GetValue() + b.GetValue());
    return temp;
}

//void Process(Integer val) {
//
//}

int main() {
//    // // //    int *p1 = new int(5);
//    // // //    // Shallow Copy
//    // // //    int *p2 = p1;
//    // // //    // Deep Copy
//    // // //    int *p3 = new int(*p1);
//    // //
//    // //    Integer i(5);
//    // //    // Copy Constructor -> Shallow Copy by Default
//    // //    Integer i2(i);
//    // //    // Shallow Copy by default
//    // // //    i = i2;
//    // //    std::cout << i.GetValue() << std::endl;
//    //    Integer a(1), b(3);
//    //    a.SetValue(Add(a, b).GetValue());
//        Integer a(1), c(2);
//        auto b(std::move(a));
//        Process(std::move(c));
    Integer a(3), b(7);
    Integer sum = a + b;
    ++sum;
    sum++;
    std::cout << (sum++).GetValue() << std::endl;
    if (a == b) {

        std::cout << "a == b" << std::endl;
    } else {

        std::cout << "a != b" << std::endl;
    }
    return 0;
}