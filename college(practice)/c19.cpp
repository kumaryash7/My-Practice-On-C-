#include <iostream>
using namespace std;

int main()
{
    float a;
    cout << "ENTER FIRST NUMBER" << endl;
    cin >> a;

    int b;
    cout << "ENTER SECOND NUMBER" << endl;
    cin >> b;

    int c;
    cout << "ENTER THIRD NUMBER" << endl;
    cin >> c;

    auto result = a + b * c;
    cout << "THE RESULT IS: " << result << endl;

    return 0;
}