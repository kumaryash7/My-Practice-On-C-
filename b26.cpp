#include<iostream>

using namespace std; 
                         //TO CHECK IF PALINDROME
int main(){
      
  bool check=1;

  int n;
  cin>>n;

  char arr[n+1];
  cin>>arr;

for( int i=0;i<n;i++){

    if(arr[i]!=arr[n-1-i]){

        check=0;
        break;
    }
}

if(check==true){
    cout<<"word is a palindrome "<<endl;

}
else {
    cout<<"word is not a palindrome";
    
}




    return 0;
}