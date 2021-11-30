#include <iostream>
using namespace std;
class Complex
{
    int real;
    int imaginary;

public:
    void setdata(int a, int b)
    {
        real = a;
        imaginary = b;
    }

    void getdata()
    {
        cout << "the real part is  " << real << endl;
        cout << "the imaginary part is  " << imaginary << endl;
    }
};
int main()
{
    Complex c1;
    Complex *ptr = &c1;
    (*ptr).setdata(1, 54); // OR
    ptr->setdata(1, 54);
    (*ptr).getdata(); // OR
    ptr->getdata();

    return 0;
}