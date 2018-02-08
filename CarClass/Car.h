//
// Created by gminardi on 08/02/18.
//

#ifndef CARCLASS_CAR_H
#define CARCLASS_CAR_H


class Car {
private:
    float fuel{0};
    float speed{0};
    int passengers{0};
    static int totalCars;
public:
    Car();

    Car(float fuelAmount);

    Car(float fuelAmount, int passengers);

    ~Car();

    void FillFuel(float amount);

    void Accelerate();

    void Brake();

    void AddPassengers(int count);

    void Dashboard() const;

    static void ShowCount();
};


#endif //CARCLASS_CAR_H
