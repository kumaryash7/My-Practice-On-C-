//program to find the armstrong numbers from 0-999
// 153= (1^3)+ (5^3)+ (3^3)


#include<stdio.h>
#include<math.h>
int main(){
	
	int i,j,sum;
	
	for(i=100;i<=999;i++){
		
		int i_copy=i;
		sum=0;
		
		while(i_copy>0){
			
			int rem=i_copy%10;
			sum=sum+pow(rem,3);
			i_copy=i_copy%10;
			
					}
					
					if(i==sum){
						
						printf("%d",i);
					}
		
		
		
	}
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	return 0;
	
}
