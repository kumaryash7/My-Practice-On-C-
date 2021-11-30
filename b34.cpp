#include<iostream>
using namespace std; 
class employee{

    int id;
    int salary;

    public:

    void setid(){
        cout<<"enter id of empolyee ";
        cin>>id;

    }


   void getid(){
       cout<<"the id of the employee is ";
       cin>>id;

   }







};

              //STORING OBJECTS OF A CLASS IN AN ARRAY
int main(){
    
employee fb[4];


for(int i=0;i<4;i++){
    fb[i].setid();
    fb[i].getid();


}


















    return 0;
}