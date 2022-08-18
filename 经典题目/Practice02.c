# define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

//递归和非递归分别实现求n的阶乘（不考虑溢出的问题）
/*非递归实现*/
//int main() {
//	int ret = 1;
//	int n = 4;
//	for (int i = 1; i <= n; i++)
//	{
//		ret *= i;
//	}
//	printf("%d\n", ret);
//}

/*递归实现*/
//int factorial(int n) {
//	if (n == 1)
//		return 1;
//	return n*factorial(n - 1);
//}
//int main() {
//	int n = 5;
//	printf("%d\n", factorial(n));
//	return 0;
//}

//递归方式实现打印一个整数的每一位
//void print(int n) {
//	if (n < 10)
//		printf("%d ", n);
//	else
//	{
//		print(n / 10);
//		printf("%d ", n % 10);
//		
//	}
//}
//int main() {
//	int n = 12345;
//	print(n);
//	return;
//}

//编写一个函数实现n的k次方，使用递归实现。
//int power(int n, int k) {
//	if (k == 0)
//		return n;
//	return n * power(n,k-1);
//}
//int main() {
//	int n = 2;
//	printf("%d\n", power(n, 7));
//	return 0;
//}
//上述代码只考虑了k为正整数的情况，完善k为负次方的情况
//double Pow(int n, int k) {
//	if (k == 0)
//		return 1;
//	else if (k > 0)
//		return n * Pow(n, k - 1);
//	else
//		return 1.0 / Pow(n, -k);
//}
//int main() {
//	int n, k;
//	scanf("%d %d", &n, &k);
//	double ret = Pow(n, k);
//	printf("%lf\n", ret);
//	return 0;
//}

//写一个递归函数DigitSum(n)，输入一个非负整数，返回组成它的数字之和
//例如，调用DigitSum(1729)，则应该返回1 + 7 + 2 + 9，它的和是19
//输入：1729，输出：19
// 
//int DigitSum(int n) {
//	if (n < 10)
//		return n;
//	return n % 10 + DigitSum(n / 10);
//}
//int main() {
//	int n = 582946;
//	printf("%d\n", DigitSum(n));
//}

//编写一个函数 reverse_string(char * string)（递归实现）
//实现：将参数字符串中的字符反向排列，不是逆序打印。
//#include <string.h>
//
////用递归实现
//void Swap(char* a, char* b) {
//	char tmp = *a;
//	*a = *b;
//	*b = tmp;
//}
//void reverse(char str[], int start, int back, int len)
//{
//	if (len == 0 || len == 1)       //长度为0
//	{
//		return;
//	}
//	else
//	{
//		Swap(str + start, str + back);
//		reverse(str, ++start, --back, len - 2);
//		return;
//	}
//}
//int main()
//{
//	char str[] = "afhjsd";
//	reverse(str, 0, (int)strlen(str) - 1, (int)strlen(str));
//	printf("%s\n", str);
//	return 0;
//}
//另一种实现方式(非递归)
//void reverse_string(char* string) {
//	int len = strlen(string);
//	char* left = string;
//	char* right = string + len - 1;
//
//	while (left < right)
//	{
//		int tmp = *left;
//		*left = *right;
//		*right = tmp;
//		left++;
//		right--;
//	}
//}

//（递归实现）
//#include <string.h>
//void reverse_string(char* string) {
//	int len = strlen(string);
//	if (len <= 1)  //到中间时字符串长度是0或者1就不用交换
//		return;
//	char tmp = *string;
//	*string = *(string + len - 1);
//	*(string + len - 1) = '\0';
//	reverse_string(string + 1);
//	*(string + len - 1) = tmp;
//}
//int main() {
//	char arr[] = "fwbbnr";
//	reverse_string(arr);
//	printf("%s\n", arr);
//	return 0;
//}


