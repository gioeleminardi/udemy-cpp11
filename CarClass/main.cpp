#include "Car.h"

int main() {
    Car car(5);
//    car.FillFuel(6);
    car.AddPassengers(5);
    car.Accelerate();
    car.Accelerate();
    car.Accelerate();
    car.Accelerate();
    car.Accelerate();
    car.Brake();
    car.Dashboard();
    return 0;
}