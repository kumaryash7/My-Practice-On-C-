#include<iostream>
using namespace std; 
class A{

    int a , b;

 public:  void setData(int x, int y){
    x =a;
    y =  b;

  }

 public: void getData(){
      cout<<"the value of a is "<<a<<endl<<"the value of b is"<<b<<endl;

  }


};

int main(){
     A yash,harry;

     yash.setData(4,5);
     yash.getData();


    return 0;
}