# define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
#include <errno.h>
#include <stdlib.h>
//动态内存分配
/*
malloc
calloc
realloc
free
*/


//void* malloc (size_t size);
//int main() {
//	//返回值指向该分配的内存的起始地址
//	/*
//	如果开辟成功，则返回一个指向开辟好空间的指针。
//	如果开辟失败，则返回一个NULL指针，因此malloc的返回值一定要做检查。
//	返回值的类型是 void* ，所以malloc函数并不知道开辟空间的类型，具体在使用的时候使用者自己来决定。
//	*/
//	int* p = (int*)malloc(40);  //INT_MAX
//	if (p == NULL) {
//		printf("%s\n", strerror(errno));
//		return 1;
//	}
//	//释放
//	//void free (void* ptr);
//	free(p);
//	p = NULL;
//	return 0;
//}