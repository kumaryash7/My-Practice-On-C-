#include <iostream>
#include <cmath>

using namespace std;
class Simplecalculator
{
    int a, b;

public:
    void getdata()
    {

        cout << "enter the value of a " << endl;
        cin >> a;
        cout << "enter the value of b " << endl;
        cin >> b;
    }
    void perform_opertions()
    {
        cout << "the value of a+b is " << a + b << endl;
        cout << "the value of a-b is " << a - b << endl;
        cout << "the value of a*b is " << a * b << endl;
        cout << "the value of a/b is " << a / b << endl;
    }
};
class Scienitificcalclulator
{

    int a, b;

public:
    void getdata()
    {

        cout << "enter the value of a " << endl;
        cin >> a;
        cout << "enter the value of b " << endl;
        cin >> b;
    }
    void perform_opertions()
    {
        cout << "the vlaue of cos(a)" << cos(a) << endl;
        cout << "the vlaue of sin(a)" << sin(a) << endl;
        cout << "the vlaue of exp(a)" << exp(a) << endl;

        cout << "the value of a+b is " << a + b << endl;
        cout << "the value of a-b is " << a - b << endl;
        cout << "the value of a*b is " << a * b << endl;
        cout << "the value of a/b is " << a / b << endl;
    }
};
int main()
{
    Simplecalculator calci;
    calci.getdata();

    calci.perform_opertions();
    Scienitificcalclulator yash;
    yash.getdata();
    yash.perform_opertions();

    return 0;
}