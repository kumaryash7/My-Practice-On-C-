#include<iostream>
#include<string>
#include<algorithm>
using namespace std; 
                            //TO CONVERT EVERYTHING INTO UPPER CASE 
int main(){
    string str;
    cin>>str;
    


   for(int i=0;i<str.length();i++){

       if(str[i]>='a'&&str[i]<='z'){
           str[i]-=32;

       }
   }

   cout<<str;

    return 0;
}