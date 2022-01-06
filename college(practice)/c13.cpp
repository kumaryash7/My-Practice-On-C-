#include<iostream>
using namespace std; 

int main(){
    auto f{12.5};

    auto g{20};

 auto   a= (g>f)?f:g;  //ternary operator
 cout<<a<<endl;


    return 0;
}