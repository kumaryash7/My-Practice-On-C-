#include <iostream>
using namespace std;
    int c=100;


int main(){


    int c;

    cin>>c;

   cout<<"the value of local variable of c is "<<c<<endl;

   cout<<"the value of global variable of c is "<<::c;  // IT is a gobal scope variable as normally  local scope dominates
   //                                                     but if we want to print global scope variable then we use this ,,

   
}