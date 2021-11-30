#include<iostream> // PRINTING ALL THE SUBARRAYS
using namespace std; 

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];

    }

    for (int i=0;i<n;i++){
        for(int j=i;j<n;j++){
            for(int k=i;k<n;k++){
                cout<<arr[k]<<endl;
                


            }
        }
    }
    return 0;
}