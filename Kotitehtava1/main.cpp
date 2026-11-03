#include <iostream>
#include <stdexcept>

using namespace std;

void calcSum(int a, int b)
{
    cout << a << " + " << b
         << " = "
         << a + b
         << endl;
}

void calcDiv(int a, int b)
{
    if(b==0)
    {
        cout << "Virhe: Jakaja ei saa olla nolla!"
             <<endl;
    }
    else
    {
        cout << a << " / " << b
             << " = "
             << (float)a/b
             << endl;
    }
}

int retSum(int a, int b)
{
    return a+b;
}

float retDiv(int a, int b)
{
    if(b==0)
    {
        throw runtime_error("Jakaja ei saa olla nolla!");
    }
    return (float)a/b;
}

int main()
{
    int a, b;

    cout << "Anna luku a: ";
    cin >> a;

    cout << "Anna luku b: ";
    cin >> b;

    calcSum(a,b);

    calcDiv(a,b);

    cout << a << " + " << b
         << " = "
         << retSum(a,b)
         <<endl;

    float result;

    try {
        result = retDiv(a,b);

        cout << a << " / " << b
             << " = "
             << result
             << endl;
    }
    catch (runtime_error& e)
    {
        cout << "Error: "
             << e.what()
             << endl;
    }

    return 0;
}
