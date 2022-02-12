#include<iostream>
#include<cmath>
#define PIE 3.14
using namespace std; 

class Projectile{
public:
double theta;
public:
double velocity;


Projectile(double t, double v){
    theta =t;
    velocity =v;
}


  public: void getdata(){
      cout<<"   ";
  }

  public: double getRange(){
      int range = ((velocity*velocity)*sin((2*theta*PIE)/180.0))/10.0;
      return range;
  }





};

int main(){
    Projectile p(45.0,10);
    
    cout<<p.getRange();
    
    
    return 0;
}