#include <iostream>

//Returns r-value
int Add(int x, int y) {
    return x + y;
}

//Return l-value
int &Transform(int &x) {
    x *= x;
    return x;
}

void Print(int &x) {
    std::cout << "Print(int&)" << std::endl;
}

void Print(const int &x) {

    std::cout << "Print(const int&)" << std::endl;
}

void Print(int &&x) {
    std::cout << "Print(int&&)" << std::endl;
}

int main() {
//    int &&r1 = 10;
//    int &&r2 = Add(3, 2);
//
//    int x = 0;
//    //Error
//    //int &&r3 = x;
//
//    //Correct
//    int &ref1 = x;
//    int &ref2 = Transform(x);
//    const int &ref3 = 10;

    int x = 10;
    Print(x);
    Print(10);

    return 0;
}