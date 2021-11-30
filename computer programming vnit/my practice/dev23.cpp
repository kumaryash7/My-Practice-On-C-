//WAP TO FIND SUM OF DIGITS OF THE NUMBER
#include<stdio.h>

int main(){
	int n,rem,sum=0;
	
	printf("\m ENTER THE NUMBER :");
	
	scanf("%d",&n);
	
	while(n>0){
		
		rem =n%10;
		sum =sum +rem;
		n=n/10;
		
	}
	
	printf("\n THE SUM OF DIGITS IS : %d",sum);
	

	
	
	
	return 0;
}
