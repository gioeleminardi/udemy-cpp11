#include <iostream>
#include <vector>

int main() {
    int arr[10]; // Max to 10 items
    auto *ptr = new int[10];
    for (int i = 0; i < 10; ++i) {
        ptr[i] = i * 10;
    }


    std::vector<int> data{1, 2, 3};
    for (int j = 0; j < 5; ++j) {
        data.push_back(j * 10);
    }

    //Access
    data[0] = 100;
    for (int k = 0; k < data.size(); ++k) {
        std::cout << data[k] << " ";
    }

    std::cout << std::endl;

    for (auto x : data) {
        std::cout << x << " ";
    }

    auto it = data.begin();
    std::cout << *it << std::endl;
    ++it;
    --it;
    it = it + 5;
//    while (it != data.end()){
//
//        ++it;
//    }

    //Delete
    for (auto x : data) {
        std::cout << x << " ";
    }
    std::cout << std::endl;

    it = data.begin();
    data.erase(it);
    for (auto x : data) {
        std::cout << x << " ";
    }
    std::cout << std::endl;

    //Insert at pos
    it = data.begin() + 5;
    data.insert(it, 3);
    for (auto x : data) {
        std::cout << x << " ";
    }

    return 0;
}