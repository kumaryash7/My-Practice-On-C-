#include<iostream>
using namespace std;  // PROGRAM TO SWAP VALUES USING FRIEND FUNCTIONS
 class c2;           //    CLASS DECLARATION      

 class c1{

 int value1;
 public:

 void indata(int a ){
     value1 =a;

 }
 void display(){
     cout<<value1<<endl;

 }


friend void exchange(c1 &, c2 &);    // C1 KA ADDRESS AND C2 KA ADDRESS



 };

class c2{

  int value2;

  public:
  void indata(int a){
      value2 =a;

  }
void dislapy(){
    cout<<value2<<endl;

}
 friend void exchange(c1 &, c2 &);
};

 void exchange(c1 & x, c2 &y){

     int temp=x.value1;
     x.value1=y.value2;
     y.value2=temp;

 }




                                    
int main(){
    

c1 yash;
c2 harry;

yash.indata(100);
harry.indata(200);

    cout<<"the values before swapping the values are "<<endl;

     yash.display();
     harry.dislapy();

     cout<<"the values after exchange are "<<endl;
     exchange(yash,harry);

     yash.display();
     harry.dislapy();
     
    return 0;
}