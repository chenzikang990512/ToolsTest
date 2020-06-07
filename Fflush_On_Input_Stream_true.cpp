#include <stdio.h>

int main(void)
{
	int i, c;
	for (int j = 0; j < 100; j++)
	{
		fputs("Please input an integer: ", stdout);
		if (scanf_s("%d", &i) != EOF)
		{   /*如果用户输入的不是 EOF
            while循环会把输入缓冲中的残留字符清空
            读者可以根据需要把它改成宏或者内联函数
            注：C99中也定义了内联函数，gcc3.2支持*/
			while ((c = getchar()) != '\n' && c != EOF)
			{
				;
			}
		}
		printf("%d\n", i);

	}
	return 0;
}