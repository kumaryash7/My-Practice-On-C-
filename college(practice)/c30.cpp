#include<iostream>
#include<iomanip>
using namespace std; 

int main(){
    int n;
  cin>>n;

  //REVERSE A NUMBER

  int storage=0;
  
 while(n>0){

  storage=n%10;
  cout<<storage;


     n=n/10;
 }
cout<<endl;
 double f=3.14562623283826236974;
 cout<<setprecision(4)<<setw(20)<<f;


    return 0;
}