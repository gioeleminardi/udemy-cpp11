#include <iostream>

int main() {
    std::string filename {R"(\home\temp\test.txt)"};
    std::cout << filename << std::endl;
    std::string message{R"MSG(C++ introduced filesystem API "(In C++17)")MSG"};
    std::cout << message << std::endl;
    return 0;
}