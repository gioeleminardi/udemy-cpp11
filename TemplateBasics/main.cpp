#include <iostream>
#include <cstring>

//Primary template
template<typename T>
T Max(T x, T y) {
    std::cout << typeid(T).name() << std::endl;
    return x > y ? x : y;
}

//Explicit Instantiation
template char Max(char x, char y);

//Explicit Specialization
template<>
const char *Max<const char *>(const char *x, const char *y) {
    std::cout << "Max(char*, char*)" << std::endl;
    return strcmp(x, y) > 0 ? x : y;
}


template<int size>
void Print() {
    char buffer[size];
    std::cout << size << std::endl;
}

//template<typename T>
//T Sum(T *pArr, int size) {
//    T sum{};
//    for (int i = 0; i < size; ++i) {
//        sum += pArr[i];
//    }
//    return sum;
//}

template<typename T, int size>
T Sum(T (&pArr)[size]) {
    T sum{};
    for (int i = 0; i < size; ++i) {
        sum += pArr[i];
    }
    return sum;
}


int main() {
//    auto num = Max(3, 5);
//    auto num2 = Max('a', 'b');
//    int (*pFn)(int,int) = Max;
//    std::cout << num << std::endl;
//    std::cout << num2 << std::endl;

//    const char *b{"B"};
//    const char *a{"A"};
//    auto s = Max(a, b);
//    std::cout << s << std::endl;
//    Print<3>();
    int arr[]{3, 1, 9, 7, 4};
//    int (&ref)[5] = arr;
    auto it = std::begin(arr);
    int sum = Sum(arr);
    std::cout << sum << std::endl;
    return 0;
}