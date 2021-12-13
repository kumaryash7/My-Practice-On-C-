#include<iostream> 
using namespace std; 
class Student{


public:int scores[5];


public: void indata(){
    cout<<"enter the marks of 5 subjects please";
    for (int i = 0; i < 5; i++)
    {
         cin>>scores[i];
    }
    
}

public: int total_score(){
    int sum =0;
    for(int i=0;i<5;i++){
        sum+=scores[i];
    }
    return sum;
}



};
int main(){
    Student yash;
    yash.indata();
   cout<< yash.total_score();

    return 0;
}