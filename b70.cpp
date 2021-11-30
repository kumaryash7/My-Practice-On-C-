#include <iostream> ///CONSTRUCTOR IN DERIVED CLASS
using namespace std;

class Base1
{
    int data1;

public:
    Base1(int i)
    {
        data1 = i;
        cout << "Base constructor called " << endl;
    }
    void printdata_Base1()
    {
        cout << "the value of data is " << data1 << endl;
    }
};

class Base2
{

    int data2;

public:
    Base2(int i)
    {
        data2 = i;

        cout << "base 2 constructor is called" << endl;
    }
    void printdata_Base2()
    {
        cout << "the value of data 2 is " << data2 << endl;
    }
};

class Derived : public Base1, public Base2
{
    int derived1, derived2;

public:
    Derived(int a, int b, int c, int d) : Base1(a), Base2(b)
    {
        derived1 = c;
        derived2 = d;
        cout << "the constructotr is called" << endl;
    }

    void printdata_derievd()
    {

        cout << "the value of derived1 is " << derived1 << endl;

        cout << "the value of derived2 is " << derived2 << endl;
    }
};

int main()
{
    Derived harry(1, 2, 3, 4);
    harry.printdata_Base1();

    return 0;
}