// 1 2 3 4
// 2 1 2 3
// 3 2 1 2 
// 4 3 2 1

#include<stdio.h>

int main(){
	int n;
	
	scanf("%d",&n);
	
	int counter =1;
	
	for(int i=1;i<=n;i++){
		printf("%d ",i);
	}
	counter ++;
	for(int row=2;row<=n;row++){
		
		for(int col=2;col<=row;col++){
			
			printf("%d",counter);
		}
	}
	
	
	
	
	
	
	
	
	
	
	return 0;
}
