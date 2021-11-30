#include<iostream>
#include<math.h>
main(){
	
	int a,b,c;
	printf("\n ENTER THE LEADING COEFFICIENT :");
	scanf("%d",&a);
	printf("\n ENTER THE LAGGING COEFFICIENT :");
	scanf("%d",&b);
	printf("\n ENTER THE CONSTANT TERM :");
	scanf("%d",&c);
	
	float D = sqrt(b*b - (4*a*c));
	
	float roots =((-b+D)/2*a);
	
	printf(" \n my result is =%f",roots);
	
	
	}
