#include<iostream>
using namespace std; 

int main(){
    int number =1;
    int n;
    cin>>n;

    int row=1,col;

    while(row<=n){
        col=1;
        while(col<=row){
            cout<<number;
            number++;
            col++;


        }
        cout<<endl;
        row++;

    } cout<<endl;

    return 0;
    
}