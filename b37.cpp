#include<iostream>
using namespace std; 
 
class Complex;



 class Calculator {
  public:
  int add ( int a, int b){

      return (a+b);

  }

  int sumrealcomplex (Complex,Complex);


 };

class Complex{

int a,b;
friend int Calculator :: sumrealcomplex(Complex,Complex);

public:
void setnumber(int n1,int n2){
a=n1;
b=n2;




}

void printnumber(){

    cout<<"the number is "<<a<<"+"<<"i"<<endl;

}

};

int Calculator :: sumrealcomplex(Complex o1, Complex o2){
    return (o1.a +o2.b);

}


int main(){
    

 Complex o1,o2;

 01.setnumber(1,4);
 















    return 0;
}