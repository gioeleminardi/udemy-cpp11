#include <iostream>
#include <cstring>


std::string ToUpper(const std::string &str) {
    std::string upperStr{};
    for (int i = 0; i < str.length(); ++i) {
        upperStr += static_cast<char>(toupper(str[i]));
    }
    return upperStr;
}


std::string ToLower(const std::string &str) {
    std::string upperStr{};
    for (int i = 0; i < str.length(); ++i) {
        upperStr += static_cast<char>(tolower(str[i]));
    }
    return upperStr;
}

int main() {
    std::string test = "ciao";
    std::string upper = ToUpper(test);
    std::cout << upper << std::endl;
    std::string lower = ToLower(upper);
    std::cout << lower << std::endl;
    return 0;
}