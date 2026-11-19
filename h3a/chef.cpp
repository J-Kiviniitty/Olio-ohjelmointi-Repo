#include "chef.h"
#include<iostream>

using namespace std;

Chef::Chef(string name)
{
    this->name =name;

    cout << "Chef constructor" << endl;
}

Chef::~Chef()
{
    cout << "Chef destructor" << endl;
}

void Chef::makeSalad()
{
    cout << "Chef makes salad" << endl;
}

void Chef::makeSoup()
{
    cout << "Chef makes soup" << endl;
}
