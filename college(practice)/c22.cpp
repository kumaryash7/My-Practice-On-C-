#include<iostream>
#include<cmath>
#include<ctime>
using namespace std; 

const double PI=3.14159265258;
int main(){
    
    srand(time(nullptr));

    cout<<time(nullptr)<<endl;


    long tstart = time(nullptr);

    double deg =30;
    double x;

    x=deg*(PI/180);
    cout<<x<<endl;

    cout<<cos(x)<<endl;
    cout<<sin(x)<<endl;
    
    return 0;
}