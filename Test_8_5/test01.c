# define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//int main() {
//	int ch;  //getchar返回值为int，本质上EOF定义为常量-1，故ch为整形
//
//	//这样的方式可以在oj题目中达到多组输入的目的
//	while ((ch = getchar()) != EOF)  //EOF 定义为-1，是文件结束标志。当getchar函数读取失败时返回EOF（-1）
//	{
//		putchar(ch);  //打印ch字符
//	}
//}

int main() {
	//演示关于getchar的读取
	char password[10] = { 0 };  //初始化为空数组

	printf("请输入密码：");
	scanf("%s", password);  //读取用户输入存放到密码字符串中(scanf遇到空字符就不再读取)
	//清理\n
	//getchar();  //并不恰当，只能清理一个
	int tmp = 0;
	while ((tmp = getchar()) != '\n') {}  //即知道读取到回车时就说明缓冲区已经清理完毕

	// 接下来让用户确认密码的输入
	printf("是否确认密码？(y/n)");
	int ch = getchar();
	if (ch == 'y') {
		printf("确认成功\n");
	}
	else
	{
		printf("确认失败\n");
	}
	return 0;
}


