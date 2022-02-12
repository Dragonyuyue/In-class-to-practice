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
	char board[ROW][COL] = { 0 };//数组存放走出的棋盘信息
	initboard(board, ROW, COL);//棋盘初始化
	Displayboard(board,ROW,COL);//打印棋盘
	while (1)
	{

		playermove(board, ROW, COL);//玩家下期
		Displayboard(board, ROW, COL);
		ret = iswin(board, ROW, COL);
		if (ret != 'c')
		{
			break;
		}
		iswin(board, ROW, COL);//判断输赢
		computermove(board, ROW, COL);//电脑下
		Displayboard(board, ROW, COL);
		ret = iswin(board, ROW, COL);
		if (ret != 'c')
		{
			break;
		}
	}
	if (ret == '*')
	{
		printf("玩家赢\n");
	}
	else if (ret == '#')
	{
		printf("电脑赢\n");
	}
	else
	{
		printf("平局\n");
	}


}
void test()
{	
	int input = 0;
	srand((unsigned int)time(NULL));
	do
	{
		menu();
		printf("输入：\n");
		scanf_s("%d", &input);
		switch (input)
		{
		case 0:
			game();
			break;
		case 1:
			printf("退出游戏\n");
			break;
		default:
			printf("输入错误\n");
			break;
		}
	} while (input);
}
int main()
{	
	test();
	return 0;
}