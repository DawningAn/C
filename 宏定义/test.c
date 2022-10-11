# define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

#define MAX 1000
#define STR "天若有情天亦老"
#define reg register          //为 register这个关键字，创建一个简短的名字
#define do_forever for(;;)     //用更形象的符号来替换一种实现（死循环）
#define CASE break;case        //在写case语句的时候自动把 break写上。
// 如果定义的 stuff过长，可以分成几行写，除了最后一行外，每行的后面都加一个反斜杠(续行符)。
#define DEBUG_PRINT printf("file:%s\tline:%d\t \
                          date:%s\ttime:%s\n" ,\
							__FILE__,__LINE__ ,\
							__DATE__,__TIME__ )

//int Max(int x, int y) {
//	return (x > y ? x : y);
//}
//若采用宏定义
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
//	printf("%d\n", SQUARE(5 + 1));  //宏的参数是完全替换的，相当于 5 + 1 * 5 + 1  结果为11 
//
//	int a = 5;
//	printf("%d\n", (10 * Double(a)));  //这里相当于 10 * (5) + (5)  结果为55
//	return 0;
//}

//#define Double(x) (x)+(x)
//#define Double(x) ((x)+(x))
//int main() {
//	int a = 5;
//	printf("%d\n", (10 * Double(a)));  //这里相当于 10 * (5) + (5)  结果为55
//	return 0;
//}

//#define PRINT(FORMAT, VALUE) printf("the value of " #VALUE " is "FORMAT "\n", VALUE)
////这里#可以把其后面的参数替换为字符串嵌入
//
//int main() {
//	printf("hello world\n");
//	printf("hello ""world\n");  //天然合为一个字符串(发现字符串是有自动连接的特点的)
//	int a = 100;
//	printf("The value a is %d\n", a);
//	int b = 20;
//	printf("The value b is %d\n", b);
//
//	//那么考虑能否将同一个功能的打印操作合并
//	PRINT("%d", a);  //这里只有当字符串作为宏参数的时候才可以把字符串放在字符串中
//	/*代码中的 #VALUE 会预处理器处理为：
//		"VALUE" .*/
//	
//	return 0;
//}

//#define CAT(A,B) A##B
////把A和B组合成一个符号
//int main() {
//	int Windows11 = 2022;
//
//	printf("%d\n", CAT(Windows, 11));
//
//}

//考虑宏的副作用
#define MAX(a, b) ( (a) > (b) ? (a) : (b) )
int main() {
	int x = 5;
	int y = 8;
	int z = MAX(x++, y++);
	printf("x=%d y=%d z=%d\n", x, y, z);
	//z = ((x++) > (y++) ? (x++) : (y++));  x = 6  y = 10  z = 9  
}
