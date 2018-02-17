#include <iostream>
#include <fstream>

void Write(){
    std::ofstream out{"test.txt"};
    if(!out){
        std::cout << "Could not open file for writing" << std::endl;
        return;
    }
    std::string message{"C++ was invented by Bjarne"};
    for(char ch : message){
        out.put(ch);
    }
    out.seekp(5);
    out.put('#');
}
void Read(){
    std::ifstream input{"test.txt"};
    if(!input){
        std::cout << "Source file not found" << std::endl;
        return;
    }
    std::cout << "Current position is: " << input.tellg() << std::endl;
//    input.seekg(5);
//    input.seekg(5, std::ios::beg);
//    input.seekg(-5, std::ios::end);
//    input.seekg(-5, std::ios::cur);
    char ch{};
    while(input.get(ch)){
        std::cout << ch;
    }
    std::cout << std::endl;
    std::cout << "Current position is: " << input.tellg() << std::endl;
}

void UsingFstream(){
    std::fstream stream{"file.txt"};
    if(!stream){
        std::cout << "File does not exists!" << std::endl;
        std::ofstream out{"file.txt"};
        out.close();
        stream.open("file.txt");
    }
    stream << "Hello World" << std::endl;
    stream.seekg(0);
    std::string line;
    std::getline(stream, line);
    std::cout << line << std::endl;
}

int main() {
    Write();
    Read();
    UsingFstream();
    return 0;
}