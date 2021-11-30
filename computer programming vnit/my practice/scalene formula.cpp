#include<stdio.h>
#include<math.h>

main(){
	
	float a,b,c;
	float area ,peri;
	
	printf("/n ENTER VALID SIDES OF A TRIANGLE;");
	
	scanf("%f %f %f",&a,&b,&c);
	peri=(a+b+c)/2;
	area=sqrt(peri*(peri-a)*(peri-b*(peri-c)));
	
	printf("/n the area of triangle is :",area);
	
}
