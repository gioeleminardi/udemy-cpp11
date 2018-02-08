//
// Created by gminardi on 08/02/18.
//

#ifndef CARCLASS_CAR_H
#define CARCLASS_CAR_H


class Car {
private:
    float fuel;
    float speed;
    int passengers;
public:
    void FillFuel(float amount);
    void Accelerate();
    void Brake();
    void AddPassengers(int count);
    void Dashboard();
};


#endif //CARCLASS_CAR_H
