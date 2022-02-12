#include <iostream>
#include <string.h>
using namespace std;

int main()
{

    string arr1[5];
    string arr2[5];
    int count =0;

    for (int i = 0; i < 5; i++)
    {
        cin >> arr1[i];
    }
    for (int i = 0; i < 5; i++)
    {
        cin >> arr2[i];
    }
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            if(arr1[i]==arr2[j]){
                count++;
            }
        }
    }
    cout<<count<<endl;

    switch (count)
    {
    case 0:
        cout<<"NO MATCH";
        break;
    case 1:
        cout<<"ONE MATCH";
        break;
    case 2:
        cout<<"TWO MATCH";
        break;
    case 3:
        cout<<"THREE MATCH";
        break;
    case 4:
        cout<<"FOUR MATCH";
        break;
    case 5:
        cout<<"FIVE MATCH";
        break;
    
    default:
        break;
    }

    return 0;
}