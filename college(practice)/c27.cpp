#include<iostream>
#include<ctime>
#include<iomanip>  
// iomanip is used to effect the display of our output
using namespace std; 

int main(){
    int *Aint;
    Aint=new int[3];  // INITIALISNG DYNAMICALLY

    for(int i=0;i<3;i++){
        Aint[i]=rand();
    }
//   generating three random numbers in an array
    for(int i=0;i<3;i++){
        cout<<Aint[i]<<endl;

    }
  // USE OF IOMANIP HEADER FILE
    int a=10;
    int b=100;
    cout<<a<<setw(50)<<b;
    setprecision(6);
    
    
    return 0;
}