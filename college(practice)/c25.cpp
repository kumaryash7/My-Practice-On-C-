#include<iostream>
using namespace std; 

class Student{

  int scores[5];

  public: void set_data(){
      cout<<"ENTER THE MARKS OF 5 STUDENTS :"<<endl;

      for(int i=0;i<5;i++){
          cin>>scores[i];
      }
  }

public: int get_scores(){
  int sum=0;

    for(int i=0;i<5;i++){
       sum+=scores[i];
    }
    return sum;
}

};

int main(){
    Student yash;
    yash.set_data();
   cout<< yash.get_scores();
    return 0;
}