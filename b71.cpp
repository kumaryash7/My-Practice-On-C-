#include <iostream> // CONSTRUCTOR IN DERIVED CLASSES

using namespace std;
class Alpha
{
    int x;

public:
    Alpha(int i)
    {
        x = i;
        cout << "aplha initialised" << endl;
    }
    void show_x()
    {
        cout << x << endl;
    }
};

class Beta
{

    float y;

public:
    Beta(float j)
    {
        y = j;
        cout << "beta initiliased" << endl;
    }

    void show_y()
    {
        cout << y << endl;
    }
};

class Gamaa : public Alpha, public Beta
{
    int m, n;

public:
    Gamaa(int a, float b, int c, int d) : Alpha(a), Beta(b)
    {
        m = c;
        n = d;
        cout << "gamma intialised" << endl;
    }
    void show_mn()
    {

        cout << m << endl
             << n << endl;
    }
};
int main()
{
    Gamaa g(5, 10.75, 20, 30);
    g.show_x();
    g.show_y();
    g.show_mn();

    return 0;
}