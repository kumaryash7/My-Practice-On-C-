#include<iostream>
#include<string>
using namespace std; 

class Base{

  int age;
  string name;
  

  public: void set_age(int x);
  public: int get_age();
 
  public: void set_name(string a);
  public: string get_name();



};


  void Base :: set_age(int a){
    a=100;

}

int Base:: get_age(){
    return age;

}

void Base:: set_name(string w){
    w = "yash";

}
string Base:: get_name(){
    return name;
}

int main(){
    Base b;

    b.set_age(5);
  cout<<  b.get_age();
    return 0;
}