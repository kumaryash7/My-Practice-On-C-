#include<stdio.h>

int main(){
	
	
	int r,count=1,i,j;
	 scanf("%d",&r);
	 
	 
	 for( i=0;i<=r;i++){
	 	
	 	for(j=0;j<=i;j++){
	 		
	 		printf("%d",count);
		 }
		 
		 printf("\n");
		 count++;
		 
	 }
	return 0;
}
