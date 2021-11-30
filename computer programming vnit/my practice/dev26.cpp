//WAP TO PRINT ALL PRIME NUMBERS BETWEEN 1 TO N

#include<stdio.h>

int main(){
	
	
	int n;
	scanf("%d",&n);
	
	
	for(int i=1;i<=n;i++){
		
		if(n%i==0){
			
			printf("%d",1);
			
	
			}
		}
	
	return 0;
}
