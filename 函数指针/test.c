# define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
//#include<stdio.h>
//int main()
//{
//	char s[] = "\\123456\123456\t";
//	printf("%d\n", strlen(s));
//	return 0;
//}

//#define N 2
//#define M N + 1
//#define NUM (M + 1) * M / 2
//int main()
//{
//	printf("%d\n", NUM);
//	return 0;
//}

//�жϴ�С��
//int main() {
//	int a = 1;
//	char* flag = (char*) & a;
//	if (*flag)
//		printf("С��\n");
//	else
//		printf("���\n");
//	return 0;
//}

//����ָ��
void test()
{
	printf("Hello World!\n");
}

int main() {
	printf("%p\n", test);
	printf("%p\n", &test);

	return 0; 
}