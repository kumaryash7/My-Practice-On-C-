#include<iostream>
using namespace std; 

int main(){
    int a =4;
    int *ptr= &a;

    cout<<ptr<<endl<<*ptr;  // They both will give different outputs

    return 0;
}