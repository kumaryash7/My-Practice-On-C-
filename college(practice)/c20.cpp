#include <iostream>
using namespace std;
  //DIAMOND PATTERM
int main()
{
    int n;
    cin >> n;

    for (int row = 1; row <= n; row++)
    {
        for (int space = 1; space <= n - row; space++)
        {
            cout << ' ';
        }
        for (int stars = 1; stars <= 2 * row - 1; stars++)
        {
            cout << '*';
        }
        cout << endl;
    }
    for (int row = 1; row <= n - 1; row++)
    {
        for (int space = 1; space <= row; space++)
        {
            cout << ' ';
        }
        for (int star = 1; star <= 2 * (n - row) - 1; star++)
        {
            cout << '*';
        }
        cout << endl;
    }
    return 0;
}