# define _CRT_SECURE_NO_WARNINGS 1

# include <stdio.h>
//���Ͼ���
//��һ�����־��󣬾����ÿ�д������ǵ����ģ�������ϵ����ǵ����ģ����д�����������ľ����в���ĳ�������Ƿ���ڡ�

//��Ҫ�������ֵĺ������꣬��ô�������һ���ṹ�壬����x��y����ôҲ���Կ���ָ��
//void find_yang(int arr[3][3], int x, int *px, int *py) {
//	//��λ�����Ͻ�
//	int i = 0;
//	int j = *py - 1;
//	int flag = 0;  //�Ҳ����Ļ�0����
//	while (i<=*px-1&&j>=0) {
//		if (x > arr[i][j])
//			i++;  //ȥ����
//		else if (x < arr[i][j])
//			j--;
//		else
//		{
//			//�ҵ��˷����±�
//			flag = 1;
//			*px = i;
//			*py = j;
//			break;
//		}
//	}
//	if (flag == 0) {
//		//printf("�Ҳ���\n");
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
//	//Ѱ��x
//	//���Դ����Ͻ�Ԫ�ؿ�ʼ���ң���һ�ο���ȥ��һ��
//	//ȥ��һ�еĻ�Ҳͬ��
//	//ͨ��ҪѰ�ҵ�Ԫ�������Ͻ�Ԫ�رȽϣ�����ȥ��һ�л�һ��
//	int x = 3;
//	int y = 3;
//	find_yang(arr, n, &x, &y);
//	if (x == -1) {
//		printf("�Ҳ���\n");
//	}
//	else {
//		printf("����������Ϊ[%d, %d]\n", x, y);
//	}
//	return 0;
//}

//ʵ��һ�����������������ַ����е�k���ַ�
//ABCD����һ���ַ��õ�BCDA
//
//ABCD���������ַ��õ�CDAB
#include <string.h>
void leftMove(char arr[], int k) {
	//ѭ��k�ΰ�k���ַ�����ȥ
	
	int i = k;
	int len = (int)strlen(arr);
	k %= len;  //ϸ�ڴ���ֹ��Ч��ת���ȳ����ַ�������
	for (i = 0; i < k; i++)
	{
		char tmp = arr[0];
		//�Ѻ�����ַ���ǰŲ��һλ
		int j = 0;
		for (j = 0; j < len - 1; j++) {
			arr[j] = arr[j + 1];
		}
		arr[len - 1] = tmp;  //��һ��Ԫ�طŵ����Ŀ�λ
	}
}

//���ǸĽ����������򷽷�
//ǰk�����򣬺�len - k����������������
#include <assert.h>
void reverse(char* left, char* right) {
	assert(left && right);  //��������ָ��ǿ�
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
//	int k = 2;  //���������ַ�
//	Left_move(arr, 3);
//	printf("%s\n", arr);
//	return 0;
//}



//дһ���������ж�һ���ַ����Ƿ�Ϊ����һ���ַ�����ת֮����ַ�����
//���磺����s1 = AABCD��s2 = BCDAA������1
//
//����s1 = abcd��s2 = ACBD������0.
//
//AABCD����һ���ַ��õ�ABCDA
//AABCD���������ַ��õ�BCDAA
//AABCD����һ���ַ��õ�DAABC
int is_left_moveString(char arr1[], char arr2[]) {
	int len = (int)strlen(arr1);
	//ÿ��תһ�ξͺ�arr2�Ƚ�
	for (int i = 0; i < len; i++) {
			//��ȣ�����1
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
//	//�����������������ж�
//	if (ret == 1) {
//		printf("Yes\n");
//	}
//	else {
//		printf("No\n");
//	}
//}
//һ���ַ�������׷��������ô�µ��ַ����Ϳ��԰���ԭ�ַ���������ת����������ж���һ���ַ����ǲ����³������Ӵ�
int up_judge_leftMove(char arr1[], char arr2[]) {
	int len1 = (int)strlen(arr1);
	int len2 = (int)strlen(arr2);
	if (len1 != len2) {
		//˵������������ת������
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

//ģ��ʵ��strlen
//size_t myStrlen(const char* str) {
//	//size_t strlen ( const char * str );
//	if (*str == '\0')
//		return 0;
//	else
//		return 1 + myStrlen(str + 1);
//}
//int main() {
//	char str1[] = "China";
//	printf("�ַ�������Ϊ��%d\n",(int)myStrlen(str1));
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