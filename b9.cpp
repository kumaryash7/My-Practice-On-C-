#include<iostream>
#include<iomanip>  //using iomanip header file****
using namespace std;

int main(){

  int a=55,b=282,c=1282;


  cout<<"the value of a is "<<a<<endl;
  cout<<"the value of b is "<<b<<endl;
  cout<<"the value of c is "<<c<<endl<<endl<<endl;



  cout<<"the value of a is "<<setw(4)<<a<<endl; // sets thw width to 4 digits
  cout<<"the value of b is "<<setw(4)<<b<<endl;
  cout<<"the value of c is "<<setw(4)<<c<<endl;







    return 0;
}