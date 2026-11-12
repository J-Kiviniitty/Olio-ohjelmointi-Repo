#ifndef STUDENT_H
#define STUDENT_H

#include <string>

using namespace std;

class Student
{
private:
    string name;
    int studentNumber;
    double average;

public:
    string getName();
    int getStudentNumber();
    double getAverage();

    void setName(string newName);
    void setStudentNumber(int newStudentNumber);
    void setAverage(double newAverage);

};

#endif // STUDENT_H
