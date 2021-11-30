#include<iostream>
using namespace std; 

int main(){
    
    int a =3;

    int *b=&a;             //pointers in c++

                                 // & --> stores address and *--> refers to pointer
    cout<<b<<endl<<&a<<endl;

  cout<<"the vlaue of b is "<<*b<<endl;   // dereferncing operator


    return 0;
}