#include<iostream>
main(){
	int year;
	printf("\n ENTER AN YEAR :");
	scanf("%d",&year);
	
	if(year%4==0){
		printf("\n THIS IS A LEAP YEAR ");
		
	}else{
		printf("\n THIS IS AN ODD YEAR ");
	}
	
}
