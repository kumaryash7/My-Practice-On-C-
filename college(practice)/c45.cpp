#include<iostream>
#include<cmath>
using namespace std; 

int main(){
    

    double alpha[50];

    for(int i=0;i<25;i++){
        alpha[i]= pow(i,2);
    }

    for(int i=25;i<50;i++){
        alpha[i]=3*i;
    }

    for(int i=0;i<10;i++){
        cout<<alpha[i]<<" ";
    }
    cout<<endl;
    for(int i=10;i<20;i++){
        cout<<alpha[i]<<" ";
    }
    cout<<endl;
    for(int i=20;i<30;i++){
        cout<<alpha[i]<<" ";
    }
    cout<<endl;
    for(int i=30;i<40;i++){
        cout<<alpha[i]<<" ";
    }
    cout<<endl;
    for(int i=40;i<50;i++){
        cout<<alpha[i]<<" ";
    }
    return 0;
}