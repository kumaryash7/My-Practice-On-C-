#include <iostream>
#include <cmath>
#include<string>
#include <ctime>
using namespace std;

const double PI = 3.14159265358979323846264;
int main()
{
    srand(time(nullptr));
    cout << time(nullptr) << endl;

    cout << (long long)52 * 365 * 24 * 3600 << endl;

    long tstart = time(nullptr);

    double deg = 30;
    double x;
    x = deg * (PI / 180);

    cout << sin(x) << endl
         << cos(x) << endl
         << tan(x) << endl;

    cout << floor(x) << endl
         << ceil(x) << endl
         << round(x) << endl;
    cout << log2(8) << endl;

    cout<<atan(1)<<endl;

    cout<<fmod(5.34,1.23)<<endl;
    // fmod(x,y) gives remainder of x/y;

    long telapsed;

    telapsed=time(nullptr)-tstart;
    cout<<"Time lapsed in program is :";
    cout<<telapsed<<endl;

    time_t curr_time;

curr_time = time(NULL);
string tm= ctime(&curr_time);
cout<<"Today is :"<<tm;

cout<<rand()<<endl;
// rand function generates a random number between 0 to INT_MAX

    return 0;
}