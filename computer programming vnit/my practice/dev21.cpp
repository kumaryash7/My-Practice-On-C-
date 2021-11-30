//wap to print summation of series 1+x+x^2+x^3+.......x^n  
  
#include<stdio.h>
#include<math.h>
 int main(){
 	
 	float x;
 	int n;
 	float sum =1.0;
 	
 	printf("\n ENTER THE VALUE OF x and n: ");
 	scanf("%f%d",&x,&n);
 	
 	for(int i=0;i<=n;i++){
 		
 	 sum = sum + pow(x,n);
 	 
 	 
	 }
 	 printf (" \n THE RESULT OF OUR SERIES IS :: %f",sum);
 	 
 	 return 0;
 	
 	
 	
 	
 }
