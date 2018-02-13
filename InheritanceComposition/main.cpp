#include <iostream>

class Animal {
public:
    void Eat() {
        std::cout << "Animal eat" << std::endl;
    }

    virtual void Speak() {
        std::cout << "Animal speak" << std::endl;
    }

    void Run() {
        std::cout << "Animal run" << std::endl;
    }
};

class Dog : public Animal {
public:
    void Speak() override {
        std::cout << "Dog bark" << std::endl;
    }
};

int main() {
    Dog d;
    d.Eat();
    d.Run();
    d.Speak();
    return 0;
}