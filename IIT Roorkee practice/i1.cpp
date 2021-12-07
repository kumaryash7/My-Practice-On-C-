#include<iostream>
using namespace std; 

int main(){
    auto a{3};


  decltype(a) c;
  c=3333;


  const int d{5} ;
  cout<<d<<endl<<a<<endl<<c;

    return 0;
}