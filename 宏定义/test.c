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
#define MAX(a, b) ( (a) > (b) ? (a) : (b) )
int main() {
	int x = 5;
	int y = 8;
	int z = MAX(x++, y++);
	printf("x=%d y=%d z=%d\n", x, y, z);
	//z = ((x++) > (y++) ? (x++) : (y++));  x = 6  y = 10  z = 9  
}
