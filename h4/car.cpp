#include <iostream>
#include "car.h"

using namespace std;

Car::Car()
{
}

Car::Car(string brand, string model)
{
    this->brand = brand;
    this->model = model;
}

void Car::setEngine()
{
    objEngine.setHorsepower(150);
    objEngine.setDisplacement(2.0);
}

void Car::setWheels()
{
    objWheel1.setSize(17);
    objWheel1.setType("kesarengas");

    objWheel2.setSize(17);
    objWheel2.setType("kesarengas");

    objWheel3.setSize(17);
    objWheel3.setType("kesarengas");

    objWheel4.setSize(17);
    objWheel4.setType("kesarengas");
}

string Car::getModel()
{
    return model;
}

void Car::setModel(string model)
{
    this->model = model;
}

string Car::getBrand()
{
    return brand;
}

void Car::setBrand(string brand)
{
    this->brand = brand;
}

void Car::printDetails()
{
    cout << "Brand: " << brand << endl;
    cout << "Model: " << model << endl;

    cout << "Engine:" << endl;
    cout << " Horsepower: "
         << objEngine.getHorsepower()
         << endl;

    cout << " Displacement: "
         << objEngine.getDisplacement()
         << endl;

    cout << "Wheel 1: "
         << objWheel1.getSize()
         << " "
         << objWheel1.getType()
         << endl;

    cout << "Wheel 2: "
         << objWheel2.getSize()
         << " "
         << objWheel2.getType()
         << endl;

    cout << "Wheel 3: "
         << objWheel3.getSize()
         << " "
         << objWheel3.getType()
         << endl;

    cout << "Wheel 4: "
         << objWheel4.getSize()
         << " "
         << objWheel4.getType()
         << endl;
}
