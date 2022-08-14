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
	InitBoard(board, ROW, COL);  //��ʼ������
	disPlay(board, ROW, COL);  //��ӡ����
	//��Ϸ����
	//�������
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
		printf("���ʤ����\n");

	}
	else if (ret == '#')
	{
		printf("����ʤ����\n");
	}
	else if(ret == 'Q')
	{
		printf("ƽ�֣�\n");
	}
	disPlay(board, ROW, COL); 
}
int main() {
	//��ά��������������
	int input;
	srand((unsigned int)time(NULL));
	do
	{
		menu();
		printf("���������ѡ��");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("�˳���Ϸ\n");
			break;
		default:
			printf("�Ƿ������룡");
			break;
		}
	} while (input);
	return 0;
}