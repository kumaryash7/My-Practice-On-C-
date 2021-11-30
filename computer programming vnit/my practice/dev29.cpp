  // trying to make a function to check prime no.
  
  
  #include<stdio.h>



int prime_helper(int n){
	
	int i=1,status;
	if(n==1){
		
		status =0;
	}
	
	else if(n==2){
		
		status =1;
	}
	
	else if(n>=3){
		
	for(int i=3;i<n;i++){
		if(n%i==0){
			status =0;
		}
	}
	}
	return status;
}

int main(){
	
	
	int x;
	
	scanf("%d",&x);
	
	int res= prime_helper(x);
	
	printf("\n our result =%d",res);
	
	
	return 0;
}
