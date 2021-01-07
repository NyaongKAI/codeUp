#include <stdio.h>

int main()
{
	int a ,b = 10, c = 100000, d;
	scanf("%5d", &a);
	for (int i = 1; i <= 5; i++)
	{
		c /= b;
		d = (a / c) * c;
		printf("[%d]\n", d);
		a = a - d;
	}
	return 0;
}