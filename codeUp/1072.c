#include <stdio.h>

int main()
{
	int a, b, c = 0;
	scanf("%d", &a);
reget:
	scanf("%d", &b);
	printf("%d\n", b);
	c++;
	if (a != c) goto reget;
	return 0;
}