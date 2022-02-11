#include<stdio.h>
int compar_figures(int m,int n)
{
	int count = 0;
	int tmp = m ^ n;
	while (tmp)
	{
		tmp = tmp & (tmp - 1);
		count++;
	}
	return count;
}

int main()
{
	int m=0, n = 0;
	printf("input m n=");
	scanf_s("%d%d", &m, &n);
	int count=compar_figures(m,n);
	printf("the number=%d\n", count);
	return 0;

}