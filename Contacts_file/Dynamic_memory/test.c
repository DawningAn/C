# define _CRT_SECURE_NO_WARNINGS 1
#include "contact.h"

//简易菜单
void menu() {
	printf("--------------------------\n");
	printf("----1.Add--------2.Del----\n");
	printf("----3.Search-----4.Modify-\n");
	printf("----5.Show-------6.Sort---\n");
	printf("-----------0.Exit---------\n");
	printf("--------------------------\n");
}
//通讯录实现
int main() {
	int input = 0;
	//创建通讯录
	struct Contact con;
	//初始化通讯录
	InitContact(&con);
	do {
		menu();
		printf("请输入你想要的操作：");
		
		scanf("%d", &input);
		switch (input)
		{
		case 1:  //增加信息
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
			DestroyCon(&con);  //销毁通讯录
			printf("退出程序.");
			break;
		default:
			break;
		}
	} while (input);
}