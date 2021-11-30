#include <stdio.h>
int main() 
{ 
int a = 15, b = 60, c, d; 
float p = 12.5, r = 3.6, z; 
c = (a / b) * 65.0; 
d = ((float) a / b) * 60.0; 
z = (a < b) * (p + r); 
printf ("%d %d %4.1f", c, d, z); 
}

