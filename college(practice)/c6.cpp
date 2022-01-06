#include<iostream>
using namespace std; 

int main(){
int *iptr;

iptr = new int;

cout<<"The Address where pointer is "<<iptr<<endl;

cout<<"The Address contains "<<*iptr<<endl;

*iptr =20;
cout<<"Address contains "<<*iptr<<endl;

int a;
cout<<"Adress contains "<<a<<endl;
cout<<"Hello Bye bye"<<endl;
cout<<sizeof(*iptr)<<endl;

cout<<sizeof(iptr);

    return 0;
}