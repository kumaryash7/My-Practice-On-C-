#include <iostream>
using namespace std;
class Complex
{

    int a, b;

public:
    Complex(int x, int y)
    {
        x = a;
        y = b;
    }

    Complex(int x)
    {

        a = x;
        b = 0;
    }
    void displaydata()
    {

        cout << "your number is " << a << "+" << b << "i" << endl;
    }
};

int main()
{
    Complex c1(10, 4);
    c1.displaydata();

    Complex c2(10);
    c2.displaydata();

    return 0;
}