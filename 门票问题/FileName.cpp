#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main()
{
	int price = 60;
	int age, a,b,c,d,e;
	printf("��������������\n");
	scanf("%d", &age);
	b = price * 0.8;
	c = price;
	d = price * 0.6;
	if (0 < age &&age< 12 || age>60)
		printf("������Ʊ�۸�Ϊ%d\n", d);
	else
		printf("ѧ��������2����ѧ��������3\n");
		scanf("%d", &a);
		e=(a==2)? b : c;
		printf("������Ʊ�۸�Ϊ%d", e);
	
		return 0;
}
