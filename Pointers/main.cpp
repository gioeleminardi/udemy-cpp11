#include <iostream>

int main() {
    using namespace std;

    int x = 10;
    cout << &x << endl;

    int *ptr = &x;
    cout << ptr << endl;
    cout << *ptr << endl;

    *ptr = 5;
    int y = *ptr;
    cout << y << endl;

    int *ptr2 = nullptr; // instead of NULL

    return 0;
}