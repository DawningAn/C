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
//采用枚举来实现input的选择
enum input {
	Exit,	//0
	Add,	//1
	Del,	//2
	Search, //3
	Modify, //4
	Show,	//5
	Sort	//6
};
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
		case Add:  //增加信息
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
			DestroyCon(&con);  //销毁通讯录
			printf("退出程序！\n");
			break;
		default:
			break;
		}
	} while (input);
	return 0;
}