#include <stdio.h>

int main(void)
{
	int i;
	for (int j=0;j<100;j++)
	{
		fputs("Please input an integer: ", stdout);
		scanf_s("%d", &i);
		fflush(stdin);
		printf("%d\n", i);
	}
	return 0;
}
