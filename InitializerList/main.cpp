#include <iostream>
#include <initializer_list>
#include <cassert>

class Bag {
    int arr[10];
    int n_Size{};
public:
    Bag(std::initializer_list<int> values) {
        assert(values.size() < 10);
        auto it = values.begin();
        while (it != values.end()) {
            Add(*it);
            ++it;
        }
    }

    void Add(int value) {
        assert(n_Size < 10);
        arr[n_Size++] = value;
    }

    void Remove() {
        --n_Size;
    }

    int operator[](int index) {
        return arr[index];
    }

    int GetSize() const {
        return n_Size;
    }
};

void Print(std::initializer_list<int> values) {
//    auto it = values.begin();
//    while (it != values.end()) {
//        std::cout << *it++ << " ";
//    }
    for (auto x : values) {
        std::cout << x << " ";
    }
}

int main() {
    int x{0};
    float y{3.7f};

    int arr[5]{3, 2, 1, 4, 5};
    std::string s{"Hello C++"};

    std::initializer_list<int> data = {1, 2, 3, 4, 5};
    auto values = {1, 2, 3, 4, 5};

    Bag b{3, 5, 7};
//    b.Add(3);
//    b.Add(5);
//    b.Add(7);
//    for (int i = 0; i < b.GetSize(); ++i) {
//        std::cout << b[i] << " ";
//    }
    Print({3, 5, 7});
    for (auto z : {2, 3, 4}) {
        std::cout << z << " ";
    }


    return 0;
}