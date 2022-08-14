# define _CRT_SECURE_NO_WARNINGS 1
#include "game.h"
//初始化棋盘
void InitBoard(char board[ROW][COL], int row, int col) {
	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < col; j++)
		{
			board[i][j] = ' ';
		}
	}
}
//实现打印显示棋盘(考虑行列变化时棋盘灵活打印)
void disPlay(char board[ROW][COL], int row, int col) {
	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < col; j++)
		{
			printf(" %c ", board[i][j]);
			if (j < col - 1)
				printf("|");
		}
		printf("\n");
		//printf(" %c | %c | %c \n", board[i][0], board[i][1], board[i][2]);
		//if (i < row - 1)
		//	printf("---|---|---\n");

		//打印每行之间的分隔
		if (i < row - 1)
		{
			for (int j = 0; j < col; j++)
			{
				printf("---");
				if (j < col - 1)
					printf("|");
			}
			printf("\n");
		}
	}
}

void Player(char board[ROW][COL], int row, int col) {
	printf("玩家下棋 -->\n");
	int x, y = 0;  //玩家坐标
	//判断坐标合法性（正整数；是否被占用）
	while (1)
	{
		printf("请输入您的落子位置：");
		scanf("%d %d", &x, &y);
		if ((x - 1 >= 0 && x - 1 <= row) && (y - 1 >= 0 && y - 1 <= row)) {
			if (board[x - 1][y - 1] == ' ') {
				board[x - 1][y - 1] = '*';
				break;
			}
			else
			{
				printf("当前位置已有棋子\n");
				
			}	
		}
		else
		{
			printf("坐标输入非法！\n");
			
		}
	}
}

void Computer(char board[ROW][COL], int row, int col) {
	printf("电脑下棋 -->\n");
	//电脑随机下子
	while (1)
	{
		int x = rand() % row;
		int y = rand() % col;
		if (board[x][y] == ' ')
		{
			board[x][y] = '#';
			break;
		}
	}
}

//判断棋盘是否已满
int isFull(char board[ROW][COL], int row, int col) {
	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < col; j++)
		{
			if (' ' == board[i][j])
			{
				return 0;
			}
		}
	}
	return 1;
}
char isWin(char board[ROW][COL], int row, int col) {
	for (int i = 0; i < row; i++)
	{
		if (board[i][0] == board[i][1] && board[i][1] == board[i][2] && board[i][0] != ' ') {
			return board[i][0];
		}
	}

	for (int i = 0; i < col; i++)
	{
		if (board[0][i] == board[1][i] && board[1][i] == board[2][i] && board[0][i] != ' ') {
			return board[0][1];
		}
	}

	if (board[0][0] == board[1][1] && board[1][1] == board[2][2] && board[0][0] != ' ')
		return board[0][0];
	if (board[0][2] == board[1][1] && board[1][1] == board[2][0] && board[0][2] != ' ')
		return board[0][2];

	//在判断棋盘是否已满
	if (isFull(board, row, col) == 1)
	{
		return 'Q';  //平局
	}

	return 'C'; //继续游戏
	
}