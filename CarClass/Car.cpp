//
// Created by gminardi on 08/02/18.
//

#include <iostream>
#include "Car.h"

int Car::totalCars = 0;

Car::Car() {
    totalCars++;
    std::cout << "Car()" << std::endl;
}

Car::Car(float amount) {
    totalCars++;
    fuel = amount;
}

void Car::FillFuel(float amount) {
    fuel = amount;
}

void Car::Accelerate() {
    speed++;
    fuel -= 0.5f;
}


void Car::Brake() {
    speed = 0;
}

//void Foo(const Car &car){
//
//}

void Car::AddPassengers(int passengers) {
    this->passengers = passengers;
//    Foo(*this);
}

void Car::Dashboard() const {
    std::cout << "Fuel: " << fuel << " Speed: " << speed << " Passengers: " << passengers << " TotalCars: " << totalCars
              << std::endl;
}

Car::~Car() {
    std::cout << "~Car()" << std::endl;
    totalCars--;
}

void Car::ShowCount() {
    std::cout << "TotalCars: " << totalCars << std::endl;
}

