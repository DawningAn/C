# define _CRT_SECURE_NO_WARNINGS 1
#include "game.h"

//ʵ��ɨ����Ϸ
void menu() {
	printf("--------------------------\n");
	printf("         1.Play			\n");
	printf("         0.Exit			\n");
	printf("--------------------------\n");
}
void game() {
	//��ʼ���������̣�һ������׵���Ϣ
	//��һ������Ų���̵�����
	char mine[ROWS][COLS] = { 0 };
	char show[ROWS][COLS] = { 0 };

	//mine��ʼ��ȫΪ��0������ʾ������û����
	//show��ʼ��ȫΪ��*������ʾ��û���Ų鵽��Ϣ
	initBoard(mine, ROWS, COLS, '0');
	initBoard(show, ROWS, COLS, '*');

	//displayBoard(mine, ROW, COL);  //���ǲ���ӡ��������Ϣ������
	displayBoard(show, ROW, COL);  //��ʾʱֻ��ӡ���о���
	//������
	setMine(mine,ROW,COL);
	displayBoard(mine, ROW, COL);
	//����
	findMine(mine, show, ROW,COL);

}
int main() {
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
			break;
		}
	} while (input);
	return 0;
}