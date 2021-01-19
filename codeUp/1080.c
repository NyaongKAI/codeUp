#include <stdio.h>

int main()
{
	int i, sum = 0, n;
	scanf("%d", &n);
	for (i = 0; sum < n; i++) {
		sum += i;
	}
	printf("%d", i - 1);
	return 0;
}