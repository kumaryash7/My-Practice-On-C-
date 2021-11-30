#include<iostream>
using namespace std;   // TO PRINT Nth TERM OF FIBBONACCI SERIES

int fib(int n){

    if(n<2){

        return n;
    }

    return fib(n-1)+ fib(n-2);   //USING RECURSIVE SEQUENCE
    

}

int main(){
    int a;
    cin>>a;

    cout<<fib(a);
    return 0;
}