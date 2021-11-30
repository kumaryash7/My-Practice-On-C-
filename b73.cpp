#include <iostream> // SUM OF ALL THE SUBARRAYS OF AN ARRAY
using namespace std;

int main()
{
    int n;
    cin >> n;

    int arr[n];

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int current = 0;

    for (int i = 0; i < n; i++)
    {
        current = 0;
        for (int j = 1; j < n; j++)
        {
            current = current + arr[j];
        }
    }
    cout << current;

    return 0;
}