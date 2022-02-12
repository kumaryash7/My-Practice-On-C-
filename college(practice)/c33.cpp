#include<iostream>
using namespace std; 
//PATTERN PROBLEM
int main(){
     int n;
     cin>>n;
     cout<<"ENTER A NUMBER :"<<endl;

     int row =1,col=1;
     while(row<=n){
         col=1;
         while(col<=row){
             cout<<'*';
             col+=1;
         }
         cout<<endl;
         row+=1;
     }
     cout<<endl;



    return 0;
}