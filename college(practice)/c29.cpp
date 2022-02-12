#include<iostream>
using namespace std; 

int main(){
    

    int n;
   cout<<"ENTER N :"<<endl;
    cin>>n;
    int count ;
    int a =1;
    int result =0;
   while(count<n){

    if(count%2==0){
        result=result*count;
        count+=a;
    }
    else if((count%2)!=0){
        result=result+count;
 count+=count;
    }
 

   }

   cout<<result;
    return 0;
}