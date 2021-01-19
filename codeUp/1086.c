#include <stdio.h>

int main()
{
	int w, h, b;
	double mb;
	scanf("%d %d %d", &w, &h, &b);
	mb = w * h * b;
	printf("%.2lf MB", mb / (8 * 1024 * 1024));
	return 0;
}