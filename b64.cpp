#include <iostream>
using namespace std;
class Student
{

protected:
    int roll_number;

public:
    void set_roll_number(int);
    void get_roll_number();
};

void Student ::set_roll_number(int r)
{
    roll_number = r;
}

void Student ::get_roll_number()
{
    cout << "the roll number is " << roll_number << endl;
}

class Exam : public Student
{
protected:
    float maths;
    float phyiscs;

public:
    void set_marks(float, float);
    void get_marks();
};

void Exam ::set_marks(float m1, float m2)
{
    maths = m1;
    phyiscs = m2;
}

void Exam ::get_marks()
{
    cout << "the marks obtained in maths and phyiscs are " << maths
         << endl
         << phyiscs << endl;
}

class Result : public Exam
{

    float percentage;

public:
    void display();
};

void Result ::display()
{

    cout << "your percnetage is " << (maths + phyiscs) / 2 << endl;
    get_roll_number();
    get_marks();
}
int main()
{
    Result harry;
    harry.set_roll_number(420);
    harry.set_marks(90.0, 99.9);
    harry.display();

    return 0;
}