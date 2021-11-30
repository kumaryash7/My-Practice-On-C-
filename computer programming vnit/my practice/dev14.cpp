#include<stdio.h>
int main() 
{ 
int c=5, b=2; 
float x, y; 
x = c/b;   // int/int =int (typecasting)
y = (c*1.0) / (b*1.0); 
printf ("%4.2f\n", x); 
printf ("%4.2f\n", y); 
printf ("%d\n", (int)(y+0.6)); 
return 0; 
}

