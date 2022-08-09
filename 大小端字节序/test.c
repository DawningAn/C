# define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//int main() {
//
//	//大小端 字节序
//	int a = 1;
//	// 0x 00 00 00 01
//	char* p = (char*)&a;
//	if (*p == 1) {  //或者*(char*)&a == 1
//		printf("小端");
//	}
//	else {
//		printf("大端");
//	}
//	return 0;
//}
//也可以将判断过程封装为一个函数实现
int check_sys()
{
	int i = 1;
	return (*(char*)&i);
}
int main()
{
	int ret = check_sys();
	if (ret == 1)
	{
		printf("小端\n");
	}
	else
	{
		printf("大端\n");
	}
	return 0;
}

//int check()
//{
//	union
//	{
//		int i;
//		char c;
//	}un;
//	un.i = 1;
//	return un.c;
//}