# define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//int main() {
//
//	//��С�� �ֽ���
//	int a = 1;
//	// 0x 00 00 00 01
//	char* p = (char*)&a;
//	if (*p == 1) {  //����*(char*)&a == 1
//		printf("С��");
//	}
//	else {
//		printf("���");
//	}
//	return 0;
//}
//Ҳ���Խ��жϹ��̷�װΪһ������ʵ��
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
		printf("С��\n");
	}
	else
	{
		printf("���\n");
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