# define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
//�ṹ����������
//�����ṹ�����ͣ�ֻ��������ʱʹ��һ�Σ�
//struct
//{
//	int a;
//	char b;
//	float c;
//}x;  //ȫ�ֱ���ָ��
//
////�����ṹ������
//struct
//{
//	int a;
//	char b;
//	float c;
//}* p;
//
//int main() {
//	//���������Ĵ���
//	p = &x;  //��ʵ�����в�ͨ�ġ�����������������������������ȫ��ͬ���������͡������ǷǷ��ġ�
//}

//typedef struct Node {
//	int data;  //������
//	struct Node* next;  //ָ����
//
//}Node;  //��������ΪNode
//
//int main() {
//	Node n;  //�����ڵ�
//	return 0;
//}

struct Stu {
	char name[10];
	int age;
};

//int main() {
//	//Ҳ���Բ���˳���ʼ�����Լ�������Ҫ�ĳ�ʼ��˳����
//	struct Stu s = { .age = 18,.name = "����" };
//	
//	printf("%s %d\n", s.name, s.age);
//	return 0;
//
//}

//struct s1
//{
//	char c1;
//	int i;
//	char c2;
//};
//
//struct s2 {
//	char c1;
//	char c2;
//	int i;
//};
////�ṹ���ڴ����
////offset���������type��member���鿴�ڴ�ƫ����
//#include <stddef.h>
//int main() {
//	struct s1 ss1;
//	printf("%d ", offsetof(struct s1, c1));
//	printf("%d ", offsetof(struct s1, i));
//	printf("%d ", offsetof(struct s1, c2));   //ƫ�����ֱ�Ϊ0 4 8
//	//c1 0 0 0 i i i i 0 0 0 c2   ��ռ��12���ֽ�
//	printf("\n");
//	//����s2
//	printf("%d ", offsetof(struct s2, c1));
//	printf("%d ", offsetof(struct s2, c2));
//	printf("%d ", offsetof(struct s2, i));    //ƫ�����ֱ�Ϊ0 1 4
//	//c1 c2 0 0 i i i i  ��ռ��8���ֽ�
//	printf("\n");
//
//	printf("%d %d\n", sizeof(struct s1), sizeof(struct s2));
//	return 0;
//}


//#include <stdio.h>
//#pragma pack(8)  //����Ĭ�϶�����Ϊ8
//struct S1
//{
//	char c1;
//	int i;
//	char c2;
//};
//#pragma pack()   //ȡ�����õ�Ĭ�϶���������ԭΪĬ��
//#pragma pack(1)  //����Ĭ�϶�����Ϊ1
//struct S2
//{
//	char c1;
//	int i;
//	char c2;
//};
//#pragma pack()  //ȡ�����õ�Ĭ�϶���������ԭΪĬ��
//int main()
//{
//	//����Ľ����ʲô��
//	printf("%d\n", sizeof(struct S1));
//	printf("%d\n", sizeof(struct S2));
//	return 0;
//}
//  �ṹ�ڶ��뷽ʽ�����ʵ�ʱ����ô�����Լ�����Ĭ�϶�������

//λ��
//
//1.λ�εĳ�Ա������ int��unsigned int ��signed int ��
//2.λ�εĳ�Ա�������һ��ð�ź�һ�����֡�
//���磺
struct A
{
	int _a : 2;
	int _b : 5;
	int _c : 10;
	int _d : 30;
};
//A����һ��λ������
//int main() {
//	struct A a;
//	printf("%d\n", sizeof(a));  //8���ֽ�
//	return 0;
//	//����λ��ʵ�Ƕ�����λ
//}

//һ������
struct S
{
	char a : 3;  //��Ȼ����1���ֽڣ�8bitλ  
				//��a��ʼ��ʱ����8��bitλ�ӵ�λ��ʼʹ��,ռ��3��bitλ
				// 
				// ��λ		<��������������������������������		��λ
				//0 b b b b a a a | 0 0 0 c c c c c | 0 0 0 0 d d d d 
	char b : 4;
	char c : 5;
	char d : 4;
};
struct S s = { 0 };
//�����ڴ�
int main() {
	//printf("%d\n", sizeof(s));  //3
	s.a = 10;  //1010  ע��a���ʱֻ��ʹ��3��bitλ
	s.b = 12;  //1100
	s.c = 3;   //011
	s.d = 4;   //100
	//����֤��ŷ�ʽ
	//0 b b b b a a a | 0 0 0 c c c c c | 0 0 0 0 d d d d
	//0 1 1 0 0 0 1 0 | 0 0 0 0 0 0 1 1 | 0 0 0 0 0 1 0 0
	//	6		2			0		3		0		4

	return 0;
}

