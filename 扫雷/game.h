#pragma once
#include <stdio.h>
#include <time.h>
#include <stdlib.h>
//����ʵ��9 * 9��ɨ��
//Ϊ�˷���λ�ڱ߽�ĸ��Խ�����ƣ�����������һȦ
# define ROW 9
# define COL 9

# define ROWS ROW+2
# define COLS COL+2

#define COUNT 10  //�׵�����
void initBoard(char board[ROWS][COLS], int rows,int cols,char set);  //������ʼ�����̺���
void displayBoard(char board[ROWS][COLS], int row, int col);  //��ӡ����
void setMine(char mine[ROWS][COLS], int row, int col);   //�����׵ķֲ�
void findMine(char mine[ROWS][COLS], char show[ROWS][COLS], int row, int col);  //����