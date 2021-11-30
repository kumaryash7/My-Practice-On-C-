#include <iostream>  //SPIRAL ORDER PRINT
using namespace std;

int main()
{
    int n, m;
    cin >> n>>m;

    int arr[n][m];

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> arr[i][j];
        }
    }


 int row_start=0;
 int row_end=n-1;
 int col_start=0;
 int col_end=m-1;

 while(row_start<=row_end && col_start <=col_end){
     for(int col = col_start;col<=col_end;col++){
         cout<<arr[row_start][col]<<" ";

     }
     row_start++;

 }

    return 0;

}