#include <iostream>
using namespace std;

int main()
{

    int a[] = {3, -9, 4, 1, -7, 9, 2, -5, 3};

    int max = a[0];
    int min = a[0];

    for (int i = 0; i < 9; i++)
    {
        if (a[i] > max)
        {
            max = a[i];
        }
        if (min > a[i])
        {
            min = a[i];
        }
    }
    cout << "Minimum of a =" << min << ","
         << "maximum of a =" << max << endl;

    char ch = '@';
    

    for(int i=0;i<9;i++){
        int w=0;
        cout<<"|";
        while(w<a[i]){
            cout<<ch;
            w++;
        }
        cout<<endl;

    }

    return 0;
}