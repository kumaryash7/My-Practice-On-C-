#include <iostream>
using namespace std;

class Number
{

    int a;

public:
     Number(){}  //DEFAULT CONSTRUCTOR
    Number(int num)
    {
        a = num;
    }
    Number( Number &obj )  //COPY CONSTRUCTOR
    {
        a =obj.a;
        
    }

    void display()
    {

        cout << "the number for this object is " << a << endl;
    }
};

int main()
{
Number x,y,z(40);

z.display();


Number z1(z);
z1.display();  //MAKING EXACTLY SAME OBJECT Z1 AS Z




    return 0;
}