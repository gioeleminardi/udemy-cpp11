#include <iostream>

void ProcessRecords(int count) {
    auto *pArray = (int *) malloc(count * sizeof(int));
    if (pArray == nullptr) {
        throw std::runtime_error("Failed to allocate memory");
    }
    for (int i = 0; i < count; ++i) {
        pArray[i] = i;
    }
    free(pArray);
}

int main() {
    try {
        ProcessRecords(std::numeric_limits<int>::max() * 100);
    } catch (std::runtime_error &ex) {
        std::cout << ex.what() << std::endl;
    }
    return 0;
}