#include<iostream>
using namespace std; 
class employee{

char name[30];

float age;
public:void indata(){
    cout<<"enter the name"<<endl;

    cin>>name;
    cout<<"enter the age"<<endl;
    cin>>age;


}

public: void showdata(){
    cout<<"name :"<<name<<endl;
    cout<<"age :"<<age<<endl;

}

};


int main(){
   const int size =3;

    employee manager[size];
  for(int i=0;i<size;i++){
      cout<<"\n Details of the Manager"<<i+1<<"\n";
      manager[i].indata();

  }
  cout<<endl;
  for(int i=0;i<size;i++){
      cout<<"\n Manager"<<i+1<<"\n";
      manager[i].showdata();

  }

    return 0;
}