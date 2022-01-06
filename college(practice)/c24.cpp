#include <iostream>
using namespace std;
 
//BINARY TO NUMBER 

int main()
{
    int num;
    cin>>num;
      
    int dec=0;
    int base =1;

    int swap =num;
    while(swap>0){
         int final_dig=swap%10;
         swap/=10;

         dec +=final_dig*base;
         base*=2;
    }
 
   cout<<dec;
   return 0;
}