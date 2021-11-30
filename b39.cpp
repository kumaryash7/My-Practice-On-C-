#include<iostream>
using namespace std; 

class c1{
 int val1;

 public:
 void indata(int a){

     val1 =a;

 }

  void displaydata(){
      cout<<val1<<endl;

  }

 class c2;
 int val2;


 public:

 void indata(int a){
     val2=a;

 }
  void displaydata(){
      cout<<val2<<endl;

  }


};

void exchange (c1 &x, c2 &y){
    
}

int main(){
    
    return 0;
}