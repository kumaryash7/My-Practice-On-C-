#include<iostream>
using namespace std; 

int main(){

    //ARRAY POINTERS IN C++
    int a[] ={12,14,25,9,8,0,8,2,0};
    int *ptr;

    ptr = a;
    cout<<*ptr<<endl;


    ptr++;
    cout<<*ptr<<endl;
    ptr+=2;
    cout<<*ptr<<endl;


    int *const cptr=a;
    
    cout<<*cptr<<endl;
    cout<<cptr[2]<<endl;
    cptr[2]=12;
    cout<<cptr[2]<<endl;
    cout<<a[2]<<endl;

   
    const int *ptrc;

    ptrc=a;
    cout<<*ptrc<<endl;
    



    return 0;
}