#ifndef CAR_H
#define CAR_H

#include <string>
#include "engine.h"
#include "wheel.h"

using namespace std;

class Car
{
private:
    Engine objEngine;

    Wheel objWheel1;
    Wheel objWheel2;
    Wheel objWheel3;
    Wheel objWheel4;

    string model;
    string brand;

public:
    Car();
    Car(string brand, string model);

    void setEngine();
    void setWheels();

    string getModel();
    void setModel(string model);

    string getBrand();
    void setBrand(string brand);

    void printDetails();
};

#endif
