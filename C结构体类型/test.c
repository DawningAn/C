# define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
//结构体数据类型
//匿名结构体类型（只能在声明时使用一次）
//struct
//{
//	int a;
//	char b;
//	float c;
//}x;  //全局变量指针
//
////匿名结构体类型
//struct
//{
//	int a;
//	char b;
//	float c;
//}* p;
//
//int main() {
//	//考虑这样的代码
//	p = &x;  //其实这是行不通的。编译器会把上面的两个声明当成完全不同的两个类型。所以是非法的。
//}

//typedef struct Node {
//	int data;  //数据域
//	struct Node* next;  //指针域
//
//}Node;  //重新命名为Node
//
//int main() {
//	Node n;  //创建节点
//	return 0;
//}

struct Stu {
	char name[10];
	int age;
};

//int main() {
//	//也可以不按顺序初始化，自己来按想要的初始化顺序来
//	struct Stu s = { .age = 18,.name = "张三" };
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
////结构体内存对齐
////offset这个东西，type，member。查看内存偏移量
//#include <stddef.h>
//int main() {
//	struct s1 ss1;
//	printf("%d ", offsetof(struct s1, c1));
//	printf("%d ", offsetof(struct s1, i));
//	printf("%d ", offsetof(struct s1, c2));   //偏移量分别为0 4 8
//	//c1 0 0 0 i i i i 0 0 0 c2   共占用12个字节
//	printf("\n");
//	//考虑s2
//	printf("%d ", offsetof(struct s2, c1));
//	printf("%d ", offsetof(struct s2, c2));
//	printf("%d ", offsetof(struct s2, i));    //偏移量分别为0 1 4
//	//c1 c2 0 0 i i i i  共占用8个字节
//	printf("\n");
//
//	printf("%d %d\n", sizeof(struct s1), sizeof(struct s2));
//	return 0;
//}


#include <stdio.h>
#pragma pack(8)  //设置默认对齐数为8
struct S1
{
	char c1;
	int i;
	char c2;
};
#pragma pack()   //取消设置的默认对齐数，还原为默认
#pragma pack(1)  //设置默认对齐数为1
struct S2
{
	char c1;
	int i;
	char c2;
};
#pragma pack()  //取消设置的默认对齐数，还原为默认
int main()
{
	//输出的结果是什么？
	printf("%d\n", sizeof(struct S1));
	printf("%d\n", sizeof(struct S2));
	return 0;
}
//  结构在对齐方式不合适的时候，我么可以自己更改默认对齐数。