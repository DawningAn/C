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
//void test()
//{
//	printf("Hello World!\n");
//}
//
//int main() {
//	printf("%p\n", test);
//	printf("%p\n", &test);
//
//	return 0; 
//}

//
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	for (int i = 0; i <=12; i++)
//	{
//		arr[i] = 0;
//		printf("hello world!\n");
//
//	}
//	return 0;
//}

//����һ���������飬ʵ��һ��������
//
//�����������������ֵ�˳��ʹ�����������е�����λ�������ǰ�벿�֣�
//
//����ż��λ������ĺ�벿��
//void print(int arr[], int sz) {
//	for (int i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	printf("\n");
//}
//void moveEvenOdd(int arr[], int sz) {
//	int left = 0;
//	int right = sz - 1;
//	while (left < right)
//	{
//		while (arr[left] % 2 == 1 && (left < right))
//		{
//			left++;
//		}
//		while (arr[right] % 2 == 0 && (left < right))
//		{
//			right--;
//		}
//		if (left < right)
//		{
//			int tmp = arr[left];
//			arr[left] = arr[right];
//			arr[right] = tmp;
//			left++;
//			right--;
//		}
//	}
//	
//	
//}
//int main() {
//	int arr[] = { 1,2,3,4,5,6,7,8,9 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	print(arr, sz);
//	moveEvenOdd(arr, sz);
//	print(arr, sz);
//	return 0;
//
//}

//ģ��ʵ��strcpy
//void myStrcpy(char arr1[], char arr2[]) {
//	int i = 0;
//	while (arr1[i] != '\0') {
//		arr2[i] = arr1[i];
//		i++;
//	}
//	arr2[i] = '\0';
//}
//int main() {
//	char arr1[20] = "Hello World!";
//	char arr2[20] = { 0 };
//	myStrcpy(arr1, arr2);
//	printf("%s\n", arr2);
//}

//int main() {
//	int arr[3][4] = { 0 };
//	printf("%d\n", sizeof(*(arr[0] + 1)));
//}

//strcat�ַ���׷�Ӻ���
#include <string.h>
//ʵ��strcat����
//char* myStrcat(char* dest, char* src) {
//	//���ҵ�Ŀ���ַ������'\0'
//	char* cur = dest;
//	while (*cur != '\0') {
//		cur++;
//	}
//	//���п���
//	while (*cur++ = *src++) {
//		;
//	}
//	return dest;
//}
//int main() {
//	char arr1[20] = "hello ";
//	char arr2[] = "world";
//
//	char dest[20] = "��ɽ���";
//	char src[] = "�ཿ";
//	strcat(arr1, arr2);
//	printf("%s\n", arr1);
//
//	printf("%s\n", myStrcat(dest, src));
//
//	//�����Լ�׷��
//	//���磺h e l l o \0  ��ô׷��ʱ �Լ��޸��Լ�����ôsrc�������ҵ�\0ͣ�£��϶��ᱨ��
//	return 0;
//}

//ʵ��strcmp����
//int myStrcmp(char* s1, char* s2) {
//
//	while (*s1 == *s2) {
//		if (*s1 == '\0')
//			return 0;  //֪���������ַ���ĩβ��\0,˵���������
//		s1++;
//		s2++;
//	}
//	return *s1 - *s2;
//
//}
//int main() {
//	char s1[] = "acbhg";
//	char s2[] = "abjj";
//	printf("%d\n", myStrcmp(s1, s2));
//}

//int main() {
//	char arr1[] = "dadxxp";
//	char arr2[] = "xs";
//	strncpy(arr1, arr2, 3);
//	printf("%s\n", arr1);
//}

//#include <string.h>
//int main()
//{
//	char str1[20];
//	char str2[20];
//	strcpy(str1, "To be ");
//	strcpy(str2, "or not to be");
//	strncat(str1, str2, 6);
//	puts(str1);
//	return 0;
//}

//int main()
//{
//    char str[][5] = { "R2D2" , "C3PO" , "R2A6" };
//    int n;
//    puts("Looking for R2 astromech droids...");
//    for (n = 0; n < 3; n++)
//        if (strncmp(str[n], "R2xx", 2) == 0)
//        {
//            printf("found %s\n", str[n]);
//        }
//    return 0;
//}

char* myStrstr(const char* str1, const char* str2) {
	//��������ָ�������Ƽ��������ַ���
	const char* s1 = str1;
	const char* s2 = str2;
	const char* p = str1;
	while (*p) {
		s1 = p;
		s2 = str2;
		while ((*s1 == *s2) && *s1 != '\0' && *s2 != '\0') {
			s1++;
			s2++;
		}
		p++;  //��¼��ʼƥ���λ��
		if (*s2 == '\0') {
			return (char*)p;  //�ҵ��Ӵ�
		}
	}
	return NULL;  //�Ҳ����Ӵ�
}
int main() {
	char arr1[] = "dadwadwa";
	char arr2[] = "adw";
	printf("%s\n", myStrstr(arr1, arr2));
	return 0;
}