//递归和非递归分别实现求第n个斐波那契数
//int fib(int n)
//{
//    if (n <= 2)
//        return 1;
//    else
//        return fib(n - 1) + fib(n - 2);
//}
//
//int main() {
//    int n = 0;
//    scanf("%d", &n);
//    //递归
//    printf("%d\n", fib(n));
//    //非递归
//    int arr[50] = { 0 };
//    for (int i = 0; i < 50; i++)
//    {
//        if (i <= 1)
//        {
//            arr[i] = 1;
//        }
//        else
//        {
//            arr[i] = arr[i - 1] + arr[i - 2];
//        }
//    }
//    printf("%d\n", arr[n-1]);
//}

//递归和非递归分别实现strlen
//#include <string.h>
////非递归实现
//int Strlen(char* str) {
//	int count = 0;
//	while (*str != '\0')
//	{
//		count++;
//		str++;
//	}
//	return count;
//}
////递归实现
//int Strlen1(char* str) {
//	if (*str == '\0')
//		return 0;
//	return	1 + Strlen1(str + 1);
//}
//int main() {
//	char arr[] = "dadadwd  2";
//	//int ret = strlen(arr);
//	//模拟实现strlen
//	int ret = Strlen1(arr);
//	printf("%d\n", ret);
//	return 0;
//}

//实现一个对整形数组的冒泡排序
//void bubbleSort(int arr[], int sz) {
//	//int sz = sizeof(arr) / sizeof(arr[0]);
//	for (int i = 0; i < sz - 1; i++)
//	{
//		int j = 0;
//		for (j = 0; j < sz - i - 1; j++)
//		{
//			if (arr[j] > arr[j+1]) {
//				int tmp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = tmp;
//			}
//		}
//	}
//}
//int main() {
//	int arr[10] = { 10,9,8,7,6,5,4,3,2,1 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	bubbleSort(arr, sz);
//	for (int i = 0; i < 10; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}

//将数组A中的内容和数组B中的内容进行交换。（数组一样大）
//void exchange(int arr1[], int arr2[], int sz) {
//	for (int i = 0; i < sz; i++)
//	{
//		int tmp = 0;
//		tmp = arr1[i];
//		arr1[i] = arr2[i];
//		arr2[i] = tmp;
//	}
//}
//int main() {
//	int arr1[] = { 9,5,6,2 };
//	int arr2[] = { 4,4,3,3 };
//	int sz = sizeof(arr1) / sizeof(arr1[0]);
//	printf("交换前两个数组元素为：\n");
//	for (int i = 0; i < sz; i++)
//		printf("%d ", arr1[i]);
//	printf("\n");
//	for (int i = 0; i < sz; i++)
//		printf("%d ", arr2[i]);
//	
//	exchange(arr1, arr2, sz);
//	printf("\n交换后两个数组元素为：\n");
//	for (int i = 0; i < sz; i++)
//		printf("%d ", arr1[i]);
//	printf("\n");
//	for (int i = 0; i < sz; i++)
//		printf("%d ", arr2[i]);
//}


//创建一个整形数组，完成对数组的操作
//
//实现函数init() 初始化数组为全0
//实现print()  打印数组的每个元素
//实现reverse()  函数完成数组元素的逆置。
//要求：自己设计以上函数的参数，返回值。
//void init(int* arr, int n) {
//	for (int i = 0; i < n; i++)
//	{
//		*(arr + i) = (int)0;
//	}
//}
//void print(int arr[], int n) {
//	for (int i = 0; i < n; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	printf("\n");
//}
//void reverse(int* arr, int n) {
//	int left = 0;
//	int right = n - 1;
//	while (left < right)
//	{
//		int tmp = arr[left];	
//		arr[left] = arr[right];
//		arr[right] = tmp;
//
//		left++;
//		right--;
//	}
//}
//int main() {
//	int arr[10];
//	int n = 10;
//	init(arr, n);
//	print(arr, n);
//
//	for (int i = 0; i < n; i++)
//	{
//		arr[i] = i;
//	}
//
//	reverse(arr, n);
//	printf("逆置后：\n");
//	print(arr, n);
//	
//	return 0;
//}

//不允许创建临时变量，交换两个整数的内容
//int main() {
//	int a, b;
//	scanf("%d %d", &a, &b);
//
//	a = a + b;
//	b = a - b;
//	a = a - b;
//	printf("a = %d b = %d\n", a, b);
//	return 0;
//}

