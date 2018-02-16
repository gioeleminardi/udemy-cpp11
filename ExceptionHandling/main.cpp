#include <iostream>
#include <vector>
#include <random>

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
        throw std::out_of_range("Count should be greater than 10");
    }
    std::vector<int> p;
    p.reserve(count);
    std::vector<int> records;
    records.reserve(count);

    std::default_random_engine eng;
    std::bernoulli_distribution dist;
    int errors{};
    for (int i = 0; i < count; ++i) {
        records.push_back(i);
    }

    for (int i = 0; i < count; ++i) {
        try {
            std::cout << "Processing record #: " << i << " ";
            if (!dist(eng)) {
                ++errors;
                throw std::runtime_error("Could not process the record");
            }
            std::cout << std::endl;
        } catch (std::runtime_error &ex) {
            std::cout << "[ERROR " << ex.what() << "]" << std::endl;
            if (errors > 4) {
                std::runtime_error err("Too many errors. Abort.");
                ex = err;
                throw;
            }
        }
    }
}

int main() {
    try {
//        ProcessRecords(std::numeric_limits<int>::max() * 100);
        ProcessRecords(22);
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