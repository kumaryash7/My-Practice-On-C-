#include<iostream>
using namespace std;


 class Bankdeposit{

  int principal;
  int years;
  float intrestRate;
  float returnVAlue;


  public:

  Bankdeposit(){}
   Bankdeposit (int p, int y, float r);
   Bankdeposit(int p , int y , int r);

 void show();



 };

Bankdeposit :: Bankdeposit(int p , int y , float r){
    principal =r;
    years =y;
    intrestRate =r;
    returnVAlue =principal;
     for( int i=1;i<y;i++){

         returnVAlue = returnVAlue*(1+r);
     }    
}

void  Bankdeposit :: show(){
    cout<<endl<<"the principal amount was "<<principal<<endl<<"return value is "<<returnVAlue<<endl;


}

int main(){
    Bankdeposit bd1,bd2,bd3;

    int p, y;
    float r;
    int R;

    cout<<"enter value of p y and r "<<endl;
    cin>>p>>y>>r;
    bd1 = Bankdeposit(p,y,r);
    bd1.show();

    return 0;
}