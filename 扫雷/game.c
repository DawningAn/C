# define _CRT_SECURE_NO_WARNINGS 1
#include "game.h"
//��ʼ��11 * 11������
void initBoard(char board[ROWS][COLS], int rows, int cols, char set) {
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < cols; j++)
		{
			board[i][j] = set;
		}
	}
}
//��ӡ����
void displayBoard(char board[ROWS][COLS], int row, int col) {
	//��ӡ�к�
	for (int j = 0; j <= col; j++)
	{
		printf("%d ", j);
	}
	printf("\n");
	for (int i = 1; i <= row; i++)
	{
		//��ӡ�к�
		printf("%d ", i);
		for (int j = 1; j <= col; j++)
		{
			printf("%c ", board[i][j]);
		}
		printf("\n");
	}
}
//�����׵�λ��
void setMine(char mine[ROWS][COLS], int row, int col) {
	//���貼��10����
	int count = 10;
	while (count) {
		int x = rand() % row + 1;  //x��y��������1 ~ 9
		int y = rand() % col + 1;
		if (mine[x][y] == '0')  //˵�����Բ�����
		{
			mine[x][y] = '1';
			count--;
		}
	}
}
//����
//ͳ��һ��������Χ��������
int get_mineCount(char mine[ROWS][COLS], int x, int y) {
	return (mine[x - 1][y] + mine[x - 1][y - 1] + mine[x - 1][y + 1] +
		mine[x][y - 1] + mine[x][y + 1] +
		mine[x + 1][y - 1] + mine[x + 1][y] + mine[x + 1][y + 1] - 8 * '0');  //��Χ8���������ֵ�������ټ�ȥ8*'0',��ʾ�м�����
}
void findMine(char mine[ROWS][COLS], char show[ROWS][COLS], int row, int col) {
	int x = 0;
	int y = 0;
	int win = 0;
	while (win < row*col-COUNT)  //��ʤ����������71����
	{
		printf("��������Ҫ���׵����꣺");
		scanf("%d %d", &x, &y);
		if (x >= 1 && x <= row && y >= 1 && y <= col) {
			//����Ϸ������жϸ������Ƿ�Ϊ�ס�ͳ�Ƹ�������Χ��ը������
			//���������ظ������Ѿ��Ź�������ᵼ��win++������һ����ʼif����ж������Ƿ��Ѿ��Ų��
			if (show[x][y] == '*')
			{
				if (mine[x][y] == '1')
				{
					printf("���ź���������Ϸʧ�ܣ�");
					displayBoard(mine, ROW, COL);
					break;
				}
				else
				{
					int count = get_mineCount(mine, x, y);  //���õ���ը����������show����Ķ�Ӧλ�ã���ʾ����
					show[x][y] = count + '0';  //��'0'Ϊ����������Ϊ�ַ�����
					displayBoard(show, ROW, COL);
					win++;  //���׳ɹ�
				}
			}
			else
			{
				printf("�������Ѿ��Ų��\n");
			}
			
			
		}
		else
		{
			printf("����Ƿ�������������\n");
		}
	}
	if (win == row*col-COUNT)  //�ȵ����ˣ���ôѭ����ǰ�˳����Ͳ�����if����
	{
		printf("��ϲ�㣬���׳ɹ�\n");
		displayBoard(mine, ROW, COL);
	}
}