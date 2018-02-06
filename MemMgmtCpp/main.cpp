#include <cstdio>
#include <iostream>
#include <cstring>
//#include "libsafec/safe_lib.h"

int Malloc() {
    //    auto *p = (int*)malloc(sizeof(int));
//    auto *p = (int*)calloc(1, sizeof(int));
//    auto *p = (int*)calloc(5, sizeof(int)); //Array of 5
    auto *p = (int *) malloc(5 * sizeof(int));
    if (p == nullptr) {
        printf("Failed to allocate memory\n");
        return -1;
    }
    *p = 5;
    printf("%d", *p);
    free(p);
    p = nullptr;
    free(p);
}

void New() {
    auto *p = new int(5);
//    *p = 6;
    std::cout << *p << std::endl;
    delete p;
    p = nullptr;
}

void NewArray() {
//    int *pArr = new int[5]{1, 2, 3, 4, 5};

    auto *pArr = new int[5];
    for (int i = 0; i < 5; ++i) {
        pArr[i] = i;
    }
    delete[]pArr;
//    pArr = nullptr; // No need if last line on func
}

void String() {
    auto *p = new char[4];
//    strcpy_s(p, 4, "C++");
    strcpy(p, "C++");
    std::cout << p << std::endl;
    delete[]p;
    p = nullptr;
}

int main() {
    New();
    NewArray();
    String();
    return 0;
}