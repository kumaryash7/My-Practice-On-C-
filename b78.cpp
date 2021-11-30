#include<iostream>
using namespace std; 
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
int main(){
    Complex *ptr=new Complex[4];
    ptr->setdata(1,4);
    ptr->getdata();


    return 0;
}
