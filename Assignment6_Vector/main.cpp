#include <iostream>
#include <vector>

enum class Case {
    SENSITIVE, INSENSITIVE
};

std::string
ToLower(const std::string &str) {
    std::string upperStr{};
    for (int i = 0; i < str.length(); ++i) {
        upperStr += static_cast<char>(tolower(str[i]));
    }
    return upperStr;
}

size_t
Find(
        const std::string &source,         //Source string to be searched
        const std::string &search_string,  //The string to search for
        Case searchCase = Case::INSENSITIVE,//Choose case sensitive/insensitive search
        size_t offset = 0) {                //Start the search from this offset

    /*
    return position of the first character
    of the substring, else std::string::npos
    */
    size_t pos{std::string::npos};

    switch (searchCase) {
        case Case::INSENSITIVE: {
            std::string lowerSourceStr{ToLower(source)};
            pos = lowerSourceStr.find(ToLower(search_string), offset);
            break;
        }
        case Case::SENSITIVE:
            pos = source.find(search_string, offset);
            break;
    }
    return pos;
}

std::vector<int>
FindAll(
        const std::string &target,         //Target string to be searched
        const std::string &search_string,         //The string to search for
        Case searchCase = Case::INSENSITIVE,//Choose case sensitive/insensitive search
        size_t offset = 0) {                //Start the search from this offset
    //Implementation

    /*
    Return indices of found strings,
    else an empty vector
    */
    std::vector<int> positions;
    size_t pos;

    pos = Find(target, search_string, searchCase);
    while (pos != std::string::npos) {
        positions.push_back(static_cast<int>(pos));
        pos = Find(target, search_string, searchCase, pos + 1);
    }

    return positions;
}

int main() {
    auto pos = Find("ciao", "AO", Case::INSENSITIVE);
    if (pos != std::string::npos) {
        std::cout << pos << std::endl;
    } else {
        std::cout << "Not found!" << std::endl;
    }

    auto posList = FindAll("ciaociaociao", "ao", Case::INSENSITIVE);
    for (auto x : posList) {
        std::cout << x << " ";
    }
    return 0;
}