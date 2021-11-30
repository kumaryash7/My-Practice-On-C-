#include <iostream>
using namespace std;

class Complex
{

    int a, b;

public:
    Complex(void); // DECLARATION OF A CONSTRUCTOR

    void getdata()
    {

        cout << "the value of complex no. is " << a << "+" << b << "i" << endl;
    }
};

Complex ::Complex(void)
{ // CONSTRUCTOR HAVE SAME NAME AS THAT OF
  // CLASS NAME.
    a = 10;
    b = 0;
}

int main()
{
    Complex c;

    c.getdata();

    return 0;
}