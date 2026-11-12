#include <iostream>
#include <vector>
#include "car.h"

using namespace std;

int main()
{
    vector<Car> carList;

    carList.push_back(Car("Toyota", "Corolla", 2020));

    carList.push_back(Car("Volvo", "V70", 2018));

    carList.push_back(Car("BMW", "520d", 2022));

    cout << "Second car: " << endl;

    carList[1].printData();

    cout << endl;

    cout << "All cars: " << endl;

    for(unsigned int i = 0; i < carList.size(); i++)
    {
        carList[i].printData();
        cout << endl;
    }


    return 0;
}
