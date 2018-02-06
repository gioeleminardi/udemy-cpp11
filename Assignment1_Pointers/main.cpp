#include <iostream>

int Add(const int *a, const int *b) {
    return *a+*b;
}

void AddVal(const int *a, const int *b, int *result){
    *result = *a+*b;
}

void Swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

void Factorial(const int *a, int *result) {
    *result = 1;
    for (int i = 0; i <= *a; ++i) {
        *result *= *a;
    }
}

int main() {

    int a{3};
    int b{7};
    int res{};
    std::cout << "a " << a << " b " << b << std::endl;


    int sum = Add(&a, &b);
    std::cout << "Add(int *a, int *b): " << sum << std::endl;

    AddVal(&a, &b, &res);
    std::cout << "AddVal(int *a, int *b, int *res): " << res << std::endl;

    Swap(&a, &b);
    std::cout << "Swap(int *a, int *b): " << a << " " << b << std::endl;

    Factorial(&a, &res);
    std::cout << "Factorial(int *a, int *result): " << res << std::endl;

    return 0;
}