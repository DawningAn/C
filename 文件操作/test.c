# define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>

//int main() {
//	//����Ϊtest.txt���ļ����򿪷�ʽwΪֻ��
//	//����ʹ�����·�������ڵ�ǰ���̵�Ŀ¼�´�test.txt�ļ�
//	//ʹ�þ���·��
//	//FILE* pf = fopen("C:\\Desktop\\test.txt", "w");  //����������򿪸��ļ�
//	FILE* pf = fopen("test.txt", "r");  //���շ��ص��ļ���Ϣ��ָ�� (����ļ������ڣ����Զ�����)
//	//����ļ���ʧ�ܣ������ļ������ڣ����᷵��NULL
//	if (pf == NULL) {
//		perror("fopen\n");
//		return 1;
//	}
//	//д�ļ�
//	//fputc('A', pf);  //д�뵥���ַ�A��test.txt
//	//ѭ��д��
//	for (int i = 0; i < 26; i++) {
//		fputc('a' + i, pf);
//	}
//
//	//���ļ�
//	/*for (int i = 0; i < 26; i++) {
//		int ch = fgetc(pf);
//		printf("%c ", ch);
//	}*/
//	//����������ASCII��ֵ�����򷵻�EOF
//	int ch = 0;
//	while ((ch = fgetc(pf)) != EOF) {
//		printf("%c ", ch);
//	}
//
//	//�ر��ļ�
//	fclose(pf);
//	//����Ҫ��ָ���ÿ�
//	pf = NULL;
//	return 0;
//}

//int main() {
//	//������������
//	FILE* pf = fopen("test.txt", "w");
//	//д��ʱ�����ԭ������
//	fputs("hello\n",pf);
//	fputs("world\n",pf);
//}

//int main() {
//	FILE* pf = fopen("test.txt", "r");
//	if (NULL == pf) {
//		perror("fopen\n");
//		return 1;
//	}
//	//���ж�
//	//char * fgets ( char * str, int num, FILE * stream );
//	//���������ݷŵ�strָ����ַ������numΪ�������ٸ��ַ���
//	char arr[20] = "#############";
//	fgets(arr, 10, pf);  //\nҲ�����
//	printf("%s", arr);
//
//	fgets(arr, 10, pf);  //\nҲ�����
//	printf("%s", arr);
//}

//��ȡ�ṹ��
struct Stu {
	char name[10];
	int age;
	float height;
};
//int main() {
//	struct Stu s = { "����",18,177.6f};
//
//	FILE* pf = fopen("test.txt", "r");
//	if (NULL == pf) {
//		perror("fopen\n");
//		return 1;
//	}
//	//����д�ļ�(�����ݰ���ʽд��)
//	//fprintf(pf,"%s %d %f", s.name, s.age, s.height);
//	//��ȡ���� int fscanf ( FILE * stream, const char * format, ... );
//	//���ļ������ȡ
//	fscanf(pf, "%s %d %f", s.name, &(s.age), &(s.height));
//
//	printf("%s %d %f\n", s.name, s.age, s.height); 
//	
//}

//int main() {
//	int ch = fgetc(stdin);  //�Ӽ����϶�ȡ
//	fputc(ch, stdout);   //�������Ļ��
//
//	return 0;
//}

//�����ƶ�д
//int main() {
//	struct Stu s = { "����",20,111.1 };
//	FILE* pf = fopen("test.txt", "wb");  //������д��
//	if (NULL == pf) {
//		perror("fopen\n");
//		return 1;
//	}
//	//size_t fwrite ( const void * ptr, size_t size, size_t count, FILE * stream );
//	//��ptrָ����ȡcount ����СΪsize�����ݵ��ļ�����
//	fwrite(&s, sizeof(s), 1, pf);
//}

//int main() {
//	struct Stu s = { 0 };
//	FILE* pf = fopen("test.txt", "rb");  //�����ƶ�ȡ
//	if (NULL == pf) {
//		perror("fopen\n");
//		return 1;
//	}
//	//size_t fread ( void * ptr, size_t size, size_t count, FILE * stream )
//	//���ļ������ȡcount����СΪsize�����ݵ�ptr��ָ��Ŀռ�ȥ
//	fread(&s,sizeof(s),1,pf);
//
//	printf("%s %d %f\n", s.name, s.age, s.height);
//	return 0;
//}

//int main() {
//	struct Stu s = { "����",10,12.8f };
//	struct Stu tmp = { 0 };
//
//
//	char buf[40] = { 0 };
//	//�ṹ������ת�����ַ���
//	sprintf(buf,"%s %d %f\n", s.name, s.age, s.height);
//
//	printf("%s", buf);
//
//	//��buf��ԭΪ�ṹ��
//	sscanf(buf, "%s %d %f", tmp.name, &(tmp.age), &(tmp.height));
//	printf("%s %d %f\n", tmp.name, tmp.age, tmp.height);
//	return 0;
//}

//int main() {
//	FILE* pf = fopen("test.txt", "r");  //abcfgh
//	if (pf == NULL) {
//		perror("fopen\n");
//		return 1;
//	}
//	//������ļ�
//	fseek(pf, 4, SEEK_SET);
//	int tmp = fgetc(pf);
//	printf("%c\n", tmp);
//	//��ȡ��ǰƫ����
//	printf("%d\n",ftell(pf));
//
//	//rewind��pf�ص���ʼλ��
//	rewind(pf);
//	printf("%d\n", ftell(pf));
//
//	return 0;
//}

//int main() {
//	int a = 10000;
//	FILE* pf = fopen("test.txt", "wb");
//	fwrite(&a, 4, 1, pf);  //�����Ƶ���ʽд���ļ���
//
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}

//fgetc
//��ȡʧ�ܷ���EOF
//����ȡ�ɹ����᷵�ض����ַ���ASCII��ֵ

//fgets
//���ص��Ǵ�Ŷ���������str�ռ����ʼ��ַ
//��ȡʧ�ܣ��򷵻�NULL��

//fscanf��ȡ�ɹ������ص��Ƕ�����Ԫ�ظ���
//���򲻳ɹ�

#include <Windows.h>
int main() {
	FILE* pf = fopen("test.txt", "w");
	fputs("abcdef", pf);//�Ƚ�����������������

	printf("˯��10��-�Ѿ�д�����ˣ���test.txt�ļ��������ļ�û������\n");
	Sleep(10000);  //���롪��>10s
	printf("ˢ�»�����\n");
	fflush(pf);//ˢ�»�����ʱ���Ž����������������д���ļ������̣�
	//ע��fflush �ڸ߰汾��VS�ϲ���ʹ����

	printf("��˯��10��-��ʱ���ٴδ�test.txt�ļ����ļ���������\n");
	Sleep(10000);
	fclose(pf);
	//ע��fclose�ڹر��ļ���ʱ��Ҳ��ˢ�»�����
	pf = NULL;
	return 0;
}