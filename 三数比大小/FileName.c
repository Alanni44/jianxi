#include<stdio.h>
int main() 
{
	int a, b, c;
	printf("请输入三个整数\n");
	scanf_s("%d%d%d", &a, &b, &c);
	if (a > b&&a > c)
		printf("%d", a);
	else if (b > a&&b > c)
		printf("%d", b);
	else
		printf("%d", c);
	return 0;
}
