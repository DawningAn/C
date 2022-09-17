# define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//memcpy�ڴ濽��
//void * memcpy ( void * destination, const void * source, size_t num );
//memcpy���ں��������ͣ����Ƕ��ڴ����ݽ��п��������Խ�����������

//ʵ��Mymemcpy
//void* Mymemcpy(void * dest, void *src,int size_num) {
//	void* ret = dest;
//	while (size_num--) {
//		*(char*)dest = *(char*)src;
//	
//		((char*)dest)++;
//		((char*)src)++;
//	}
//	return ret;  //����Ŀ���ʼָ��
//}
//int main() {
//	int arr1[] = { 1,2,3,4,5,6 };
//	int arr2[3] = { 9,8,7 };
//
//	//memcpy(arr1, arr2, 12);  //size_t numΪ�������ֽ���
//	Mymemcpy(arr1, arr2, 12);
//	for (int i = 0; i < 6; i++) {
//		printf("%d ", arr1[i]);
//	}
//	return 0;
//}
//���ʵ���ص��ڴ�Ŀ���������Ҫmemcpy���ص��ڴ濽��Ҫʹ��memmove����VS��������memcpyʵ�����ص��ڴ�Ŀ���

//memcpy�ڴ�ȽϺ���
/* memcmp example */
//#include <string.h>
//int main()
//{
//	char buffer1[] = "DWgaOtP12df0";
//	char buffer2[] = "DWGAOTP12DF0";
//	int n;
//	n = memcmp(buffer1, buffer2, sizeof(buffer1));
//	if (n > 0) 
//		printf("'%s' is greater than '%s'.\n", buffer1, buffer2);
//	else if (n < 0) 
//		printf("'%s' is less than '%s'.\n", buffer1, buffer2);
//	else 
//		printf("'%s' is the same as '%s'.\n", buffer1, buffer2);
//	return 0;
//}

//memset
//���ڴ��ֽ���������ֵ
//int main() {
//	int arr[] = { 1,2,3,4,5 };
//	memset(arr, 0, 12);
//	return 0;
//}

//ʵ��memmove	(ʵ���ص��ڴ�Ŀ���)
//void* memmove(void* destination, const void* source, size_t num);
#include <assert.h>

void* myMemmove(void* dest, void* src, size_t num)
{
	void* ret = dest;
	assert(dest);
	assert(src);

	if (dest < src)//1 ǰ->��
	{
		while(num--)
		{
			*(char*)dest = *(char*)src;
			dest = (char*)dest + 1;
			src = (char*)src + 1;
		}
	}
	else //2 3 ��->ǰ
	{
		while (num--)
		{
			*((char*)dest + num) = *((char*)src + num);
		}
	}
	return ret;
}


//memcpyֻ��Ҫʵ�ֲ��ص��Ŀ����Ϳ����� - 60 100
//memmove����Ҫʵ���ص��ڴ�Ŀ�����

int main()
{
	int arr1[] = { 1,2,3,4,5,6,7,8,9,10 };
	int arr2[10] = { 0 };
	myMemmove(arr2, arr1, 20);

	for (int i = 0; i < 10; i++)
	{
		printf("%d ", arr2[i]);
	}
	return 0;
}