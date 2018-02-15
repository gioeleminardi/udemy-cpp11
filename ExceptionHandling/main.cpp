#include <iostream>
#include <vector>

class Test {
public:
    Test() {
        std::cout << "Test()" << std::endl;
    }

    ~Test() {
        std::cout << "~Test()" << std::endl;
    }
};

void ProcessRecords(int count) {
    std::unique_ptr<Test> t(new Test);
    if (count < 10) {
//        throw std::out_of_range("Count should be greater than 10");
    }
    std::vector<int> p;
    p.reserve(count);
    std::vector<int> pArray;
    pArray.reserve(count);
    for (int i = 0; i < count; ++i) {
        pArray.push_back(i);
    }
}

int main() {
    try {
        ProcessRecords(std::numeric_limits<int>::max() * 100);
//        ProcessRecords(2);
    } catch (std::runtime_error &ex) {
        std::cout << ex.what() << std::endl;
    } catch (std::out_of_range &ex) {
        std::cout << ex.what() << std::endl;
    } catch (std::bad_alloc &ex) {
        std::cout << ex.what() << std::endl;
    } catch (std::exception &ex) {
        std::cout << ex.what() << std::endl;
    }
    return 0;
}