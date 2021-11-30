#include<stdio.h>

int fact_helper(int x){
	
	 long long int fact=1;
	for(int i=1;i<=x;i++){
		
		fact=fact*i;
		
			}
			return fact;
}


float nCr_helper(float n,float r){
	
	float req;
	req=fact_helper(n)/(fact_helper(r)*fact_helper(n-r));
	
	return req;
}

int main(){
	int num;
	printf("\n ENTER THE NUMBER:");
	scanf("%d",&num);
	
   long long	int res=fact_helper(num);
	
	printf("\n OUR RESULT =%d",res);
	
	
	float n,r;
	printf("\n enter values of n and r:");
	scanf("%f%f",&n,&r);
	float answer=nCr_helper(n,r);
	
	printf("\n ncr=%f",answer);
	
	
	
	
	
	
	
	
	
	
	return 0;
	
}

