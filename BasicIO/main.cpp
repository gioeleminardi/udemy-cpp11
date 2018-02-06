#include <iostream>

int main() {
    using namespace std;

//    cout << "Hello, World!\n" << 45 << " " << 8.2f << endl;
//    int age;
//    cout << "Tell me your age: ";
//    cin >> age;
//    cout << "Your age is: " << age << endl;

    char buff[512];
//    cout << "What is your name? ";
//    cin >> buff;
//    cout << "Your name is " << buff << endl;

    cout << "What is your name? ";
    cin.getline(buff, 64, '\n');
    cout << "Your name is " << buff << endl;

    return 0;
}