# getchar()注意事项

```c
# define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//int main() {
//	int ch;  //getchar返回值为int，本质上EOF定义为常量-1，故ch为整形
//
//	//这样的方式可以在oj题目中达到多组输入的目的
//	while ((ch = getchar()) != EOF)  //EOF 定义为-1，是文件结束标志。当getchar函数读取失败时返回EOF（-1）
//	{
//		putchar(ch);  //打印ch字符
//	}
//}

int main() {
	//演示关于getchar的读取
	char password[10] = { 0 };  //初始化为空数组

	printf("请输入密码：");
	scanf("%s", password);  //读取用户输入存放到密码字符串中
	// 接下来让用户确认密码的输入
	printf("是否确认密码？(y/n)");
	int ch = getchar();
	if (ch == 'y') {
		printf("确认成功\n");
	}
	else
	{
		printf("确认失败\n");
	}
	return 0;
}
```



在这里，如果直接运行代码如下：

![image-20220805191438756](C:\Users\Judy\Desktop\image-20220805191438756.png)

这里程序并没有达到预期效果，显然并未让我们做出y/n的选择，直接输出。

**这是因为在输入字符串时，并不是一个一个输入，在我们按下键盘后字符会存放在*缓冲区*中，等待回车键入，而按下回车相当于键入\n，虽然不会存储到数组中，但仍在缓冲区1，接下来理解getchar会读取\n并保存，到条件判断语句时显然确认失败**



*将代码稍作修改，释放缓冲区的字符。*

```c
int main() {
	//演示关于getchar的读取
	char password[10] = { 0 };  //初始化为空数组

	printf("请输入密码：");
	scanf("%s", password);  //读取用户输入存放到密码字符串中
    //(scanf遇到空字符就不再读取)
    //清理\n
    getchar();
    
	// 接下来让用户确认密码的输入
	printf("是否确认密码？(y/n)");
	int ch = getchar();
	if (ch == 'y') {
		printf("确认成功\n");
	}
	else
	{
		printf("确认失败\n");
	}
	return 0;
}
```



但是只是用一个getchar()清理显然是不能满足实际情况的，scanf遇到空字符就不再读取，例如：

sfsf12 558 kkk这样的带有空格的字符串就无法满足后续读取。因此修改代码如下

```c
//getchar();  //并不恰当，只能清理一个
	int tmp = 0;
	while ((tmp = getchar()) != '\n') {}  //即知道读取到回车时就说明缓冲区已经清理完毕
```

