// fibonacci series 0,1,1,2,3,5,8,13,.......
#include<stdio.h>

int main(){
	
	int n,i,fterm,sterm,nterm;
	 
	 fterm =0;
	 sterm=1;
	 
	scanf("%d",&n);
	
	if(n==1){
		printf("%d",fterm);
		
	}
	else if(n==2){
		
		printf("%d%d", fterm ,sterm);
	}
	
	else //n >2
	{
		printf("%d%d", fterm,sterm);
		i=1;
		while(i<=(n-2))
		{
			nterm=fterm+ sterm;
			printf("%d",nterm);
			fterm=sterm;
			sterm =nterm;
			i++;
		}
		
		
		
		
	}
	
	
	
	return 0;
	
	
	
	
	
	
	
	
}
