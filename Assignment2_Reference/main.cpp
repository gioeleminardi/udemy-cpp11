#include <iostream>

void Add(int a, int b, int &result) {
    result = a+b;
}

void Factorial(int a, int &result) {
    result = 1;
    for (int i = 1; i <= a; ++i) {
        result *= i;
    }
}

void Swap(int &a, int &b) {
    int temp = a;
    a = b;
    b = temp;
}

int main() {

    int a{3};
    int b{7};
    int res{};
    std::cout << a  << " " << b << std::endl;

    Add(a, b, res);
    std::cout << res << std::endl;

    Factorial(a, res);
    std::cout << res << std::endl;

    Swap(a, b);
    std::cout << a  << " " << b << std::endl;


    return 0;
}