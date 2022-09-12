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

//判断大小端
//int main() {
//	int a = 1;
//	char* flag = (char*) & a;
//	if (*flag)
//		printf("小端\n");
//	else
//		printf("大端\n");
//	return 0;
//}

//函数指针
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

//输入一个整数数组，实现一个函数，
//
//来调整该数组中数字的顺序使得数组中所有的奇数位于数组的前半部分，
//
//所有偶数位于数组的后半部分
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

//模拟实现strcpy
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

//strcat字符串追加函数
#include <string.h>
//实现strcat函数
//char* myStrcat(char* dest, char* src) {
//	//先找到目标字符串里的'\0'
//	char* cur = dest;
//	while (*cur != '\0') {
//		cur++;
//	}
//	//进行拷贝
//	while (*cur++ = *src++) {
//		;
//	}
//	return dest;
//}
//int main() {
//	char arr1[20] = "hello ";
//	char arr2[] = "world";
//
//	char dest[20] = "江山如此";
//	char src[] = "多娇";
//	strcat(arr1, arr2);
//	printf("%s\n", arr1);
//
//	printf("%s\n", myStrcat(dest, src));
//
//	//考虑自己追加
//	//例如：h e l l o \0  那么追加时 自己修改自己，那么src将不会找到\0停下，肯定会报错
//	return 0;
//}

//实现strcmp函数
//int myStrcmp(char* s1, char* s2) {
//
//	while (*s1 == *s2) {
//		if (*s1 == '\0')
//			return 0;  //知道检索到字符串末尾的\0,说明像相等了
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

//char* myStrstr(const char* str1, const char* str2) {
//	//考虑两个指针来控制检索两个字符串
//	const char* s1 = str1;
//	const char* s2 = str2;
//	const char* p = str1;
//	while (*p) {
//		s1 = p;
//		s2 = str2;
//		while ((*s1 == *s2) && *s1 != '\0' && *s2 != '\0') {
//			s1++;
//			s2++;
//		}
//		p++;  //记录开始匹配的位置
//		if (*s2 == '\0') {
//			return (char*)p;  //找到子串
//		}
//	}
//	return NULL;  //找不到子串
//}
//int main() {
//	char arr1[] = "dadwadwa";
//	char arr2[] = "adw";
//	printf("%s\n", myStrstr(arr1, arr2));
//	return 0;
//}

//strtok函数
//char * strtok ( char * str, const char * sep );
//字符串分割，以特定字符对字符串进行分割
//int main() {
//	char arr[] = "www.HUAWEI@petal.com";
//	char buf[200] = { 0 };
//	strcpy(buf, arr);
//	//定义分割符的集合
//	const char* p = "@.";
//	char* str = NULL;
//
//	for (str = strtok(buf, p); str != NULL;str=strtok(NULL,p) ){
//		printf("%s\n",str);
//
//	}
//}

//strerror
/* strerror example : error list */
//#include <stdio.h>
//#include <string.h>
//#include <errno.h>  //必须包含的头文件
//int main()
//{
//    FILE* pFile;
//    pFile = fopen("unexist.ent", "r");
//    if (pFile == NULL)  //意味着调用（打开文件）失败
//        printf("Error opening file unexist.ent: %s\n", strerror(errno));  //errno为全局存放着错误码
//    //errno: Last error number
//    return 0; 
//}

//字符转换函数
/* isupper example */
#include <stdio.h>
#include <ctype.h>
int main()
{
    int i = 0;
    char str[] = "Test String.\n";
    char c;
    while (str[i])
    {
        c = str[i];
        if (isupper(c))
            c = tolower(c);
        putchar(c);
        i++;
    }
    return 0;
}




