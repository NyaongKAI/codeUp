#include <stdio.h>

int main()
{
	long int h, b, c, s;
	double mb;
	scanf("%ld %ld %ld %ld", &h, &b, &c, &s);
	mb = h * b * c * s;
	printf("%.1lf MB", mb / (8 * 1024 * 1024));
	return 0;
}