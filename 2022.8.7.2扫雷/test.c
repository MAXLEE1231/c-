#define _CRT_SECURE_NO_WARNINGS 1

#include"game.h"

void menu()
{
	printf("*******************************\n");
	printf("*********    1.play    ********\n");
	printf("*********    0.exit    ********\n");
	printf("*******************************\n");
}

void game()
{
	//布置雷的信息
	char mine[ROWS][COLS] = { 0 };
	//排查雷的信息
	char show[ROWS][COLS] = { 0 };
	//初始化
	InitBoard(mine, ROWS, COLS, '0');
	InitBoard(show, ROWS, COLS, '*');
	//打印棋盘格
	//DisplayBoard(mine, ROW, COL);
	DisplayBoard(show, ROW, COL);
	//布置雷
	SetMine(mine, ROW, COL);
	//DisplayBoard(mine, ROW, COL);
	//扫雷
	FineMine(mine, show, ROW, COL);
}


void test()
{
	int input;
	srand((unsigned int)time(NULL));
	do
	{
		menu();
		printf("请选择：");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("退出游戏");
			break;
		default:
			printf("选择错误，重新选择。\n");
			break;
		}
	} while (input);
}

int main()
{
	test();
	return 0;
}