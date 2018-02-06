#include <iostream>

int main() {
    // Default value for type
    int i{};
    float f{2.3f};
    char c{'a'};
    std::cout << i << " " << f << " " << c << std::endl;
    // Illegal. No implicit cast
    // int err{f};
    std::initializer_list<int> list{1, 2, 3, 4, 5};
    return 0;
}