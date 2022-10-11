# define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>

//int main() {
//	//打开名为test.txt的文件，打开方式w为只读
//	//这里使用相对路径，即在当前工程的目录下打开test.txt文件
//	//使用绝对路径
//	//FILE* pf = fopen("C:\\Desktop\\test.txt", "w");  //例如在桌面打开该文件
//	FILE* pf = fopen("test.txt", "r");  //接收返回的文件信息区指针 (如果文件不存在，会自动创建)
//	//如果文件打开失败（例如文件不存在），会返回NULL
//	if (pf == NULL) {
//		perror("fopen\n");
//		return 1;
//	}
//	//写文件
//	//fputc('A', pf);  //写入单个字符A到test.txt
//	//循环写入
//	for (int i = 0; i < 26; i++) {
//		fputc('a' + i, pf);
//	}
//
//	//读文件
//	/*for (int i = 0; i < 26; i++) {
//		int ch = fgetc(pf);
//		printf("%c ", ch);
//	}*/
//	//读正常返回ASCII码值，否则返回EOF
//	int ch = 0;
//	while ((ch = fgetc(pf)) != EOF) {
//		printf("%c ", ch);
//	}
//
//	//关闭文件
//	fclose(pf);
//	//还需要将指针置空
//	pf = NULL;
//	return 0;
//}

//int main() {
//	//按行输入和输出
//	FILE* pf = fopen("test.txt", "w");
//	//写入时会清空原有内容
//	fputs("hello\n",pf);
//	fputs("world\n",pf);
//}

//int main() {
//	FILE* pf = fopen("test.txt", "r");
//	if (NULL == pf) {
//		perror("fopen\n");
//		return 1;
//	}
//	//按行读
//	//char * fgets ( char * str, int num, FILE * stream );
//	//读到的内容放到str指向的字符数组里；num为最多读多少个字符；
//	char arr[20] = "#############";
//	fgets(arr, 10, pf);  //\n也会读到
//	printf("%s", arr);
//
//	fgets(arr, 10, pf);  //\n也会读到
//	printf("%s", arr);
//}

//读取结构体
struct Stu {
	char name[10];
	int age;
	float height;
};
//int main() {
//	struct Stu s = { "张三",18,177.6f};
//
//	FILE* pf = fopen("test.txt", "r");
//	if (NULL == pf) {
//		perror("fopen\n");
//		return 1;
//	}
//	//进行写文件(将数据按格式写入)
//	//fprintf(pf,"%s %d %f", s.name, s.age, s.height);
//	//读取数据 int fscanf ( FILE * stream, const char * format, ... );
//	//从文件流里读取
//	fscanf(pf, "%s %d %f", s.name, &(s.age), &(s.height));
//
//	printf("%s %d %f\n", s.name, s.age, s.height); 
//	
//}

//int main() {
//	int ch = fgetc(stdin);  //从键盘上读取
//	fputc(ch, stdout);   //输出到屏幕上
//
//	return 0;
//}

//二进制读写
//int main() {
//	struct Stu s = { "张三",20,111.1 };
//	FILE* pf = fopen("test.txt", "wb");  //二进制写入
//	if (NULL == pf) {
//		perror("fopen\n");
//		return 1;
//	}
//	//size_t fwrite ( const void * ptr, size_t size, size_t count, FILE * stream );
//	//从ptr指针里取count 个大小为size的数据到文件流里
//	fwrite(&s, sizeof(s), 1, pf);
//}

//int main() {
//	struct Stu s = { 0 };
//	FILE* pf = fopen("test.txt", "rb");  //二进制读取
//	if (NULL == pf) {
//		perror("fopen\n");
//		return 1;
//	}
//	//size_t fread ( void * ptr, size_t size, size_t count, FILE * stream )
//	//从文件流里读取count个大小为size的数据到ptr所指向的空间去
//	fread(&s,sizeof(s),1,pf);
//
//	printf("%s %d %f\n", s.name, s.age, s.height);
//	return 0;
//}

//int main() {
//	struct Stu s = { "张三",10,12.8f };
//	struct Stu tmp = { 0 };
//
//
//	char buf[40] = { 0 };
//	//结构体数据转换成字符串
//	sprintf(buf,"%s %d %f\n", s.name, s.age, s.height);
//
//	printf("%s", buf);
//
//	//将buf还原为结构体
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
//	//随机读文件
//	fseek(pf, 4, SEEK_SET);
//	int tmp = fgetc(pf);
//	printf("%c\n", tmp);
//	//获取当前偏移量
//	printf("%d\n",ftell(pf));
//
//	//rewind让pf回到起始位置
//	rewind(pf);
//	printf("%d\n", ftell(pf));
//
//	return 0;
//}

//int main() {
//	int a = 10000;
//	FILE* pf = fopen("test.txt", "wb");
//	fwrite(&a, 4, 1, pf);  //二进制的形式写到文件中
//
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}

//fgetc
//读取失败返回EOF
//而读取成功，会返回读到字符的ASCII码值

//fgets
//返回的是存放读到的数据str空间的起始地址
//读取失败，则返回NULL；

//fscanf读取成功，返回的是读到的元素个数
//否则不成功

//二进制文件例子
enum { SIZE = 5 };
int main(void) {
    double a[SIZE] = { 1.,2.,3.,4.,5. };
    FILE* fp = fopen("test.bin", "wb"); // 必须用二进制模式
    fwrite(a, sizeof * a, SIZE, fp); // 写 double 的数组
    fclose(fp);
    double b[SIZE];
    fp = fopen("test.bin", "rb");
    size_t ret_code = fread(b, sizeof * b, SIZE, fp); // 读 double 的数组
    if (ret_code == SIZE) {
        puts("Array read successfully, contents: ");
        for (int n = 0; n < SIZE; ++n) printf("%f ", b[n]);
        putchar('\n');
    }
    else { // error handling
        if (feof(fp))
            printf("Error reading test.bin: unexpected end of file\n");
        else if (ferror(fp)) {
            perror("Error reading test.bin");
        }
    }
    fclose(fp);
}

//#include <Windows.h>
//int main() {
//	FILE* pf = fopen("test.txt", "w");
//	fputs("abcdef", pf);//先将代码放在输出缓冲区
//
//	printf("睡眠10秒-已经写数据了，打开test.txt文件，发现文件没有内容\n");
//	Sleep(10000);  //毫秒——>10s
//	printf("刷新缓冲区\n");
//	fflush(pf);//刷新缓冲区时，才将输出缓冲区的数据写到文件（磁盘）
//	//注：fflush 在高版本的VS上不能使用了
//
//	printf("再睡眠10秒-此时，再次打开test.txt文件，文件有内容了\n");
//	Sleep(10000);
//	fclose(pf);
//	//注：fclose在关闭文件的时候，也会刷新缓冲区
//	pf = NULL;
//	return 0;
//}