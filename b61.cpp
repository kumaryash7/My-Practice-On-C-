#include<iostream>
using namespace std; 
 class game{
 char x,y;
 public:

 char indata( char a, char b ){

     a=x;
     b=y;
     cin>>x>>y;


   
     
 }

 void display(){
     cout<<"my games are "<<x<<y<<endl;

 }




 };
int main(){
    char m,n;


    cin>>m>>n;




    game g1(m,n);









    return 0;
}