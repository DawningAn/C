# define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
#include <errno.h>
#include <stdlib.h>
//��̬�ڴ����
/*
malloc
calloc
realloc
free
*/


//void* malloc (size_t size);
//int main() {
//	//����ֵָ��÷�����ڴ����ʼ��ַ
//	/*
//	������ٳɹ����򷵻�һ��ָ�򿪱ٺÿռ��ָ�롣
//	�������ʧ�ܣ��򷵻�һ��NULLָ�룬���malloc�ķ���ֵһ��Ҫ����顣
//	����ֵ�������� void* ������malloc��������֪�����ٿռ�����ͣ�������ʹ�õ�ʱ��ʹ�����Լ���������
//	*/
//	int* p = (int*)malloc(40);  //INT_MAX
//	if (p == NULL) {
//		printf("%s\n", strerror(errno));
//		return 1;
//	}
//	//�ͷ�
//	//void free (void* ptr);
//	free(p);
//	p = NULL;
//	return 0;
//}