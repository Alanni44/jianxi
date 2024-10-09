#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main()
{
	int price = 60;
	int age, a,b,c,d,e;
	printf("请输入您的年龄\n");
	scanf("%d", &age);
	b = price * 0.8;
	c = price;
	d = price * 0.6;
	if (0 < age &&age< 12 || age>60)
		printf("您的门票价格为%d\n", d);
	else
		printf("学生请输入2，非学生请输入3\n");
		scanf("%d", &a);
		e=(a==2)? b : c;
		printf("您的门票价格为%d", e);
	
		return 0;
}
