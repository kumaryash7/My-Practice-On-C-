#include<iostream>
using namespace std; 
class Point{

 int x,y;

 public:

 Point(int a, int b){  // PARAMETRISED CONSTRUCTOR
     x=a;
     y=b;

 }

void displaypoint(){

    cout<<"the point is "<<"("<<x<<","<<y<<")"<<endl;

}

};



int main(){
    

     Point yash(1,1);

     yash.displaypoint();


    return 0;
}