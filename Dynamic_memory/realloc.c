# define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>

/*
	对内存的大小做灵活的调整
	void* realloc(void*ptr, size_t size)

	ptr 是要调整的内存地址
	size 调整之后新大小
	返回值为调整之后的内存起始位置
*/

//int main()
//{
//	int* ptr = (int*)malloc(100);
//	if (ptr != NULL)
//	{
//		//业务处理
//	}
//	else
//	{
//		exit(EXIT_FAILURE);
//	}
//	//扩展容量
//	
//	ptr = (int*)realloc(ptr, 1000);
//
//	int* p = NULL;
//	p = realloc(ptr, 1000);
//	if (p != NULL)
//	{
//		ptr = p;
//	}
//
//	free(ptr);
//	return 0;
//}

	

