# define _CRT_SECURE_NO_WARNINGS 1
#include "game.h"
//初始化11 * 11的棋盘
void initBoard(char board[ROWS][COLS], int rows, int cols, char set) {
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < cols; j++)
		{
			board[i][j] = set;
		}
	}
}
//打印棋盘
void displayBoard(char board[ROWS][COLS], int row, int col) {
	//打印列号
	for (int j = 0; j <= col; j++)
	{
		printf("%d ", j);
	}
	printf("\n");
	for (int i = 1; i <= row; i++)
	{
		//打印行号
		printf("%d ", i);
		for (int j = 1; j <= col; j++)
		{
			printf("%c ", board[i][j]);
		}
		printf("\n");
	}
}
//布置雷的位置
void setMine(char mine[ROWS][COLS], int row, int col) {
	//假设布置10个雷
	int count = 10;
	while (count) {
		int x = rand() % row + 1;  //x，y坐标生成1 ~ 9
		int y = rand() % col + 1;
		if (mine[x][y] == '0')  //说明可以布置雷
		{
			mine[x][y] = '1';
			count--;
		}
	}
}
//排雷
//统计一个坐标周围的雷数量
int get_mineCount(char mine[ROWS][COLS], int x, int y) {
	return (mine[x - 1][y] + mine[x - 1][y - 1] + mine[x - 1][y + 1] +
		mine[x][y - 1] + mine[x][y + 1] +
		mine[x + 1][y - 1] + mine[x + 1][y] + mine[x + 1][y + 1] - 8 * '0');  //周围8个坐标里的值加起来再减去8*'0',表示有几个雷
}
void findMine(char mine[ROWS][COLS], char show[ROWS][COLS], int row, int col) {
	int x = 0;
	int y = 0;
	int win = 0;
	while (win < row*col-COUNT)  //获胜条件是排完71个雷
	{
		printf("请输入你要排雷的坐标：");
		scanf("%d %d", &x, &y);
		if (x >= 1 && x <= row && y >= 1 && y <= col) {
			//坐标合法，先判断该坐标是否为雷。统计该坐标周围的炸弹数量
			//加条件是重复输入已经排过的坐标会导致win++，加入一个起始if语句判断坐标是否已经排查过
			if (show[x][y] == '*')
			{
				if (mine[x][y] == '1')
				{
					printf("很遗憾，点雷游戏失败！");
					displayBoard(mine, ROW, COL);
					break;
				}
				else
				{
					int count = get_mineCount(mine, x, y);  //将得到的炸弹数量放入show数组的对应位置，表示数量
					show[x][y] = count + '0';  //加'0'为了让数组作为字符存入
					displayBoard(show, ROW, COL);
					win++;  //排雷成功
				}
			}
			else
			{
				printf("该坐标已经排查过\n");
			}
			
			
		}
		else
		{
			printf("坐标非法！请重新输入\n");
		}
	}
	if (win == row*col-COUNT)  //踩到雷了，那么循环提前退出，就不满足if条件
	{
		printf("恭喜你，排雷成功\n");
		displayBoard(mine, ROW, COL);
	}
}