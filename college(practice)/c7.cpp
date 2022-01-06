#include<iostream>   //LINEAR SEARCH
using namespace std; 
 
  int LinearSearch(int n, int arr[],int key){
      

   for(int i=0;i<n;i++){
       if(arr[i]==key){
           return i;
           
       }
   }
      return false;
  }


int main(){
    int n;
    cin>>n;
    
    int arr[n];
    
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int key;
    cin>>key;
    cout<<LinearSearch(n,arr,key);
    return 0;
}