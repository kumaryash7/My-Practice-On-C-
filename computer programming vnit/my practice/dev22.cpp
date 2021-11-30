//WAP TO CALCULATE X^Y WITHOUT USING POWER FUNCTION
#include<stdio.h>
int main(){
	
	int x,y,prod=1;
	
	scanf("%d%d",&x,&y);
	
	for(int i=1;i<=y;i++){
		
		prod=prod*x;
	}
	
	
	
	printf("\n %d",prod);
	return 0;
}

