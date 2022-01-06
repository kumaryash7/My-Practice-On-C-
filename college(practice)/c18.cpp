#include<iostream>
#include<bits/stdc++.h>
using namespace std; 


void isPalindrome(char str[]){
    int l=0;
    int h=strlen(str)-1;
    while(h>1){
        if(str[l++]!=str[h--]){
            cout<<"Not A Palindrome"<<endl;
            return ;
        }
        cout<<"Palindrome"<<endl;

    }
}
int main(){
    
    isPalindrome("abba");

    return 0;
}