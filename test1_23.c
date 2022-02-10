#include<stdio.h>

int main()
{
	int i = 0;
	for (i = 1; i <= 9; i++)
	{	
		int j = 1;
		for (j = 1; j <= i; j++)
		{
			printf("%d*%d=%-3d", j, i,j * i);

		}
		printf("\n");

	}
	return 0;




}




