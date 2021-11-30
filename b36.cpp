#include <iostream>
#include <string>
using namespace std;

class Complex
{

    int a, b;

public:
    void setnumber(int n1, int n2)
    {
        a = n1;
        b = n2;
    }

    friend Complex sumcomplex(Complex o1, Complex o2);

    void printnumber()
    {

        cout << "the number is " << a << "+" << b << "i";
    }
};

Complex sumcomplex(Complex o1, Complex o2)
{

    Complex o3;
    o3.setnumber((o1.a + o2.a), (o1.b + o2.b)); // WE CANNOT ACCESS A AND B AS A AND B IS PRIVATE AND
                                                //  CAN BE ACCESSED ONLY IN CLASS
                                                // HERE WE USE FRIEND FUNCTIONS FOT THIS CAUSE..

    return o3;
}

int main()
{

    Complex c1, c2, sum;

    c1.setnumber(1, 4);
    c2.setnumber(5, 8);

    c1.printnumber();
    c2.printnumber();

    sum = sumcomplex(c1, c2);
    sum.printnumber();

    return 0;
}