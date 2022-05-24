#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	int q = 0;
	int w = 0;
	int e = 0;
	scanf("%d%d", &q, &w);
	e = q + w;
	//e<7时直接输出星期天数
	if (e > 0 && e <= 7)
	{
		printf("%d\n", e);
	}
	//e>7时输出的星期数
	else
	{
		while (e > 7)
		{
			e -= 7;
		}
		printf("%d\n", e);
	}
	return 0;
}