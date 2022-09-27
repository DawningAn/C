# define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <stdlib.h>

//int main() {
//	//int* ptr = (int*)malloc(INT_MAX);
//	//*ptr = 10;
//	//ptr为空指针那么就会报错
//
//	int* p = (int*)malloc(20);
//	if (p == NULL) {
//		exit(EXIT_FAILURE);
//	}
//
//	//下面显然会越界，int 4个字节，p只能访问5个元素
//	for (int i = 0; i < 20; i++) {
//		*(p + i) = i;
//	}
//
//	free(p);
//	p = NULL;
//	return 0;
//}

//结构体里的最后一个成员 是未知大小的数组
//struct S {
//	int a;
//	float ff;
//	int arr[];  //这就是柔性数组成员
//};

//int main() {
//	//printf("%d\n", sizeof(struct S));  // 8
//	struct S* s=(struct S*)malloc(sizeof(struct S) + sizeof(int) * 4);  //希望在前面空间的基础上再加上4个整形的空间
//	//这4个整形就存放在arr中
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
//	struct S* ptr = (struct S*)realloc(s, sizeof(struct S) + sizeof(int) * 10);  //对数组arr扩容到10个int
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

//对柔性数组还可以重新设计
struct S {
	int n;
	float f;
	int* arr;
};
int main() {
	struct S* ps = (struct S*)malloc(sizeof(struct S));  //先为int 和 float申请空间
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