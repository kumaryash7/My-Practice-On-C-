#include <iostream>
using namespace std;
 
//BINARY TO NUMBER 

int main()
{
    int num;
    cin>>num;
      
    int dec=0;
    int base =1;

    int flag =num;
    while(flag>0){
         int final_dig=flag%10;
         flag/=10;

         dec +=final_dig*base;
         base*=2;
    }
 
   cout<<dec;
   return 0;
}