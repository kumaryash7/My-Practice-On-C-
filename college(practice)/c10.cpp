#include <bits/stdc++.h>
#include <iostream>
using namespace std;
int main()
{
    int i;
    long int arr[5];
    for (i=0;i<5;i++)
    {
      cin>>arr[i];
    }
    int sum=0;
    for (i=0;i<5;i++)
    {
        sum=sum + arr[i];
    }

    int min=arr[0];
    for (int i=0;i<5;i++)
    {
        if (min > arr[i])
        min = arr[i];
    }
    int max=arr[0];
    for (i=0;i<5;i++)
    {
        if (max < arr[i])
        max = arr[i];
    }

    int minsum = sum - max;
    int maxsum= sum - min;

    cout << minsum <<" "<<maxsum;
    return 0;
}