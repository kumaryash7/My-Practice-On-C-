#include <iostream>
using namespace std;
class Base2;  // FORWARD DECLARATION OF CLASS 2


class Base1
{

public:
    void greet()
    {
        cout << "kaise ho ?" << endl;
    }
};

class Base2
{

public:
    void greet()
    {

        cout << "hello" << endl;
    }
};

class Derived : public Base1, public Base2
{
    int a;

public:
    void greet()
    {

        Base2 ::greet(); // TO REMOVE AMBIGUITY OF GREET INVOKE
    }
};

int main()
{
    Base1 obj;
    obj.greet();

    Base2 obj2;
    obj2.greet();

    Derived yash;
    yash.greet();

    return 0;
}