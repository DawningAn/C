# define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <stdlib.h>

//int main() {
//	//int* ptr = (int*)malloc(INT_MAX);
//	//*ptr = 10;
//	//ptrΪ��ָ����ô�ͻᱨ��
//
//	int* p = (int*)malloc(20);
//	if (p == NULL) {
//		exit(EXIT_FAILURE);
//	}
//
//	//������Ȼ��Խ�磬int 4���ֽڣ�pֻ�ܷ���5��Ԫ��
//	for (int i = 0; i < 20; i++) {
//		*(p + i) = i;
//	}
//
//	free(p);
//	p = NULL;
//	return 0;
//}

//�ṹ��������һ����Ա ��δ֪��С������
//struct S {
//	int a;
//	float ff;
//	int arr[];  //��������������Ա
//};

//int main() {
//	//printf("%d\n", sizeof(struct S));  // 8
//	struct S* s=(struct S*)malloc(sizeof(struct S) + sizeof(int) * 4);  //ϣ����ǰ��ռ�Ļ������ټ���4�����εĿռ�
//	//��4�����ξʹ����arr��
//	if (s == NULL) {
//		return 1;
//	}
//
//	s->arr[0] = 10;
//	s->arr[1] = 60;
//	s->arr[2] = 50;
//	s->arr[3] = 100;
//
//	for (int i = 0; i < 4; i++) {
//		printf("%d \n", s->arr[i]);
//	}
//
//	struct S* ptr = (struct S*)realloc(s, sizeof(struct S) + sizeof(int) * 10);  //������arr���ݵ�10��int
//	
//	for (int i = 0; i < 10;i++) {
//		ptr->arr[i] = i;
//	}
//
//	for (int i = 0; i < 10; i++) {
//		printf("%d ", ptr->arr[i]);
//	}
//
//	return 0;
//}

//���������黹�����������
struct S {
	int n;
	float f;
	int* arr;
};
int main() {
	struct S* ps = (struct S*)malloc(sizeof(struct S));  //��Ϊint �� float����ռ�
	if (ps == NULL) {
		return 1;
	}
	ps->n = 10;
	ps->f = 10.10f;

	int* ptr = (int *)malloc(5 * sizeof(int));
	if (ptr == NULL) {
		return 1;
	}
	else {
		ps->arr = ptr;
	}

	for (int i = 0; i < 5; i++) {
		scanf("%d", &ps->arr[i]);
	}

	printf("%d\n%f\n", ps->n, ps->f);
	for (int i = 0; i < 5; i++) {
		printf("%d ", ps->arr[i]);
	}
	return 0;
}