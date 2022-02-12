#include<bits/stdc++.h>
using namespace std; 

int main(){
    
  int a[] = {3, 9, 34, 45, 89, 139, 239};   // 7 elements
    int b[] = {-34, 0, 12, 45, 67, 158, 306}; // 7 elements

int c[14];


for(int i=0;i<13;i++){
    for(int j=0;j<7;j++){

        for(int k=0;k<7;k++){

            if(a[j]!=b[k]){
                c[i]=b[k];
            }
            else{
                i--;
            }
        }
    }
}
sort(c,c+13);
for(int i=0;i<13;i++){
    cout<<c[i]<<" ";
}

    return 0;
}