# define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

//calloc
//void* calloc (size_t num, size_t size);

#include <stdlib.h>
//int main() {
//	/*
//	�����Ĺ�����Ϊ num ����СΪ size ��Ԫ�ؿ���һ��ռ䣬���Ұѿռ��ÿ���ֽڳ�ʼ��Ϊ0��
//	�뺯�� malloc ������ֻ���� calloc ���ڷ��ص�ַ֮ǰ������Ŀռ��ÿ���ֽڳ�ʼ��Ϊȫ0��
//	*/
//	int *p = (int*)calloc(10, sizeof(int));
//	if (p == NULL) {
//		perror("calloc");
//		return 1;
//	}
//	//���и�ֵ
//	for (int i = 0; i < 10; i++) {
//		*(p + i) = i;
//	}
//
//	free(p);
//	p = NULL;
//	return 0;
//}