#include <iostream>

namespace Avg {
    float Calculate(float x, float y) {
        return (x + y) / 2;
    }
}
namespace Basic {
    float Calculate(int x, int y) {
        return x + y;
    }
}
namespace Sort {
    void QuickSort() {

    }

    void InsertionSort() {

    }

    void MergeSort() {

    }

    namespace Comparison {
        void Less() {

        }

        void Greater() {

        }
    }
}
namespace {
    void InternalFunction(){

    }
}

int main() {
    InternalFunction();
    std::cout << "Hello, World!" << std::endl;
    return 0;
}