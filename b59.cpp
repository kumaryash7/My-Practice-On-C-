#include <iostream> //INHERITNACE
using namespace std;
class Employee
{
public:
    int id;

public:
    float salary;

public:
    Employee(int inpId)
    {
        id = inpId;
        salary = 34.0;
    }
    Employee() {} // DEFUALT CONSTRUCTOR
};

class Progammer : public Employee
{ // INHERITNACE SYNTAX
public:
    Progammer(int inpId)
    { // PRIVATE MEMBERS CANNOT BE INHERITED;

        id = inpId;
    }
    int languagecode = 9;
};

int main()
{
    Employee harry(1), yash(2);

    cout << harry.salary << endl;
    cout << yash.salary << endl;

    Progammer skillF(10);
    cout << skillF.languagecode;

    return 0;
}