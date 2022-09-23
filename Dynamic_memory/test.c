# define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <stdlib.h>

int main() {
	//int* ptr = (int*)malloc(INT_MAX);
	//*ptr = 10;
	//ptr为空指针那么就会报错

	int* p = (int*)calloc(5, 4);
	if (p == NULL) {
		exit(EXIT_FAILURE);
	}

	//下面显然会越界，int 4个字节，p只能访问5个元素
	for (int i = 0; i <= 5; i++) {
		*(p + i) = i;
	}

	
	return 0;
}