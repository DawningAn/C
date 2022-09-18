# define _CRT_SECURE_NO_WARNINGS 1

# include <stdio.h>
//杨氏矩阵
//有一个数字矩阵，矩阵的每行从左到右是递增的，矩阵从上到下是递增的，请编写程序在这样的矩阵中查找某个数字是否存在。

//若要返回数字的横纵坐标，那么可以设计一个结构体，包含x，y。那么也可以考虑指针
//void find_yang(int arr[3][3], int x, int *px, int *py) {
//	//定位到右上角
//	int i = 0;
//	int j = *py - 1;
//	int flag = 0;  //找不到的话0不变
//	while (i<=*px-1&&j>=0) {
//		if (x > arr[i][j])
//			i++;  //去掉行
//		else if (x < arr[i][j])
//			j--;
//		else
//		{
//			//找到了返回下标
//			flag = 1;
//			*px = i;
//			*py = j;
//			break;
//		}
//	}
//	if (flag == 0) {
//		//printf("找不到\n");
//		*px = -1;
//		*py = -1;
//	}
//}
//int main() {
//	//1 2 3 
//	//2 3 4
//	//3 4 5
//	int arr[3][3] = { 1,2,3,4,5,6,7,8,9 };
//	int n = 0;
//	scanf("%d", &n);
//	//寻找x
//	//可以从右上角元素开始查找，则一次可以去掉一行
//	//去掉一列的话也同理
//	//通过要寻找的元素与右上角元素比较，可以去掉一行或一列
//	int x = 3;
//	int y = 3;
//	find_yang(arr, n, &x, &y);
//	if (x == -1) {
//		printf("找不到\n");
//	}
//	else {
//		printf("该数字坐标为[%d, %d]\n", x, y);
//	}
//	return 0;
//}

//实现一个函数，可以左旋字符串中的k个字符
//ABCD左旋一个字符得到BCDA
//
//ABCD左旋两个字符得到CDAB
#include <string.h>
void leftMove(char arr[], int k) {
	//循环k次把k个字符旋过去
	
	int i = k;
	int len = (int)strlen(arr);
	k %= len;  //细节处防止无效旋转长度超过字符串长度
	for (i = 0; i < k; i++)
	{
		char tmp = arr[0];
		//把后面的字符向前挪动一位
		int j = 0;
		for (j = 0; j < len - 1; j++) {
			arr[j] = arr[j + 1];
		}
		arr[len - 1] = tmp;  //第一个元素放到最后的空位
	}
}

//考虑改进函数，逆序方法
//前k个逆序，后len - k个逆序，再整体逆序
#include <assert.h>
void reverse(char* left, char* right) {
	assert(left && right);  //断言两个指针非空
	while (left < right) {
		char tmp = *left;
		*left = *right;
		*right = tmp;
		left++;
		right--;
	}
}
void Left_move(char arr[], int k) {
	int len = (int)strlen(arr);
	reverse(arr, arr + k - 1);
	reverse(arr + k, arr + len - 1);
	reverse(arr, arr + len - 1);
}
//int main() {
//	char arr[] = "abcde";
//	int k = 2;  //左旋三个字符
//	Left_move(arr, 3);
//	printf("%s\n", arr);
//	return 0;
//}



//写一个函数，判断一个字符串是否为另外一个字符串旋转之后的字符串。
//例如：给定s1 = AABCD和s2 = BCDAA，返回1
//
//给定s1 = abcd和s2 = ACBD，返回0.
//
//AABCD左旋一个字符得到ABCDA
//AABCD左旋两个字符得到BCDAA
//AABCD右旋一个字符得到DAABC
int is_left_moveString(char arr1[], char arr2[]) {
	int len = (int)strlen(arr1);
	//每旋转一次就和arr2比较
	for (int i = 0; i < len; i++) {
			//相等，返回1
			char tmp = arr1[0];
			for (int j = 0; j < len - 1; j++) {
				arr1[j] = arr1[j + 1];
			}
			arr1[len - 1] = tmp;
			if (strcmp(arr1, arr2) == 0) {
				return 1;
			}
	}
	return 0;
}
	
//int main() {
//	char arr1[] = "AABCD";
//	char arr2[] = "BCDAA";
//	int ret = is_left_moveString(arr1, arr2);
//	//利用左旋函数，来判断
//	if (ret == 1) {
//		printf("Yes\n");
//	}
//	else {
//		printf("No\n");
//	}
//}
//一个字符串后面追加自身，那么新的字符串就可以包含原字符串所有旋转的情况，再判断另一个字符串是不是新长串的子串
int up_judge_leftMove(char arr1[], char arr2[]) {
	int len1 = (int)strlen(arr1);
	int len2 = (int)strlen(arr2);
	if (len1 != len2) {
		//说明不可能是旋转得来的
		return 0;
	}

	strcat(arr1, arr1);
	char* ret = strstr(arr1, arr2);
	if (ret == NULL) {
		return 0;
	}
	else {
		return 1;
	}
}
int main() {
	char arr1[11] = "CHINA";
	char arr2[] = "NACHI";

	int ret = up_judge_leftMove(arr1, arr2);
	if (ret == 1) {
		printf("Yes\n");
	}
	else {
		printf("No\n");
	}
}

//模拟实现strlen
//size_t myStrlen(const char* str) {
//	//size_t strlen ( const char * str );
//	if (*str == '\0')
//		return 0;
//	else
//		return 1 + myStrlen(str + 1);
//}
//int main() {
//	char str1[] = "China";
//	printf("字符串长度为：%d\n",(int)myStrlen(str1));
//	return 0;
//}
	
//strcpy
//char*  myStrcpy(char* str1, const char* str2) {
//	char* ret = str1;
//	while (*str1++ = *str2++) {
//
//	}
//	return ret;
//}
//int main() {
//	char str1[] = "xxxxxxxxx";
//	char str2[] = "Qing";
//	myStrcpy(str1, str2);
//	printf("%s\n", str1);
//	return 0;
//}