// fibonacci using recursions

#include<stdio.h>

int recursive_fibonacci(int n){
	
	int retval;
	
	if(n==0){
		
		retval =0;
	}	
	
	else if(n==1){
		
		retval =1;
	}
	
	else {
		
		
		retval =recursive_fibonacci(n-1) + recursive_fibonacci(n-2);
		
	}
	
	return retval;
}


int main(){
	int p;
	scanf("%d",&p);
	
	
	printf("\n OUR SERIES =%d", recursive_fibonacci(p));
	
	
	return 0;
	
	
	
	
	
	
	
}
