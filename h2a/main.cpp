#include <iostream>
#include <memory>
#include "car.h"
#include "rectangle.h"
#include "student.h"

using namespace std;

int main()
{
    //Car-tehtävä
    Car myCar;

    myCar.setBrand("Toyota");
    myCar.setModel("Corolla");
    myCar.setYearModel(2020);

    myCar.printData();

    cout << endl;

    //Rectangle-tehtävä

    Rectangle *rect = new Rectangle;

    rect->setWidth(5);
    rect->setHeight(3);

    cout << "Area: "
         << rect->getArea()
         << endl;

    cout << "Circumference: "
         << rect->getCircum()
         << endl;

    delete rect;

    //Student-tehtävä
    shared_ptr<Student> student = make_shared<Student>();

    student->setName("Pertti Keinonen");
    student->setStudentNumber(666);
    student->setAverage(6.7);

    cout << "\nStudent information:" << endl;
    cout << "Name: "
         << student->getName()
         << endl;

    cout << "Student number: "
         << student->getStudentNumber()
         << endl;

    cout << "Average: "
         << student->getAverage()
         << endl;

    return 0;
}
