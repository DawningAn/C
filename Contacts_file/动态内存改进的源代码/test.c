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
//����ö����ʵ��input��ѡ��
enum input {
	Exit,	//0
	Add,	//1
	Del,	//2
	Search, //3
	Modify, //4
	Show,	//5
	Sort	//6
};
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
		case Add:  //������Ϣ
			AddContact(&con);
			break;
		case Del:
			DelContact(&con);
			break;
		case Search:
			SearchContact(&con);
			break;
		case Modify:
			ModifyContact(&con);
			break;
		case Show:
			ShowContact(&con);
			break;
		case Sort:
			SortContact(&con);
			break;
		case Exit:
			DestroyCon(&con);  //����ͨѶ¼
			printf("�˳�����\n");
			break;
		default:
			break;
		}
	} while (input);
	return 0;
}