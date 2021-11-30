#include <iostream> //REVISING DESTRUCTOR
using namespace std;
int count = 0;

class num
{

public:
    num()
    {
        count++;
        cout << "this is the time when my constructor is called" << count << endl;
    }

    ~num()
    {
        cout << "this is the time when my destructor is called" << count << endl;
        count--;
    }
};

int main()
{
cout<<"we are inside our main function"<<endl;
 num n1;
 {
     cout<<"Creating two more objects "<<endl;
     num n2,n3;
     cout<<"exiting this block"<<endl;
      }

      cout<<"back to main"<<endl;
    return 0;
}