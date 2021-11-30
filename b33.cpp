#include<iostream>
using namespace std; 
class employee {
int id;
 static int count;

public: 
void setdata (){
    cout<<"enter the id"<<endl;

    
    cin>>id;

}
 void getdata(){

     cout<<"the id of the employee is "<<id<<endl;
     cout<<count<<endl;
     

 }


};
   int employee ::count;
int main(){
    employee yash,rohan,harry;


    yash.setdata();
    yash.getdata();
   

   rohan.setdata();
   rohan.getdata();

  harry.setdata();
  harry.getdata();




    return 0;
}