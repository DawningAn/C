# define _CRT_SECURE_NO_WARNINGS 1
#include "contact.h"

//���ײ˵�
void menu() {
	printf("--------------------------\n");
	printf("----1.Add--------2.Del----\n");
	printf("----3.Search-----4.Modify-\n");
	printf("----5.Show-------6.Sort---\n");
	printf("-----------0.Exit---------\n");
	printf("--------------------------\n");
}
//ͨѶ¼ʵ��
int main() {
	int input = 0;
	//����ͨѶ¼
	struct Contact con;
	//��ʼ��ͨѶ¼
	InitContact(&con);
	do {
		menu();
		printf("����������Ҫ�Ĳ�����");
		
		scanf("%d", &input);
		switch (input)
		{
		case 1:  //������Ϣ
			AddContact(&con);
			break;
		case 2:
			DelContact(&con);
			break;
		case 3:
			Search(&con);
			break;
		case 4:
			Modify(&con);
			break;
		case 5:
			ShowContact(&con);
			break;
		case 6:
			Sort(&con);
			break;
		case 0:
			printf("�˳�����.");
			break;
		default:
			break;
		}
	} while (input);
}