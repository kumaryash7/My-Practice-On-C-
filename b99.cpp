#include<iostream>
using namespace std; 
class A{
 public :int age;

 A(int x){
     x =age;

 }

  public:int get_age(){
      return age;

  }
};

class B :public A{
  public:int n;
 
 



};





int main(){
  A a(5);

  cout<<a.get_age();
  


    
    return 0;
}