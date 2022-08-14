# define _CRT_SECURE_NO_WARNINGS 1
#include "game.h"

//实现扫雷游戏
void menu() {
	printf("--------------------------\n");
	printf("         1.Play			\n");
	printf("         0.Exit			\n");
	printf("--------------------------\n");
}
void game() {
	//初始化两个棋盘，一个存放雷的信息
	//另一个存放排查过程的棋盘
	char mine[ROWS][COLS] = { 0 };
	char show[ROWS][COLS] = { 0 };

	//mine初始化全为“0”，表示棋盘上没有雷
	//show初始化全为“*”，表示还没有排查到信息
	initBoard(mine, ROWS, COLS, '0');
	initBoard(show, ROWS, COLS, '*');

	//displayBoard(mine, ROW, COL);  //考虑不打印含雷区信息的棋盘
	displayBoard(show, ROW, COL);  //显示时只打印九行九列
	//布置雷
	setMine(mine,ROW,COL);
	displayBoard(mine, ROW, COL);
	//排雷
	findMine(mine, show, ROW,COL);

}
int main() {
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
			break;
		}
	} while (input);
	return 0;
}