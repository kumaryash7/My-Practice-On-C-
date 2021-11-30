#include<iostream>
using namespace std; // TO REVERSE A NUMBER

int main(){
   // int a =321;

   // cout<<(a/10)<<endl;

    //cout<<(a%10)<<endl;
    int num,remainder,revnumber=0;

    cin>>num;
  while (num>0)
  {
       remainder= num%10;
    num =num/10;
    revnumber=(revnumber*10)+remainder;

  }
  
    
cout<<"the reversed number is "<<revnumber<<endl;



    

    return 0;
}