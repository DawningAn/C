# define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>

//int main() {
//	FILE* pf = fopen("test.txt", "w");  //���շ��ص��ļ���Ϣ��ָ��(����ļ������ڣ����Զ�����)
//	//�����ʧ�ܣ��᷵��NULL
//	if (pf == NULL) {
//		perror("fopen\n");
//		return 1;
//	}
//	//д�ļ�
//	fputc('A', pf);  //д�뵥���ַ�
//	for (int i = 0; i < 26; i++) {
//		int c = 'a' + i;
//		fputc(c, pf);
//	}
//	//���ļ�
//	for (int i = 0; i < 27; i++) {
//		printf("%c ", fgetc(pf));
//	}
//	//�ر��ļ�
//	fclose(pf);
//	//����Ҫ��ָ���ÿ�
//	pf = NULL;
//	return 0;
//}
int main() {
	int ch = fgetc(stdin);
	fputc(ch, stdout);

	return 0;
}