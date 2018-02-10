#include <iostream>
//#include <cstring>

const char *Combine(const char *pFirst, const char *pLast) {
    auto *fullname = new char[strlen(pFirst) + strlen(pLast) + 1];
    strcpy(fullname, pFirst);
    strcat(fullname, pLast);
    return fullname;
}

int main() {
    char first[10];
    char last[10];
    std::cin.getline(first, 10);
    std::cin.getline(last, 10);

    const char *pFullName = Combine(first, last);
    std::cout << pFullName << std::endl;
    delete[] pFullName;
    return 0;
}