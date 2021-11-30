//practice of factorial function


#include<stdio.h>
    int factorial (int num){
    	
    	int fact=1;
    	for(int i=1;i<=num;i++){
    		
    		fact=(fact*i);
		}
		return fact;
	}  
     
     
     
     
     
     
     
int main(){
	
	int n;
	
	scanf("%d",&n);
	 int res=factorial(n);
	printf("\n %d",res);
	
	
	
	
	
	
	
	return 0;
	
}
