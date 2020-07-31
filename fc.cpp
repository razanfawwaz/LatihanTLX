#include <cstdio>
#include <math.h>
int main () {
	double a; 
	long int c, x;
	
	scanf("%lf", &a);
	
	if(a == trunc(a))
	{
		a = trunc(a); 
		printf("%.0lf %.0lf\n", a, a);
	}
	else if(a < 0 )
	{
		c = trunc(a); 
		x = c - 1;
		printf("%ld %ld\n", x, c);
	}
	else if(a > 0 )
	{
		c = trunc(a); 
		x = c + 1;
		printf("%ld %ld\n", c, x);
	}
}
