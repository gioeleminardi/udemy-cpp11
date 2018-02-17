#include <iostream>
#include <fstream>

void Write() {
    std::ofstream out{"data.txt"};
    out << "Hello world" << std::endl;
    out << 10 << std::endl;
    out.close();
}

void Read() {
    std::ifstream input/*{"data.txt"}*/;
    input.open("data.txt");
//    if (!input.is_open()){
//        std::cout << "Could not open the file" << std::endl;
//        return;
//    }
    if (input.fail()) {
        std::cout << "Could not open the file" << std::endl;
        return;
    }
    std::string message;
    std::getline(input, message);
    int value{};
    input >> value;
    input >> value;
//    if (input.fail()) {
//        std::cout << "Could not read" << std::endl;
//    }
    if (input.eof()) {
        std::cout << "EOF" << std::endl;
    }
    if (input.good()) {
        std::cout << "I/O operations are successful" << std::endl;
    } else {
        std::cout << "Some I/O operations failed" << std::endl;
    }
    input.setstate(std::ios::failbit);
    input.clear(); //Clear failbit
    input.close();
    std::cout << message << ": " << value << std::endl;
}

int main() {
    Write();
    Read();
    return 0;
}