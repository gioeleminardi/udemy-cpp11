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
public:
    Car();

    Car(float amount);

    ~Car();

    void FillFuel(float amount);

    void Accelerate();

    void Brake();

    void AddPassengers(int count);

    void Dashboard();
};


#endif //CARCLASS_CAR_H
