#include<iostream>
main(){
	
	int a,b,c;
	scanf("%d%d%d",&a,&b,&c);
	
	if(a>b&&a>c){
		printf("\n the greatest no. is=%d",a);
		
	}
	else if(b>a&&b>c){
		printf("\n the greatest no. is =%d",b);
	}
	else  {
		printf("\n the greatest no. is=%d",c);
	}
}
