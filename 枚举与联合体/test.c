# define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//ö������

enum Day//����
{
	Mon,
	Tues,
	Wed,
	Thur,
	Fri,
	Sat,
	Sun
};
enum Sex//�Ա�
{
	MALE,
	FEMALE,
	SECRET
};
enum Color {
	Red = 5,
	Green,
	Bule
};

//int main() {
//	//��������
//	enum Color co = Bule;  //��co��ʾ��ɫ
//
//	printf("%d\n", Red);
//	printf("%d\n", Bule);
//	printf("%d\n", Green);
//	printf("%d\n", sizeof(co));
//	return 0;
//}


//int main() {
//	//���ϱ����Ķ���
//	union Un un;
//	//��������Ĵ�С
//	printf("%p\n", &un);
//	printf("%p\n", &(un.c));
//	printf("%p\n", &(un.i));
//	
//	printf("%d\n", sizeof(un));
//	printf("%d\n", sizeof(union Un));
//}

//�Ľ���С���жϣ����������壩
//int check() {
//	union un {
//		int i;
//		char c;
//	}u;
//	u.i = 1;
//	return u.c;
//}
//int main() {
//	int ret = check();
//	if (ret == 1)
//		printf("С�ˣ�\n");
//	else
//		printf("��ˣ�\n");
//	return 0;
//}

//�������С�ļ���

union Un1
{
 char c[5];
 int i;
};
union Un2
{
	short c[7];
	int i;
};
//��������Ľ����ʲô��
int main() {
	printf("%d\n", sizeof(union Un1));
	printf("%d\n", sizeof(union Un2));  //������Ա��С����������������������ʱ�򣬾�Ҫ���뵽������������������
	return 0;
}
