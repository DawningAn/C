# define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void BubbleSort0(int arr[], int sz) {
	for (int i = 0; i < sz; i++) {
		for (int j = 0; j < sz - i - 1; j++) {
			if (arr[j] > arr[j + 1]) {
				int tmp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = tmp;
			}
		}
	}
}
//改进后的冒泡排序
void BubbleSort1(int arr[], int sz) {
	int flag = 1;
	for (int i = 0; i < sz && flag; i++) {
		for (int j = 0; j < sz - i - 1; j++) {
			flag = 0;
			if (arr[j] > arr[j + 1]) {
				int tmp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = tmp;
				flag = 1;  //有数据交换，则代表不有序
			}
		}
	}
}
void print(int arr[], int sz) {
	for (int i = 0; i < sz; i++) {
		printf("%d ", arr[i]);
	}
}
int Cmpint(const void* e1,const void* e2) {
	return *(int*)e1 - *(int*)e2;  //升序
	//return *(int*)e2 - *(int*)e1;  //降序
}
void Test_qsort() {
	int arr[10] = { 5,3,6,9,1,7,2,10,8,4 };
	//我们相对arr数组的元素进行排序(升序)
	int sz = sizeof(arr) / sizeof(arr[0]);
	// 在本例中我们实现比较两个整形
	qsort(arr, sz, sizeof(arr[0]), Cmpint);

	print(arr, sz);
}
struct Stu {
	char name[10];
	int age;
};
CmpStruct(const void* e1, const void* e2) {
	//假设按姓名排序
	//return strcmp(((struct Stu*)e1)->name, ((struct Stu*)e2)->name);
	//假设按年龄排序
	return ((struct Stu*)e1)->age - ((struct Stu*)e2)->age;
}
void test_qsort2() {
	struct Stu s[] = { {"wang",20},{"liu",18} };
	int sz = sizeof(s) / sizeof(s[0]);
	qsort(s, sz, sizeof(s[0]), CmpStruct);
	
	printf("%s %d\n", s[0].name, s[0].age);
	printf("%s %d\n", s[1].name, s[1].age);
	
	
}
void Swap(char* buf1, char* buf2,int size) {
	for (int i = 0; i < size; i++) {
		char tmp = *buf1;
		*buf1 = *buf2;
		*buf2 = tmp;
		buf1++;
		buf2++;
	}
}
void Bubble_sort(void* base,size_t sz,size_t size,int (*cmp)(const void* e1,const void* e2)) {
	for (int i = 0; i < sz; i++) {
		for (int j = 0; j < sz - i - 1; j++) {
			if (cmp((char*)base + j*size, (char*)base + (j + 1)*size) > 0){
				//返回大于零,那就要交换
				Swap((char*)base + j * size, (char*)base + (j + 1) * size,size); 
			}
		}
	}
}
void test3() {
	int arr[10] = { 5,3,6,9,1,7,2,10,8,4 };
	//我们相对arr数组的元素进行排序(升序)
	int sz = sizeof(arr) / sizeof(arr[0]);
	Bubble_sort(arr, sz, 4, Cmpint);
	print(arr, sz);
	printf("\n");
	//测试排序结构体
	struct Stu s[] = { {"wang",20},{"liu",18} };
	sz = sizeof(s) / sizeof(s[0]);
	Bubble_sort(s, sz, sizeof(s[0]), CmpStruct);
	printf("%s %d\n", s[0].name, s[0].age);
	printf("%s %d\n", s[1].name, s[1].age);
}
int main() {
	//Test_qsort();
	//test_qsort2();
	test3();
	return 0;
}