# define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

//�ݹ�ͷǵݹ�ֱ�ʵ����n�Ľ׳ˣ���������������⣩
/*�ǵݹ�ʵ��*/
//int main() {
//	int ret = 1;
//	int n = 4;
//	for (int i = 1; i <= n; i++)
//	{
//		ret *= i;
//	}
//	printf("%d\n", ret);
//}

/*�ݹ�ʵ��*/
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

//�ݹ鷽ʽʵ�ִ�ӡһ��������ÿһλ
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

//��дһ������ʵ��n��k�η���ʹ�õݹ�ʵ�֡�
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
//��������ֻ������kΪ�����������������kΪ���η������
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

//дһ���ݹ麯��DigitSum(n)������һ���Ǹ����������������������֮��
//���磬����DigitSum(1729)����Ӧ�÷���1 + 7 + 2 + 9�����ĺ���19
//���룺1729�������19
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

//��дһ������ reverse_string(char * string)���ݹ�ʵ�֣�
//ʵ�֣��������ַ����е��ַ��������У����������ӡ��
//#include <string.h>
//
////�õݹ�ʵ��
//void Swap(char* a, char* b) {
//	char tmp = *a;
//	*a = *b;
//	*b = tmp;
//}
//void reverse(char str[], int start, int back, int len)
//{
//	if (len == 0 || len == 1)       //����Ϊ0
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
//��һ��ʵ�ַ�ʽ(�ǵݹ�)
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

//���ݹ�ʵ�֣�
//#include <string.h>
//void reverse_string(char* string) {
//	int len = strlen(string);
//	if (len <= 1)  //���м�ʱ�ַ���������0����1�Ͳ��ý���
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


//�ݹ�ͷǵݹ�ֱ�ʵ�����n��쳲�������
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
//    //�ݹ�
//    printf("%d\n", fib(n));
//    //�ǵݹ�
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

//�ݹ�ͷǵݹ�ֱ�ʵ��strlen
//#include <string.h>
////�ǵݹ�ʵ��
//int Strlen(char* str) {
//	int count = 0;
//	while (*str != '\0')
//	{
//		count++;
//		str++;
//	}
//	return count;
//}
////�ݹ�ʵ��
//int Strlen1(char* str) {
//	if (*str == '\0')
//		return 0;
//	return	1 + Strlen1(str + 1);
//}
//int main() {
//	char arr[] = "dadadwd  2";
//	//int ret = strlen(arr);
//	//ģ��ʵ��strlen
//	int ret = Strlen1(arr);
//	printf("%d\n", ret);
//	return 0;
//}

//ʵ��һ�������������ð������
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

//������A�е����ݺ�����B�е����ݽ��н�����������һ����
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
//	printf("����ǰ��������Ԫ��Ϊ��\n");
//	for (int i = 0; i < sz; i++)
//		printf("%d ", arr1[i]);
//	printf("\n");
//	for (int i = 0; i < sz; i++)
//		printf("%d ", arr2[i]);
//	
//	exchange(arr1, arr2, sz);
//	printf("\n��������������Ԫ��Ϊ��\n");
//	for (int i = 0; i < sz; i++)
//		printf("%d ", arr1[i]);
//	printf("\n");
//	for (int i = 0; i < sz; i++)
//		printf("%d ", arr2[i]);
//}


//����һ���������飬��ɶ�����Ĳ���
//
//ʵ�ֺ���init() ��ʼ������Ϊȫ0
//ʵ��print()  ��ӡ�����ÿ��Ԫ��
//ʵ��reverse()  �����������Ԫ�ص����á�
//Ҫ���Լ�������Ϻ����Ĳ���������ֵ��
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
//	printf("���ú�\n");
//	print(arr, n);
//	
//	return 0;
//}

//����������ʱ������������������������
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

//1.��������ʱ������ʵ���������Ľ���
//�ȿ���һ�ּ򵥵ķ���
//int main() {
//	int a = 5;
//	int b = 8;
//
//	a = a + b;
//	b = a - b;
//	a = a - b;
//	printf("a = %d b = %d\n", a, b);
//	return 0;
//	//����������������һ������,�������a+b��ֵ������int��ֵ��Χ����������
//} 
//�����������
//int main() {
//	int a = 5;
//	int b = 8;
//	//ԭ������
//	//a^a=0
//	//0^a=a
//	a = a ^ b;  
//	b = a ^ b;  //�ȼ��� b = a ^ b ^ b  �ɵõ�a
//	a = a ^ b;  //�൱��a^a^b
//	printf("a = %d b = %d\n", a, b);
//	return 0;
//}

//дһ���������ز����������� 1 �ĸ�����
//���磺 15    0000 1111    4 �� 1
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

//�����������������������������Ƹ�ʽ�ж��ٸ�λ��ͬ
//int main() {
//    int a, b;
//    int count = 0;
//    scanf("%d %d", &a, &b);
//    for (int i = 1; i <= 32; i++) {
//        if (((a & 1) ^ (b & 1)) == 1)  //����Ϊ1
//            count++;
//        a >>= 1;
//        b >>= 1;
//    }
//    printf("%d\n", count);
//    return 0;
//}
//˼����ȡ������λ��1�ĸ��������������������^���õ������ٲ���&1���õ��������λ��1�ĸ�����������������ͬ��λ���ж��ٸ�

//��ȡһ���������������������е�ż��λ������λ���ֱ��ӡ������������
//int main() {
//	int num = 10;
//	//00000000 00000000 00000000 00001010
//	int i = 32;
//	while (i>0)
//	{
//		printf("%d ",(num >> i) & 1);  //����λ
//		i -= 2;
//	}
//	printf("\n");
//	i = 31;
//	while (i > 0)
//	{
//		printf("%d ", (num >> i) & 1);  //ż��λ
//		i -= 2;
//	}
//}


//���һ�У�Ϊ������n��ʾΪ�����ƵĽ��
int main() {
    int n = 0;
    scanf("%d", &n);
    //ת��λ������
    int arr[10] = { 0 };
    int i = 0;
    while (n)
    {
        arr[i] = n % 6;
        n /= 6;
        i++;
    }  //����ʱ�ǵ��ŷ��룬��ӡʱҪ���Ŵ�ӡ
    for (--i; i >= 0; i--)
    {
        printf("%d", arr[i]);
    }
}


//��һ���������У��������ظ�������������ɾ��ָ����ĳһ�����������ɾ��ָ������֮������У�������δ��ɾ�����ֵ�ǰ��λ��û�з����ı䡣
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

//���Լ������С�������ĺ�
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
//    printf("%d\n", b);  //a��b�����Լ��
//    //�õ���С������
//    //�������ĳ˻������������������Լ������С�������Ļ�
//    int min = a1 * b1 / b;
//    printf("%d\n", min);
//}