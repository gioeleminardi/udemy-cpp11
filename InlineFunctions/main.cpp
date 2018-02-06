#include <iostream>

inline int Square(int x) {
    return x * x;
}

int main() {
    int n = 5;
    int result = Square(n);
    std::cout << result << std::endl;
    return 0;
}