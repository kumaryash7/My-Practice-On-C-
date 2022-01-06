#include <iostream>
using namespace std;

int main()
{
    int number;
    cin >> number;
    int storage = 0;
    while (number > 0)
    {

        storage = number % 2;
        cout << storage;
        number = number / 2;
    }

    return 0;
}