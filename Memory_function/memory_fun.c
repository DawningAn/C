# define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//memcpy内存拷贝
//void * memcpy ( void * destination, const void * source, size_t num );
//memcpy不在乎数据类型，这是对内存数据进行拷贝。可以接收任意类型

//实现Mymemcpy
//void* Mymemcpy(void * dest, void *src,int size_num) {
//	void* ret = dest;
//	while (size_num--) {
//		*(char*)dest = *(char*)src;
//	
//		((char*)dest)++;
//		((char*)src)++;
//	}
//	return ret;  //返回目标初始指针
//}
//int main() {
//	int arr1[] = { 1,2,3,4,5,6 };
//	int arr2[3] = { 9,8,7 };
//
//	//memcpy(arr1, arr2, 12);  //size_t num为拷贝的字节数
//	Mymemcpy(arr1, arr2, 12);
//	for (int i = 0; i < 6; i++) {
//		printf("%d ", arr1[i]);
//	}
//	return 0;
//}
//如果实现重叠内存的拷贝，不需要memcpy，重叠内存拷贝要使用memmove，但VS编译器的memcpy实现了重叠内存的拷贝

//memcpy内存比较函数
/* memcmp example */
//#include <string.h>
//int main()
//{
//	char buffer1[] = "DWgaOtP12df0";
//	char buffer2[] = "DWGAOTP12DF0";
//	int n;
//	n = memcmp(buffer1, buffer2, sizeof(buffer1));
//	if (n > 0) 
//		printf("'%s' is greater than '%s'.\n", buffer1, buffer2);
//	else if (n < 0) 
//		printf("'%s' is less than '%s'.\n", buffer1, buffer2);
//	else 
//		printf("'%s' is the same as '%s'.\n", buffer1, buffer2);
//	return 0;
//}

//memset
//以内存字节数来设置值
int main() {
	int arr[] = { 1,2,3,4,5 };
	memset(arr, 0, 12);
	return 0;
}