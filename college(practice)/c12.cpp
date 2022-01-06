#include<iostream>
using namespace std; 

int main(){
    int n;
    cin>>n;

    for(int i=0;i<=n;i++){
        cout<<i;
        if(i==5){
            
            continue;
        }
    }
    return 0;
}