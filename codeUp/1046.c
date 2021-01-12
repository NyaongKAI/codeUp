#include <stdio.h>
#include <math.h>

int main()
{
	long int a, b, c;
	float d;
	scanf("%ld %ld %ld", &a, &b, &c);
	d = (float)(a + b + c) / 3;
	for (int i = 0; i < 1; i++)
		d = d * 10;
	d = d + 0.5;
	d = floor(d);
	for (int i = 0; i < 1; i++)
		d = d / 10;
	printf("%ld\n%.1f", a + b + c, d);
	return 0;
}