#include <stdio.h>

int main()
{
	int n, sum;
	scanf("%d", &n);
	for (int i = 1;; i++) {
		sum += i;
		if (sum >= n)
			break;
	}
	printf("%d", sum);
	return 0;
}