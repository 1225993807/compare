#include<stdio.h>
int main()
{
	float max(float a, float b);
	float x, y, z;
	scanf("%f%f", &x, &y);
	z = max(x, y);
	printf("%f",z);
	return 0;
}

float max(float a, float b)
{
	return(a > b) ? a : b;
}
