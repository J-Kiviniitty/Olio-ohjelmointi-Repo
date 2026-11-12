#include "student.h"

string Student::getName()
{
    return name;
}

int Student::getStudentNumber()
{
    return studentNumber;
}

double Student::getAverage()
{
    return average;
}

void Student::setName(string newName)
{
    name = newName;
}

void Student::setStudentNumber(int newStudentNumber)
{
    studentNumber = newStudentNumber;
}

void Student::setAverage(double newAverage)
{
    average = newAverage;
}
