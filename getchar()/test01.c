# define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//int main() {
//	int ch;  //getchar����ֵΪint��������EOF����Ϊ����-1����chΪ����
//
//	//�����ķ�ʽ������oj��Ŀ�дﵽ���������Ŀ��
//	while ((ch = getchar()) != EOF)  //EOF ����Ϊ-1�����ļ�������־����getchar������ȡʧ��ʱ����EOF��-1��
//	{
//		putchar(ch);  //��ӡch�ַ�
//	}
//}

int main() {
	//��ʾ����getchar�Ķ�ȡ
	char password[10] = { 0 };  //��ʼ��Ϊ������

	printf("���������룺");
	scanf("%s", password);  //��ȡ�û������ŵ������ַ�����(scanf�������ַ��Ͳ��ٶ�ȡ)
	//����\n
	//getchar();  //����ǡ����ֻ������һ��
	int tmp = 0;
	while ((tmp = getchar()) != '\n') {}  //��֪����ȡ���س�ʱ��˵���������Ѿ��������

	// ���������û�ȷ�����������
	printf("�Ƿ�ȷ�����룿(y/n)");
	int ch = getchar();
	if (ch == 'y') {
		printf("ȷ�ϳɹ�\n");
	}
	else
	{
		printf("ȷ��ʧ��\n");
	}
	return 0;
}


