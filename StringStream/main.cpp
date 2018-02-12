#include <iostream>
#include <sstream>


int main() {
//    int a{5}, b{6};
//    int sum = a + b;
//    std::cout << "Sum of " << a << " & " << b << " is: " << sum << std::endl;
////    std::string output = "Sum of " + a + " & " + b + " is " + sum;
//
//    std::stringstream ss;
////    std::istringstream is;
////    std::ostringstream os;
//
//    ss << "Sum of " << a << " & " << b << " is: " << sum << std::endl;
//    std::string s = ss.str();
//    std::cout << s << std::endl;
//    ss.str("");
//    ss << sum;
////    auto ssum = ss.str();
//    auto ssum = std::to_string(sum);
//    std::cout << ssum << std::endl;

    std::string data = "12 89 90";
    int a;
    std::stringstream ss;
    ss.str(data);

    while(ss >> a){
        std::cout << a << std::endl;
    }

    int x = std::stoi("54");

    return 0;
}