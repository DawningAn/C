# define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//int main() {
//	int num1, num2;
//	scanf("%d %d", &num1, &num2);
//	if (num1 > num2) {
//		printf("%d", num1);
//	}
//	else {
//		printf("%d", num2);
//	}
//	return 0;
//}

//打印3的倍数
//int main() {
//	for (int i = 1; i <= 100; i++) {
//		if (i % 3 == 0) {
//			printf("%d\n", i);
//		}
//	}
//	return 0;
//}

//	写代码将三个整数数按从大到小输出。
//例如：5 8 6
//输入：2 3 1
//输出：3 2 1
//int main() {
//	int a, b, c;
//	scanf("%d %d %d", &a, &b, &c);
//	int max;
//	int min;
//	int mid;
//	if (a > b) {
//		if (a > c) {
//			max = a;
//			if (b > c) {
//				mid = b;
//				min = c;
//			}
//			else
//			{
//				min = b;
//				mid = c;
//			}
//		}
//		else{
//			max = c;
//			min = b;
//			mid = a;
//		}
//	}
//	else
//	{
//		if (a < c)
//		{
//			min = a;
//			if (b > c) {
//				max = b;
//				mid = c;
//			}
//			else
//			{
//				mid = b;
//				max = c;
//			}
//		}
//		else
//		{
//			max = b;
//			mid = a;
//			min = c;
//		}
//	}
//	printf("%d %d %d\n", max, mid, min);
//	return 0;
//}

//打印素数
//int main() {
//	for (int i = 100; i < 201; i++)
//	{
//		int flag = 1;
//		int tmp = 2;
//		while (tmp < i / 2)
//		{
//			if (i % tmp == 0)
//			{
//				flag = 0;  //表明当前i不是素数
//			}
//			tmp++;
//		}
//		if (flag)
//		{
//			printf("%d\n", i);
//		}
//	}
//}

//函数判断素数
//void PrimeNumber(int num) {
//	int flag = 1;
//	int tmp = 2;
//	while (tmp < num / 2)
//	{
//		if (num % tmp == 0)
//		{
//			flag = 0;  //表明当前i不是素数
//		}
//		tmp++;
//	}
//	if (flag)
//	{
//		printf("%d是素数\n", num);
//	}
//	else
//	{
//		printf("%d不是素数\n", num);
//	}
//	
//}
//int main() {
//	for (int i = 100; i < 201; i++)
//	{
//		PrimeNumber(i);
//	}
//	return 0;
//}

//打印闰年
//int main() {
//	for (int year = 1000; year < 2001; year++) 
//	{
//		if ((year % 4 == 0 && year % 400 != 0) || (year % 400 == 0))
//		{
//			printf("%d\n", year);
//		}
//	}
//}

//函数判断闰年
//void leapYear(int year) {
//	if ((year % 4 == 0 && year % 400 != 0) || (year % 400 == 0))
//	{
//		printf("%d 年是闰年\n", year);
//	}
//	else
//	{
//		printf("%d 年不是闰年\n", year);
//	}
//}
//int main() {
//	int year;
//	scanf("%d", &year);
//	leapYear(year);
//	return 0;
//}

//给定两个数，求这两个数的最大公约数
//
//例如：
//输入：20 40
//输出：20
//int main() {
//	int a, b;
//	scanf("%d %d", &a, &b);
//	int shang, yu = 1;
//	if (a < b)
//	{
//		int tmp = 0;
//		tmp = a;
//		a = b;
//		b = tmp;
//	}
//	while (yu)
//	{
//		shang = a / b;
//		yu = a % b;
//		a = b;
//		b = yu;
//	}
//	printf("最大公约数为：%d\n", a);
//	return 0;
//}

//99乘法表
//int main() {
//
//	for (int i = 1; i <= 9; i++)
//	{
//		for (int j = 1; j <= i; j++)
//		{
//			printf("%d * %d = %d  ", j, i, i * j);
//		}
//		printf("\n");
//	}
//	return 0;
//}

//求10 个整数中最大值
//int main() {
//	int arr[10] = { 55,88,66,12,2,98,104,72,13,56 };
//	int max = 0;
//	for (int i = 0; i < 10; i++)
//	{
//		if (arr[i] >= max)
//		{
//			max = arr[i];
//		}
//	}
//	printf("%d\n", max);
//	return 0;
//}

//计算1 / 1 - 1 / 2 + 1 / 3 - 1 / 4 + 1 / 5 …… + 1 / 99 - 1 / 100 的值，打印出结果
//int main() {
//	float sum = 0.0;
//
//	for (int i = 1; i < 101; i++)
//	{
//		if (i % 2 == 0)
//		{
//			sum = sum - 1.0 / i;
//			continue;
//		}
//		sum += 1.0 / i;
//	}
//	printf("%f", sum);
//}

//编写程序数一下 1到 100 的所有整数中出现多少个数字9
//int main() {
//	int count = 0;
//	for (int i = 1; i < 101; i++)
//	{
//		if (i % 10 == 9  || i /10 == 9)
//		{
//			count++;
//		}
//	}
//	printf("%d", count);
//}

