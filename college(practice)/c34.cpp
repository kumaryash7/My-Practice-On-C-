#include <iostream>
using namespace std;

// PATTERN 2

int main()
{
    int n;
    cin >> n;
    int number = 1;
    int row = 1, col;
    while (row <= n)
    {
        col = 1;
        while (col <= row)
        {
            cout << number;
            number += 1;
            col += 1;
        }
        cout << endl;
        row += 1;
    }
    cout << endl;
    return 0;
}