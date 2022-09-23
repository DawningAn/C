# define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

//calloc
//void* calloc (size_t num, size_t size);

#include <stdlib.h>
//int main() {
//	/*
//	函数的功能是为 num 个大小为 size 的元素开辟一块空间，并且把空间的每个字节初始化为0。
//	与函数 malloc 的区别只在于 calloc 会在返回地址之前把申请的空间的每个字节初始化为全0。
//	*/
//	int *p = (int*)calloc(10, sizeof(int));
//	if (p == NULL) {
//		perror("calloc");
//		return 1;
//	}
//	//进行赋值
//	for (int i = 0; i < 10; i++) {
//		*(p + i) = i;
//	}
//
//	free(p);
//	p = NULL;
//	return 0;
//}