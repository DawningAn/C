# define _CRT_SECURE_NO_WARNINGS 1
#include "game.h"
  
void menu() {
	printf("-----------------------------------\n");
	printf("              1. PLAY\n");
	printf("              0. EXIT\n");
	printf("-----------------------------------\n");
}
void game() {
	char ret = 0;
	char board[ROW][COL];
	InitBoard(board, ROW, COL);  //初始化棋盘
	disPlay(board, ROW, COL);  //打印棋盘
	//游戏过程
	//玩家下棋
	while (1)
	{
		Player(board, ROW, COL);
		disPlay(board, ROW, COL);
		ret = isWin(board, ROW, COL);
		if (ret != 'C') {
			break;
		}
		
		Computer(board, ROW, COL);
		disPlay(board, ROW, COL);
		ret = isWin(board, ROW, COL);
		if (ret != 'C') {
			break;
		}
		
	}	
	if (ret == '*')
	{
		printf("玩家胜出！\n");

	}
	else if (ret == '#')
	{
		printf("电脑胜出！\n");
	}
	else if(ret == 'Q')
	{
		printf("平局！\n");
	}
	disPlay(board, ROW, COL); 
}
int main() {
	//二维数组来定义棋盘
	int input;
	srand((unsigned int)time(NULL));
	do
	{
		menu();
		printf("请输入你的选择：");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("退出游戏\n");
			break;
		default:
			printf("非法的输入！");
			break;
		}
	} while (input);
	return 0;
}