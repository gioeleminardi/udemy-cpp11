#include <iostream>
#include <experimental/filesystem>

int main() {
    using namespace std::experimental::filesystem;
    path p{R"(e:/temp)"};
    if (p.has_filename()) {
        std::cout << p.filename() << std::endl;
    }
    for (const auto &x : p) {
        std::cout << x << std::endl;
    }
    directory_iterator beg{p};
    directory_iterator end{};
    while (beg != end) {
        std::cout << *beg << std::endl;
        ++beg;
    }

    return 0;
}