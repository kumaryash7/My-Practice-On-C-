
#include <iostream>

using namespace std;
#define MAX 1000

int main()
{

    int arr1[MAX][MAX], size[MAX];
    int n, q, position1, position2;
    int x;

    
    cin >> n >> q;
    for (int i = 0; i < n; i++)
    {
        
        cin >> x;
        for (int j = 0; j < x; j++)
        {
            cin >> arr1[i][j];
        }
    }
    for (int i = 0; i < q; i++)
    {
       
        cin >> position1 >> position2;
        cout << arr1[position1][position2] << endl;
    }
    return 0;
}