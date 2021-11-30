#include<iostream>
using namespace std; 

int main(){
    int a=4;
    int *ptr=&a;
  *ptr=999;
  cout<<"the value of a is "<<*(ptr);
  
    return 0;
}