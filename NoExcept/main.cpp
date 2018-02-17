#include <iostream>

void Test(int x)noexcept(false) {
    std::cout << x << std::endl;
}

int Sum(int x, int y)noexcept(noexcept(Test(x))) {
    Test(x);
    return x + y;
}

class A{
public:
    ~A(){
//        throw 3;
    }
};

int main() {
    A a;
    std::cout << std::boolalpha << noexcept(a.~A()) << std::endl;
    try {
        Sum(3, 5);
    } catch (int x) {
        std::cout << x << std::endl;
    }
    return 0;
}