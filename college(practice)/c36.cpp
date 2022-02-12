#include <iostream>
using namespace std;

int main()
{

    int a[] = {3, 9, 34, 45, 89, 139, 239};   // 7 elements
    int b[] = {-34, 0, 12, 45, 67, 158, 306}; // 7 elements

    int c[100];  //THE ARRAY TO BE PRINTED AS OUTPUT

    int x = 0;
    int y = 0;
    int z = 0;
    while (x < 7 && y < 7)
    {
        if (a[x] < b[y])
        {
            c[z] = a[x];
            x++;
        }

        else
        {

            c[z] = b[y];
            y++;
        }
        z++;
    }
    if (x >= 7)
    {
        while (y < 7)
        {
            c[z] = b[y];
            y++;
            z++;
        }
    }
    if (y >= 7)
    {
        while (x < 7)
        {
            c[z] = a[x];
            x++;
            z++;
        }
    }

    for (int i = 0; i < 14; i++)
    {
        cout << c[i]<<" ";
    }

    return 0;
}