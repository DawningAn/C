#pragma once

#include <stdio.h>
#include <time.h>
#include <stdlib.h>
//�����ж���Ϊ��
#define ROW 3
#define COL 3

//��������
void disPlay(char board[ROW][COL], int row, int col);  //��ӡ����
void InitBoard(char board[ROW][COL], int row, int col);  //��ʼ������
void Player(char board[ROW][COL], int row, int col);  //�������
void Computer(char board[ROW][COL], int row, int col);  //��������
char isWin(char board[ROW][COL], int row, int col);  //�ж���Ϸ״̬