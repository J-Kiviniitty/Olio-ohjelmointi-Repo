#include "italianchef.h"
#include <iostream>

using namespace std;


ItalianChef::ItalianChef(string name)
    : Chef(name)
{
    cout << "ItalianChef constructor" << endl;
}

ItalianChef::~ItalianChef()
{
    cout << "ItalianChef destructor" << endl;
}

void ItalianChef::makePasta()
{
    cout << "ItalianChef makes pasta" << endl;
}

string ItalianChef::getName()
{
    return name;
}
