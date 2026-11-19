#include <iostream>
#include "animal.h"
#include "dog.h"

using namespace std;

int main()
{
    Animal animal;

    Dog dog;

    animal.callOut();

    dog.callOut();

    return 0;
}
