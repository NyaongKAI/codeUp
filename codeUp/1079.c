#include <stdio.h>

int main()
{
	char ch;
	while (ch != 'q') {
		scanf("%c", &ch);
		printf("%c", ch);
	}
	return 0;
}