#include <stdio.h>

int main()
{
	int sum = 0;
	int r, g, b;
	scanf("%d %d %d", &r, &g, &b);
	for (int i = 0; i < r; i++)
		for (int j = 0; j < g; j++)
			for (int k = 0; k < b; k++)
				printf("%d %d %d\n", i, j, k);
	printf("%d", r * g * b);
	return 0;
}