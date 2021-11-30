#include <iostream>
using namespace std;
class alpha
{

    int x;

public:
    alpha(int i)
    {
        x = i;
        cout << "alpha constructed" << endl;
    }

    void show_alpha()
    {
        cout << x << endl;
    }
};

class beta
{

    float p, q;

public:
    // beta(float a , float b){
    //    p=a;
    //    q=b;

    //}
    beta(float a, float b) : p(a), q(b)
    {
        cout << "beta constructed " << endl;
    }
    void show_beta()
    {
        cout << p << endl;
        cout << q << endl;
    }
};

class gamma : public beta, public alpha
{
    int u, v = 5;

public:
    gamma(int a, int b, float c) : u(a), alpha(a * 2), beta(c, c)
    {
        cout << "gamma constructed " << endl;
    }

    void show_gammma()
    {
        cout << u << endl
             << v << endl;
    }
};
int main()
{
    gamma g(2, 4, 2.5);
    g.show_alpha();
    g.show_beta();
    g.show_gammma();
    return 0;
}