//1.不创建临时变量，实现两个数的交换
//先考虑一种简单的方法
//int main() {
//	int a = 5;
//	int b = 8;
//
//	a = a + b;
//	b = a - b;
//	a = a - b;
//	printf("a = %d b = %d\n", a, b);
//	return 0;
//	//但是这样的做法有一个问题,就是如果a+b的值超过了int数值范围将不再适用
//} 
//考虑异或特性
//int main() {
//	int a = 5;
//	int b = 8;
//	//原理如下
//	//a^a=0
//	//0^a=a
//	a = a ^ b;  
//	b = a ^ b;  //等价于 b = a ^ b ^ b  可得到a
//	a = a ^ b;  //相当于a^a^b
//	printf("a = %d b = %d\n", a, b);
//	return 0;
//}

//写一个函数返回参数二进制中 1 的个数。
//比如： 15    0000 1111    4 个 1
//int main() {
//	int num = 1;
//	int count = 0;	
//	for (int i = 1; i <= sizeof(num)*8; i++)
//	{
//		if (num & 1 == 1)
//			count++;
//		num = num >> 1;
//	}
//	printf("%d\n", count);
//}

//输入两个整数，求两个整数二进制格式有多少个位不同
//int main() {
//    int a, b;
//    int count = 0;
//    scanf("%d %d", &a, &b);
//    for (int i = 1; i <= 32; i++) {
//        if (((a & 1) ^ (b & 1)) == 1)  //相异为1
//            count++;
//        a >>= 1;
//        b >>= 1;
//    }
//    printf("%d\n", count);
//    return 0;
//}
//思考获取二进制位中1的个数，可以让两个数异或^，得到的数再不断&1，得到其二进制位中1的个数，就是两个数不同的位数有多少个

//获取一个整数二进制序列中所有的偶数位和奇数位，分别打印出二进制序列
//int main() {
//	int num = 10;
//	//00000000 00000000 00000000 00001010
//	int i = 32;
//	while (i>0)
//	{
//		printf("%d ",(num >> i) & 1);  //奇数位
//		i -= 2;
//	}
//	printf("\n");
//	i = 31;
//	while (i > 0)
//	{
//		printf("%d ", (num >> i) & 1);  //偶数位
//		i -= 2;
//	}
//}


//输出一行，为正整数n表示为六进制的结果
int main() {
    int n = 0;
    scanf("%d", &n);
    //转化位六进制
    int arr[10] = { 0 };
    int i = 0;
    while (n)
    {
        arr[i] = n % 6;
        n /= 6;
        i++;
    }  //放入时是倒着放入，打印时要正着打印
    for (--i; i >= 0; i--)
    {
        printf("%d", arr[i]);
    }
}


//有一个整数序列（可能有重复的整数），现删除指定的某一个整数，输出删除指定数字之后的序列，序列中未被删除数字的前后位置没有发生改变。
//int main() {
//    int n = 0;
//
//
//    scanf("%d", &n);
//    int arr[n];
//    for (int i = 0; i < n; i++) {
//        scanf("%d", &arr[i]);
//    }
//    int num = 0;
//    scanf("%d", &num);
//
//    int j = 0;
//    for (int i = 0; i < n; i++) {
//        if (arr[i] != num) {
//            arr[j] = arr[i];
//            j++;
//        }
//    }
//    for (int i = 0; i < j; i++) {
//        printf("%d ", arr[i]);
//    }
//
//}

//最大公约数和最小公倍数的和
//int main() {
//    int a, b;
//    int c = 1;
//    scanf("%d %d", &a, &b);
//    int a1 = a;
//    int b1 = b;
//    while (1) {
//        if (a % b != 0)
//        {
//            int c = a % b;
//            a = b;
//            b = c;
//        }
//        else
//            break;
//    }
//    printf("%d\n", b);  //a，b的最大公约数
//    //得到最小公倍数
//    //两个数的乘积等于这两个数的最大公约数与最小公倍数的积
//    int min = a1 * b1 / b;
//    printf("%d\n", min);
//}