#include<stdio.h>

int main(){
	
	int n;
	
	scanf("%d",&n);
	
	
	for(int i=2;i<=n;i++){
		
		if(n%i==0){
			
			printf("\n NOT PRIME ");
			break;
		}
		
		else{  printf("\n prime");
		}
	}
	
      
	
	
	
	return 0;
	
}
