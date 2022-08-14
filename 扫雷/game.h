#pragma once
#include <stdio.h>
#include <time.h>
#include <stdlib.h>
//例如实现9 * 9的扫雷
//为了方便位于边界的各自进行设计，将棋盘扩充一圈
# define ROW 9
# define COL 9

# define ROWS ROW+2
# define COLS COL+2

#define COUNT 10  //雷的数量
void initBoard(char board[ROWS][COLS], int rows,int cols,char set);  //声明初始化棋盘函数
void displayBoard(char board[ROWS][COLS], int row, int col);  //打印棋盘
void setMine(char mine[ROWS][COLS], int row, int col);   //布置雷的分布
void findMine(char mine[ROWS][COLS], char show[ROWS][COLS], int row, int col);  //排雷