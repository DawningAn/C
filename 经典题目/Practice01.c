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

//��ӡ3�ı���
//int main() {
//	for (int i = 1; i <= 100; i++) {
//		if (i % 3 == 0) {
//			printf("%d\n", i);
//		}
//	}
//	return 0;
//}

//	д���뽫�������������Ӵ�С�����
//���磺5 8 6
//���룺2 3 1
//�����3 2 1
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

//��ӡ����
//int main() {
//	for (int i = 100; i < 201; i++)
//	{
//		int flag = 1;
//		int tmp = 2;
//		while (tmp < i / 2)
//		{
//			if (i % tmp == 0)
//			{
//				flag = 0;  //������ǰi��������
//			}
//			tmp++;
//		}
//		if (flag)
//		{
//			printf("%d\n", i);
//		}
//	}
//}

//�����ж�����
//void PrimeNumber(int num) {
//	int flag = 1;
//	int tmp = 2;
//	while (tmp < num / 2)
//	{
//		if (num % tmp == 0)
//		{
//			flag = 0;  //������ǰi��������
//		}
//		tmp++;
//	}
//	if (flag)
//	{
//		printf("%d������\n", num);
//	}
//	else
//	{
//		printf("%d��������\n", num);
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

//��ӡ����
//int main() {
//	for (int year = 1000; year < 2001; year++) 
//	{
//		if ((year % 4 == 0 && year % 400 != 0) || (year % 400 == 0))
//		{
//			printf("%d\n", year);
//		}
//	}
//}

//�����ж�����
//void leapYear(int year) {
//	if ((year % 4 == 0 && year % 400 != 0) || (year % 400 == 0))
//	{
//		printf("%d ��������\n", year);
//	}
//	else
//	{
//		printf("%d �겻������\n", year);
//	}
//}
//int main() {
//	int year;
//	scanf("%d", &year);
//	leapYear(year);
//	return 0;
//}

//���������������������������Լ��
//
//���磺
//���룺20 40
//�����20
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
//	printf("���Լ��Ϊ��%d\n", a);
//	return 0;
//}

//99�˷���
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

//��10 �����������ֵ
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

//����1 / 1 - 1 / 2 + 1 / 3 - 1 / 4 + 1 / 5 ���� + 1 / 99 - 1 / 100 ��ֵ����ӡ�����
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

//��д������һ�� 1�� 100 �����������г��ֶ��ٸ�����9
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

//��������Ϸ
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
//		printf("��������µ����֣�");
//		scanf("%d", &select);
//		if (select > computer) {
//			printf("�´���\n");
//		}
//		if (select < computer)
//		{
//			printf("��С��\n");
//		}
//		if (select == computer)
//		{
//			printf("�����ˣ�����Ϊ��%d\n", computer);
//			break;
//		}
//	}
//}
//int main() {
//	int player;
//	while (1)
//	{
//		printf("���������ѡ��");
//		scanf("%d", &player);
//		switch (player)
//		{
//		case 1:
//			game();
//			break;
//		case 0:
//			exit(0);
//		default:
//			printf("�Ƿ����룡\n");
//			break;
//		}
//	}
//	return 0;
//}

//д������ʵ�������n*n�˷���
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

//ʵ��������������
//void Swap(int* x, int* y) {
//	int tmp = *x;
//	*x = *y;
//	*y = tmp;
//}
//int main() {
//	int a, b;
//	scanf("%d %d", &a, &b);
//	printf("����ǰ��a = %d,b = %d\n", a, b);
//	Swap(&a, &b);
//	printf("������a = %d,b = %d\n", a, b);
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

//����Ļ�ϴ�ӡ������ǡ�
//long Tri(int r, int c) //��������㷨����	   
//{
//    return (c == 1 || c == r) ? 1 : Tri(r - 1, c - 1) + Tri(r - 1, c);
//}
//int main()
//{
//    int i, j, n;
//    printf("��������������ε�������1 ~ 20����");
//    scanf("%d", &n);
//    for (i = 1; i <= n; i++)	// ���n��
//    {
//        for (j = 0; j < n - i; j++)		//ÿ��ǰ�油�ո���ʾ�ɵ���������	
//            printf("   ");
//        for (j = 1; j <= i; j++)
//            printf("%6d", Tri(i, j));	//���㲢������������	
//        printf("\n");
//    }
//    return 0;
//}

//�������
//int main() {
//	int data[9][9];
//	for (int i = 0; i < 9; i++)
//	{
//		for (int j = 0; j < 9; j++)
//			data[i][j] = 1;
//	}
//
//	//���
//	for (int i = 2; i < 9; i++)
//	{
//		for (int j = 1; j < i; j++) {  //�ӵڶ��п�ʼ
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

//A˵�������ҡ�
//B˵����C��
//C˵����D��
//D˵��C�ں�˵
//��֪3����˵���滰��1����˵���Ǽٻ���
//�����������Щ��Ϣ��дһ��������ȷ������˭������
//int main() {
//	int killer = 0;//��������
//	for (killer = 'A'; killer <= 'D'; killer++) //����
//	{
//		if ((killer != 'A') + (killer == 'C') + (killer == 'D') + (killer != 'D') == 3)
//			//��killer != 'A'������ ���������������1 
//			//��ô�����ĸ���������������3�Ļ� �����������������滰  һ���Ǽٻ�
//		{
//			printf("killer is %c\n", killer);
//		}
//	}
//	return 0;
//}