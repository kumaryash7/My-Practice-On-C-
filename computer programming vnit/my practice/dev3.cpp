#include<stdio.h>
main(){
	
	int amt;
	printf("\n ENTER A VALID AMOUNT:");
	scanf("%d",&amt);
	
	int a =(amt/50);
	int b = (amt-a);
	int c= (b/2);          //divison and modulus mai differnece hoga
	int d=(b-c);
	int e= (d/5);
	
	printf("\n my results is=%d%d%d",a,c,e);
	
}
