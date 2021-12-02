#include<iostream>
using namespace std; 
class ABC;

class XYZ{

int data;
public:
void set_data(int value){
    value =data;

}

friend void add(XYZ,ABC);



};


class ABC{
    int dataa;
    public:

    void set_data(int valuee){
        valuee =dataa;

    }

    friend void add (XYZ,ABC);

};
  void add(XYZ obj1 , ABC onj2){
      cout<<"the sum of data of both the classes are"<<obj1.data+onj2.dataa;

  }

int main(){
    XYZ x;
    ABC a;

    x.set_data(55);
    a.set_data(100);

    add(x,a);

    return 0;
}