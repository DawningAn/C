# define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

#define MAX 1000
#define STR "��������������"
#define reg register          //Ϊ register����ؼ��֣�����һ����̵�����
#define do_forever for(;;)     //�ø�����ķ������滻һ��ʵ�֣���ѭ����
#define CASE break;case        //��дcase����ʱ���Զ��� breakд�ϡ�
// �������� stuff���������Էֳɼ���д���������һ���⣬ÿ�еĺ��涼��һ����б��(���з�)��
#define DEBUG_PRINT printf("file:%s\tline:%d\t \
                          date:%s\ttime:%s\n" ,\
							__FILE__,__LINE__ ,\
							__DATE__,__TIME__ )
//int main() {
//	printf("%s\n", __FILE__);   //���б����Դ�ļ�
//	printf("%d\n", __LINE__);   //�ļ���ǰ���к�
//	printf("%s\n", __DATE__);   //�ļ������������
//	printf("%s\n", __TIME__);   //�ļ��������ʱ��
//	//printf("%s\n", __STDC__);   //VS������δ����__STDC__ ,˵��Visual Studio��δ��ȫ��ѭANSI C
//	printf("%s\n", __func__);  //main
//	return 0;
//}

//int Max(int x, int y) {
//	return (x > y ? x : y);
//}
//�����ú궨��
//#define Max(x,y) (x>y?x:y)
//int main() {
//	int a = 10;
//	int b = 5;
//	int max = Max(a, b);
//	printf("%d\n", max);
//	return 0;
//}

//#define SQUARE(x) x*x
//#define Double(x) (x)+(x)
//int main() {
//	printf("%d\n", SQUARE(5));
//	printf("%d\n", SQUARE(5 + 1));  //��Ĳ�������ȫ�滻�ģ��൱�� 5 + 1 * 5 + 1  ���Ϊ11 
//
//	int a = 5;
//	printf("%d\n", (10 * Double(a)));  //�����൱�� 10 * (5) + (5)  ���Ϊ55
//	return 0;
//}

//#define Double(x) (x)+(x)
//#define Double(x) ((x)+(x))
//int main() {
//	int a = 5;
//	printf("%d\n", (10 * Double(a)));  //�����൱�� 10 * (5) + (5)  ���Ϊ55
//	return 0;
//}

//#define PRINT(FORMAT, VALUE) printf("the value of " #VALUE " is "FORMAT "\n", VALUE)
////����#���԰������Ĳ����滻Ϊ�ַ���Ƕ��
//
//int main() {
//	printf("hello world\n");
//	printf("hello ""world\n");  //��Ȼ��Ϊһ���ַ���(�����ַ��������Զ����ӵ��ص��)
//	int a = 100;
//	printf("The value a is %d\n", a);
//	int b = 20;
//	printf("The value b is %d\n", b);
//
//	//��ô�����ܷ�ͬһ�����ܵĴ�ӡ�����ϲ�
//	PRINT("%d", a);  //����ֻ�е��ַ�����Ϊ�������ʱ��ſ��԰��ַ��������ַ�����
//	/*�����е� #VALUE ��Ԥ����������Ϊ��
//		"VALUE" .*/
//	
//	return 0;
//}

//#define CAT(A,B) A##B
////��A��B��ϳ�һ������
//int main() {
//	int Windows11 = 2022;
//
//	printf("%d\n", CAT(Windows, 11));
//
//}

//���Ǻ�ĸ�����
//#define MAX(a, b) ( (a) > (b) ? (a) : (b) )
//int main() {
//	int x = 5;
//	int y = 8;
//	int z = MAX(x++, y++);
//	printf("x=%d y=%d z=%d\n", x, y, z);
//	//z = ((x++) > (y++) ? (x++) : (y++));  x = 6  y = 10  z = 9  
//}

//#define MAX(a, b) ((a)>(b)?(a):(b))
////��ͨ����Ӧ����ִ�м򵥵�����
//int Max(int a, int b) {
//	return ((a > b) ? a : b);
//}
//int main() {
//	int a = 5;
//	int b = 10;
//	int ret = Max(a, b);
//	printf("Max number = %d\n", ret);
//	return 0;
//}

//#define MALLOC(num, type) (type*)malloc(num * sizeof(type))
//int main() {
//	int* p = (int*)malloc(10 * sizeof(int));  //����10�����οռ�
//	//����Ҫ���벻ͬ���͵Ŀռ�ʱ
//	//Malloc(10, int);  //��Ȼ�����������Դ����ͣ����Ǻ�
//	MALLOC(10, int);  //��Ĳ������Գ������ͣ����Ǻ���������
//	return 0;
//}

//#undef NAME
//����ָ�������Ƴ�һ���궨��
//# define N 100
//int main() {
//	printf("%d\n",N);
//
//	#undef N
//	printf("%d\n", N);
//	return 0;
//}

//#define __DEBUG__
//int main() {
//	int i = 0;
//	int arr[10] = { 0 };
//	for (i = 0; i < 10; i++) {
//		arr[i] = i;
//#ifdef __DEBUG__
//			printf("%d\n", arr[i]);//Ϊ�˹۲������Ƿ�ֵ�ɹ��� 
//#endif //__DEBUG__
//	}
//	return 0;
//}

//��������
//int main() {
//	#if 1  //����Ϊ�棬�������
//		printf("���Ա���\n");
//	#endif
//	return 0;
//}

//���֧��������
//int main() {
//#if 3>2
//	printf("����\n");
//#elif 2>5
//	printf("2>5\n");
//#else
//	printf("��������\n");
//#endif
//
//	return 0;
//}

//�ж��Ƿ񱻶���
//#if defined(symbol)
//#ifdef symbol

//#if !defined(symbol)
//#ifndef symbol
int main() {
#if defined MAX
	printf("MAX �ѱ�����\n");
#endif

#ifdef MAX
	printf("MAX �ѱ�����\n");
#endif
//������ȫ�ȼ�

//��������Ҳ����ȫ�ȼ�
#if !defined M
	printf("M δ����\n");
#endif

#ifndef M
	printf("M δ����\n");
#endif

	return 0;
}