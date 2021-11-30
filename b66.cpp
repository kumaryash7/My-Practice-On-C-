#include <iostream> // FUNCTTION OVERLOADING
#include <cmath>
using namespace std;
float volume(float a, float b, float c)
{
    return a * b * c;
}
float volume(float m)
{
    return pow(m, 3);
}

int main()
{
    int a, b, c;
    cin >> a >> b >> c;

    cout << "the volume of cube is " << volume(a) << endl;

    cout << "the volume of cuboid is " << volume(a, b, c);

    return 0;
}