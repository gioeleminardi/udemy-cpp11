#include <iostream>

int main() {
    int a = 65, b = 2;
    float f = static_cast<float>(a) / b;
    char *p = reinterpret_cast<char *>(&a);
    const int x = 1;
    int *c = const_cast<int *>(&x);
    std::cout << f << std::endl;
    std::cout << p << std::endl;
    return 0;
}