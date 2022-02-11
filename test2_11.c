#include<stdio.h>
//int get_binary(int a)
//{
//	int count = 0, i = 0;
//	for(i=0;i<32;i++)
//	{
//		if (((a >> i)&1)==1)
//		{
//			count++;
//		}
//	}
//	return count;
//}
//int get_binary(unsigned int a)
//{
//	int count = 0;
//	while(a)
//	{
//		if (a % 2 == 1)
//		{
//			count++;
//		}
//		a = a / 2;
//	}
//	return count;
//}
int get_binary(int a)
{
	int count = 0;
	while (a)
	{
		a = a & (a - 1);
		count++;
	}
	return count;
}
int main()
{
	int x = 0;
	printf("输入数字x=");
	scanf_s("%d", &x);
	int count=get_binary(x);
	printf("1的个数=%d\n", count);
	return 0;
}