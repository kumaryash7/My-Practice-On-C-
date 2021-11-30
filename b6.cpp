#include<iostream>
using namespace std; 
class Base{
public:

 int a;

 public:


 void setdata(int val){
     cin>>val;


 }
  void displaydata(){
      cout<<"the value of data is "<<a<<endl;
   cout<<" i am inside  base function \n" ;

  }


};



class Derived : public Base{

public:
void putdata(){
    cout<<"this is inside the derived function"<<endl;

}
};
int main(){
    Derived d;
    d.setdata(4);
    d.displaydata();
    d.putdata();

    return 0;
}
