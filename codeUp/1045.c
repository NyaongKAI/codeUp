#include <stdio.h>
#include <math.h>

int main()
{
	int a, b;
	float c;
	scanf("%d %d", &a, &b);
	c = (float)a / b;
	for (int i = 0; i < 2; i++)
		c = c * 10;
	c = c + 0.5;
	c = floor(c);

	for (int i = 0; i < 2; i++)
		c = c / 10;
	printf("%d\n%d\n%d\n%d\n%d\n%.2f", a + b, a - b, a * b, a / b, a % b, c);
	return 0;
}