#include<iostream>
using namespace std; 

int main(){
    // SUM OF ALL THE SUBARRAYS (USING KADANE'S ALGO)

    int n;
    cin>>n;
    int a[n];

    for(int i=0;i<n;i++){
        cin>>a[i];
    }

    int currentSum =0;
    int maxSum =INT16_MIN;
   int minSum = INT16_MAX;
   for(int i=0;i<n;i++){
      currentSum +=a[i];

       if(currentSum<0){
           currentSum=0;
       }
       maxSum=max(maxSum,currentSum);
   }
  cout<<maxSum<<endl;

    return 0;
}