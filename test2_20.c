#include<stdio.h>
void meu()
{
	printf("1.add   2.sub\n");
	printf("3.mul   4.div\n");
	printf("0.exit");
}
int add(int x,int y)
{
	return x + y;
}
int sub(int x, int y)
{
	return x - y;
}
int mul(int x, int y)
{
	return x * y;
}
int div(int x, int y)
{
	return x / y;
}
int main()
{
	int input = 0;
	int x = 0;
	int y = 0;
	int(*pf[])(int, int) = { 0,add,sub,mul,div };//����ָ������
	do
	{
		meu();
		printf("���룺");
		scanf_s("%d",&input);
		if (input >= 1 && input <= 4)
		{
			printf("��������������\n");
			scanf_s("%d%d", &x, &y);
			int ret = pf[input](x, y);
			printf("%d\n", ret);
		}
		else if (input == 0)
		{
			printf("�˳�\n");
		}
		else
		{
			printf("�������\n");
		}
	} while (input);
}