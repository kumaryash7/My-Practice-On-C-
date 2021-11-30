#include <iostream> //VIRTUAL BASE CLASS ..
using namespace std;
class Student
{

protected:
    int roll_number;

public:
    void setnumber(int a)
    {
        roll_number = a;
    }
    void printnumber()
    {
        cout << "your roll number is " << roll_number << endl;
    }
};

class Test : virtual public Student
{ // MALING IT VIRTUAL BASE CLASS

protected:
    float maths, phyics;

public:
    void setmarks(float m1, float m2)
    {

        m1 = maths;
        m2 = phyics;
    }

    void printmarks()
    {

        cout << "the maths marks is " << maths << endl;
        cout << "the physics marks is " << phyics << endl;
    }
};

class Sport : virtual  public Student
{
protected:
    float score;

public:
    void setscore(float s)
    {
        s = score;
    }
    void printscore()
    {
        cout << "your pt score is " << score << endl;
    }
};

class Report : public Test, public Sport
{

private:
    float total;

public:
    void display()
    {
        cout << "the total marks is " << (maths + phyics + score) << endl;
    }
};
int main()
{
    Report harry;

    harry.setnumber(420);
    harry.setmarks(70.0, 75.5);
    harry.setscore(100);

    harry.display();

    return 0;
}