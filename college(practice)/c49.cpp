#include<iostream>
using namespace std; 
class Marks{
   

   public: int n ;
   public:int marks=0;
   public: int scores[];

   public:void setdata(){
       cout<<"set n"<<endl;
       cin>>n;
       for(int i=0;i<n;i++){
           cout<<"set score for"<< " "<<i+1<<endl;
           cin>>scores[i];

       }



   }
   public : int getmarks(){
      

       for(int i=0;i<n;i++){
           marks+=scores[i];

       }
       return marks;
   }


 
public:int getpercnetage(){
    double d =(marks/(100*n))*100;
    return d;
}



    
};

int main(){
    Marks m;
    m.setdata();
    cout<<"your marks ="<<m.getmarks();
    cout<<m.getpercnetage();
    return 0;
}