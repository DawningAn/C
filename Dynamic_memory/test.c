# define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <stdlib.h>

int main() {
	//int* ptr = (int*)malloc(INT_MAX);
	//*ptr = 10;
	//ptrΪ��ָ����ô�ͻᱨ��

	int* p = (int*)calloc(5, 4);
	if (p == NULL) {
		exit(EXIT_FAILURE);
	}

	//������Ȼ��Խ�磬int 4���ֽڣ�pֻ�ܷ���5��Ԫ��
	for (int i = 0; i <= 5; i++) {
		*(p + i) = i;
	}

	
	return 0;
}