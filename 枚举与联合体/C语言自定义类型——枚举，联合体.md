

@[TOC](目录)

---

# 📝 枚举
枚举顾名思义就是一一列举（一 一举例出来）

把可能的取值列举
比如说：

	一周的星期一到星期日是有限的7天，可以一 一列举
	
	性别有：男、女、保密，也可以一一列举

	月份有12个月，也可以一一列举
	等等....

## 🌟 枚举类型定义

 { } 中的内容是枚举类型的可能取值，也叫 `枚举常量`
 
```c
//枚举类型
enum Color {
	Red,
	Green,
	Bule
};
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
```

```c
int main() {
	//创建变量
	enum Color co = Bule;  //即co表示蓝色

	printf("%d\n", Red);
	printf("%d\n", Bule);
	printf("%d\n", Green);
	return 0;
}
```
![在这里插入图片描述](https://img-blog.csdnimg.cn/30730b4edd6b46e1b386e8f3a3c27a8d.png)
**结果表明这些每一个枚举可能取值都是常量，也称枚举常量，不能修改。但是这些可能取值都是有值的，默认从0开始，一次递增1，当然在定义的时候也可以赋初值来修改初始值。**

```c
Red = 5;
```

![在这里插入图片描述](https://img-blog.csdnimg.cn/0663bca7686f4853bfcd616c6a5b9614.png)

## 🌟 如何使用？

>为什么使用枚举？

我们可以使用 #define 定义常量，为什么非要使用枚举？


**枚举的优点**：

1. 增加代码的可读性和可维护性
2. 和#define定义的标识符比较枚举有类型检查，更加严谨
3. 防止了命名污染（封装）
4. 便于调试
5. 使用方便，一次可以定义多个常量

```c
int main() {
	//创建变量
	enum Color co = Bule;  //即co表示蓝色

	printf("%d\n", Red);
	printf("%d\n", Bule);
	printf("%d\n", Green);
	printf("%d\n", sizeof(co));
	return 0;
}
```

![在这里插入图片描述](https://img-blog.csdnimg.cn/0e4770afb032429f915cfb0bddce8ddf.png)

这里得到其大小为4，因为枚举常量只是保存一个具体枚举常量值，而不是整个枚举类型。

---

```c
enum Color//颜色
{
 RED=1,
 GREEN=2,
 BLUE=4
};
enum Color clr = GREEN;//只能拿枚举常量给枚举变量赋值，才不会出现类型的差异。

clr = 5;  //这样赋值显然是会报错的！
//要尽量避免这样的写法
```

---

# 📝 联合（共用体）

联合也是一种特殊的自定义类型。

这种类型定义的变量也包含一系列的成员，特征是这些成员公用同一块空间（所以联合也叫共用体）。

---
## 🌟 定义联合体

```c
//联合类型的声明
union Un
{
 char c;
 int i;
};
//联合变量的定义
union Un un;
//计算变量的大小
printf("%d\n", sizeof(un));
```

![在这里插入图片描述](https://img-blog.csdnimg.cn/f80273b3e7ff4a8e92f85c61f4fc2923.png)

```c
int main() {
	//联合变量的定义
	union Un un;
	//计算变量的大小
	printf("%p\n", &un);
	printf("%p\n", &(un.c));
	printf("%p\n", &(un.i));
	
	printf("%d\n", sizeof(un));
	printf("%d\n", sizeof(union Un));
}
```

![在这里插入图片描述](https://img-blog.csdnimg.cn/d77319c120c6424fb9e3b6178d40bcfe.png)

上述例子表明联合的成员是共用同一块内存空间的，这样一个联合变量的大小，至少是最大成员的大

小（因为联合至少得有能力保存最大的那个成员)

---

## 🌟 考虑改进判断大小端实现

```c
//改进大小端判断（考虑联合体）
int check() {
	union un {
		int i;
		char c;
	}u;
	u.i = 1;
	return u.c;
}
int main() {
	int ret = check();
	if (ret == 1)
		printf("小端！\n");
	else
		printf("大端！\n");
	return 0;
}
```
![在这里插入图片描述](https://img-blog.csdnimg.cn/f673d7a699a64f14ba17cad5a0d88c1a.png)

---
## 🌟 联合大小的计算
- 联合的大小至少是最大成员的大小。

- 当最大成员大小不是最大对齐数的整数倍的时候，就要对齐到最大对齐数的整数倍。


比如：

```c
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

printf("%d\n", sizeof(union Un1));
printf("%d\n", sizeof(union Un2));
```
![在这里插入图片描述](https://img-blog.csdnimg.cn/8f518274ba2445bc9419ecd2b38450f1.png)

联合体公用同一块空间，short [7] 占用14个字节，那么最大对齐数为8；int 4个字节，最大对齐数8，

最终对齐数为4，取所有类型对齐数最大的，那么根据规则，就会占用4的整数倍个字节。

---


