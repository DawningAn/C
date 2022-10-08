# define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>

//int main() {
//	FILE* pf = fopen("test.txt", "w");  //接收返回的文件信息区指针(如果文件不存在，会自动创建)
//	//如果打开失败，会返回NULL
//	if (pf == NULL) {
//		perror("fopen\n");
//		return 1;
//	}
//	//写文件
//	fputc('A', pf);  //写入单个字符
//	for (int i = 0; i < 26; i++) {
//		int c = 'a' + i;
//		fputc(c, pf);
//	}
//	//读文件
//	for (int i = 0; i < 27; i++) {
//		printf("%c ", fgetc(pf));
//	}
//	//关闭文件
//	fclose(pf);
//	//还需要将指针置空
//	pf = NULL;
//	return 0;
//}
int main() {
	int ch = fgetc(stdin);
	fputc(ch, stdout);

	return 0;
}