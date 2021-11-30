#include <iostream>  // DESTRUCTORS
using namespace std; // DESTRUCTORS NEITHER TAKES AN ARGUMENT NEITHER RETURN ANY VALUE

int count = 0;

class num
{

public:
    num()
    {

        count++;
        cout << "this is the time when  constructor is called for object" << count << endl;
    }

    ~num() // DESTRUCTOR
    {

        cout << "this is the time when my detsructor is called " << count << endl;
        count--;
    }
};

int main()
{
    cout << "creating first object " << endl;
    num n1;
    {
        cout << "entering this block" << endl;

        cout << "creating two more objects" << endl;
        num n2, n3;
        cout << "exiting this block";
    }
    cout << "Back to main function" << endl;

    return 0;
}