# define _CRT_SECURE_NO_WARNINGS 1
#include "game.h"
//��ʼ������
void InitBoard(char board[ROW][COL], int row, int col) {
	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < col; j++)
		{
			board[i][j] = ' ';
		}
	}
}
//ʵ�ִ�ӡ��ʾ����(�������б仯ʱ��������ӡ)
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

		//��ӡÿ��֮��ķָ�
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
	printf("������� -->\n");
	int x, y = 0;  //�������
	//�ж�����Ϸ��ԣ����������Ƿ�ռ�ã�
	while (1)
	{
		printf("��������������λ�ã�");
		scanf("%d %d", &x, &y);
		if ((x - 1 >= 0 && x - 1 <= row) && (y - 1 >= 0 && y - 1 <= row)) {
			if (board[x - 1][y - 1] == ' ') {
				board[x - 1][y - 1] = '*';
				break;
			}
			else
			{
				printf("��ǰλ����������\n");
				
			}	
		}
		else
		{
			printf("��������Ƿ���\n");
			
		}
	}
}

void Computer(char board[ROW][COL], int row, int col) {
	printf("�������� -->\n");
	//�����������
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

//�ж������Ƿ�����
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

	//���ж������Ƿ�����
	if (isFull(board, row, col) == 1)
	{
		return 'Q';  //ƽ��
	}

	return 'C'; //������Ϸ
	
}