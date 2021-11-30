#include <iostream> //MULTIPLE INHERITANCE
using namespace std;
class Base1
{
protected:
    int base1int;

public:
    void set_base1int(int a)
    {
        base1int = a;
    }
};

class Base2
{
protected:
    int base2int;

public:
    void set_base2int(int a)
    {
        base2int = a;
    }
};

class Derived : public Base1, public Base2
{

public:
    void show()
    {

        cout << "the vlaue of base1 is " << base1int << endl;
        cout << "the vlaue of base2 is " << base2int << endl;
        cout << "the sum of these values is" << (base1int + base2int) << endl;
    }
};

int main()
{
    Derived yash;
    yash.set_base1int(20);
    yash.set_base2int(50);

    yash.show();

    return 0;
}