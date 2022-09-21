# define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//枚举类型

enum Day//星期
{
	Mon,
	Tues,
	Wed,
	Thur,
	Fri,
	Sat,
	Sun
};
enum Sex//性别
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
//	//创建变量
//	enum Color co = Bule;  //即co表示蓝色
//
//	printf("%d\n", Red);
//	printf("%d\n", Bule);
//	printf("%d\n", Green);
//	printf("%d\n", sizeof(co));
//	return 0;
//}


//int main() {
//	//联合变量的定义
//	union Un un;
//	//计算变量的大小
//	printf("%p\n", &un);
//	printf("%p\n", &(un.c));
//	printf("%p\n", &(un.i));
//	
//	printf("%d\n", sizeof(un));
//	printf("%d\n", sizeof(union Un));
//}

//改进大小端判断（考虑联合体）
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
//		printf("小端！\n");
//	else
//		printf("大端！\n");
//	return 0;
//}

//联合体大小的计算

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
//下面输出的结果是什么？
int main() {
	printf("%d\n", sizeof(union Un1));
	printf("%d\n", sizeof(union Un2));  //当最大成员大小不是最大对齐数的整数倍的时候，就要对齐到最大对齐数的整数倍。
	return 0;
}
