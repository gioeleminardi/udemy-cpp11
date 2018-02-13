#include <iostream>

constexpr int GetNumber(){
    return 42;
}

constexpr int Max(int x, int y){
//    return x > y ? x : y; // C++11
    if (x > y) //C++14
        return x;
    return y;
}

int main() {
    constexpr int i = GetNumber();
    constexpr int m = Max(3,6);
    int arr[i];

    const int j = GetNumber();
    int arr2[j];

    return 0;
}