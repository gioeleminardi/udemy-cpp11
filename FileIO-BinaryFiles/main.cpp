#include <iostream>
#include <fstream>
#include <string>
#include <cstring>

struct Record {
    int id;
    char name[10];
};

void WriteRecord(Record *p) {
    std::ofstream binstream{"records", std::ios::binary | std::ios::out};
    binstream.write((const char *) p, sizeof(Record));
}

Record getRecord() {
    std::ifstream binstream{"records", std::ios::binary | std::ios::in};
    Record r;
    binstream.read((char *) &r, sizeof(Record));
    return r;
}

int main() {

    Record r;
    r.id = 1001;
    strcpy(r.name, "John");
    WriteRecord(&r);

    Record m;
    m = getRecord();
    std::cout << m.name << std::endl;

    std::ofstream textstream{"data"};
    textstream << 12345678;

    std::ofstream binstream{"binary", std::ios::binary | std::ios::out};
    int num{12345678};
    binstream.write((const char *) &num, sizeof(num));
    binstream.close();
    num = 0;
    std::ifstream input{"binary", std::ios::binary | std::ios::in};
    input.read((char *) &num, sizeof(num));

    std::cout << num << std::endl;
    return 0;
}