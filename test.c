#include<stdio.h>
#include"game.h"
void menu()
{	
	printf("**************");
	printf("0.play  1.exit");
	printf("**************");
}
void game()
{
	char ret = 0;
	char board[ROW][COL] = { 0 };//�������߳���������Ϣ
	initboard(board, ROW, COL);//���̳�ʼ��
	Displayboard(board,ROW,COL);//��ӡ����
	while (1)
	{

		playermove(board, ROW, COL);//�������
		Displayboard(board, ROW, COL);
		ret = iswin(board, ROW, COL);
		if (ret != 'c')
		{
			break;
		}
		iswin(board, ROW, COL);//�ж���Ӯ
		computermove(board, ROW, COL);//������
		Displayboard(board, ROW, COL);
		ret = iswin(board, ROW, COL);
		if (ret != 'c')
		{
			break;
		}
	}
	if (ret == '*')
	{
		printf("���Ӯ\n");
	}
	else if (ret == '#')
	{
		printf("����Ӯ\n");
	}
	else
	{
		printf("ƽ��\n");
	}


}
void test()
{	
	int input = 0;
	srand((unsigned int)time(NULL));
	do
	{
		menu();
		printf("���룺\n");
		scanf_s("%d", &input);
		switch (input)
		{
		case 0:
			game();
			break;
		case 1:
			printf("�˳���Ϸ\n");
			break;
		default:
			printf("�������\n");
			break;
		}
	} while (input);
}
int main()
{	
	test();
	return 0;
}