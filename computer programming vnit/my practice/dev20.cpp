#include<stdio.h>

int main(){
	
	long int n,fact =1;
	
	scanf("%ld",&n);    // to input big integers we use long int data type and to scan it we use (%ld)
	
	for(int i=2;i<=n;i++){
		
		fact=fact*i;
		
		
	}
	printf("the factorial is : %ld",fact);
	
	
	
	
	
	
	
	
	
	return 0;
}