//猜数字游戏
//#include <stdlib.h>
//void menu() {
//	printf("------------------------------------------\n");
//	printf("-------------------1.PLAY------------------\n");
//	printf("-------------------0.EXIT------------------\n");
//	printf("------------------------------------------\n");
//}
//void game() {
//	int computer;
//	srand ((unsigned int)time(NULL));
//	int rand_num = rand();
//	printf("%d\n", rand_num);
//	computer = rand_num % 100 + 1;
//	//printf("%d\n", computer);
//	while (1)
//	{
//		int select;
//		printf("请输入你猜的数字：");
//		scanf("%d", &select);
//		if (select > computer) {
//			printf("猜大了\n");
//		}
//		if (select < computer)
//		{
//			printf("猜小了\n");
//		}
//		if (select == computer)
//		{
//			printf("猜中了！该数为：%d\n", computer);
//			break;
//		}
//	}
//}
//int main() {
//	int player;
//	while (1)
//	{
//		printf("请输入你的选择：");
//		scanf("%d", &player);
//		switch (player)
//		{
//		case 1:
//			game();
//			break;
//		case 0:
//			exit(0);
//		default:
//			printf("非法输入！\n");
//			break;
//		}
//	}
//	return 0;
//}

//写函数来实现任意的n*n乘法表
//void mult(int n) {
//	for (int i = 1; i <= n; i++)
//	{
//		for (int j = 1; j <= i; j++)
//		{
//			printf("%d * %d = %3d  ", j, i, i * j);
//		}
//		printf("\n");
//	}
//}
//int main() {
//	int n = 12;
//	mult(n);
//	return 0;
//}

//实现两个整数交换
//void Swap(int* x, int* y) {
//	int tmp = *x;
//	*x = *y;
//	*y = tmp;
//}
//int main() {
//	int a, b;
//	scanf("%d %d", &a, &b);
//	printf("交换前：a = %d,b = %d\n", a, b);
//	Swap(&a, &b);
//	printf("交换后：a = %d,b = %d\n", a, b);
//}

//
//#include<stdio.h>
//void fun()
//{
//	int a;
//	int b;
//	int c;
//	int d;
//	int e;
//	for (a = 1; a <= 5; a++)
//	{
//		for (b = 1; b <= 5; b++)
//		{
//			for (c = 1; c <= 5; c++)
//			{
//				for (d = 1; d <= 5; d++)
//				{
//					for (e = 1; e <= 5; e++)
//						if (((b == 2) + (a == 3) == 1) && ((b == 2) + (e == 4) == 1) && ((c == 1) + (d == 2) == 1) && ((c == 5) + (d == 3) == 1) && ((e == 4) + (a == 1) == 1) && (a * b * c * d * e == 120))
//							printf("a=%d b=%d c=%d d=%d e=%d", a, b, c, d, e);
//				}
//			}
//		}
//	}
//}
//int main()
//{
//	fun();
//	return 0;
//}

//在屏幕上打印杨辉三角。
//long Tri(int r, int c) //杨辉三角算法函数	   
//{
//    return (c == 1 || c == r) ? 1 : Tri(r - 1, c - 1) + Tri(r - 1, c);
//}
//int main()
//{
//    int i, j, n;
//    printf("请输入杨辉三角形的行数（1 ~ 20）：");
//    scanf("%d", &n);
//    for (i = 1; i <= n; i++)	// 输出n行
//    {
//        for (j = 0; j < n - i; j++)		//每行前面补空格，显示成等腰三角形	
//            printf("   ");
//        for (j = 1; j <= i; j++)
//            printf("%6d", Tri(i, j));	//计算并输出杨辉三角形	
//        printf("\n");
//    }
//    return 0;
//}

//杨辉三角
//int main() {
//	int data[9][9];
//	for (int i = 0; i < 9; i++)
//	{
//		for (int j = 0; j < 9; j++)
//			data[i][j] = 1;
//	}
//
//	//输出
//	for (int i = 2; i < 9; i++)
//	{
//		for (int j = 1; j < i; j++) {  //从第二列开始
//			data[i][j] = data[i - 1][j] + data[i - 1][j - 1];
//		}
//	}
//	for (int i = 0; i < 9; i++)
//	{
//
//		for (int j = 0; j <= i; j++)
//			printf("%5d", data[i][j]);
//		printf("\n");
//	}
//	return 0;
//}

//A说：不是我。
//B说：是C。
//C说：是D。
//D说：C在胡说
//已知3个人说了真话，1个人说的是假话。
//现在请根据这些信息，写一个程序来确定到底谁是凶手
//int main() {
//	int killer = 0;//定义凶手
//	for (killer = 'A'; killer <= 'D'; killer++) //遍历
//	{
//		if ((killer != 'A') + (killer == 'C') + (killer == 'D') + (killer != 'D') == 3)
//			//拿killer != 'A'举例子 如果条件成立返回1 
//			//那么上述四个条件相加如果等于3的话 即代表有三个人是真话  一个是假话
//		{
//			printf("killer is %c\n", killer);
//		}
//	}
//	return 0;
//}