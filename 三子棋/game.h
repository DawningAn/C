#pragma once

#include <stdio.h>
#include <time.h>
#include <stdlib.h>
//将行列定义为宏
#define ROW 3
#define COL 3

//函数声明
void disPlay(char board[ROW][COL], int row, int col);  //打印棋盘
void InitBoard(char board[ROW][COL], int row, int col);  //初始化棋盘
void Player(char board[ROW][COL], int row, int col);  //玩家下棋
void Computer(char board[ROW][COL], int row, int col);  //电脑下棋
char isWin(char board[ROW][COL], int row, int col);  //判断游戏状态