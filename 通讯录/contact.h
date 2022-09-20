# define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
#include <assert.h>

//使用宏定义,提高后续拓展性
#define MAX 100
#define MAX_NAME 20
#define MAX_SEX 5
#define MAX_TELE 12
#define MAX_ADDRESS 30
//表示人的信息
struct PeoInfo {
	char name[MAX_NAME];
	char sex[MAX_SEX];
	char tele[MAX_TELE];
	int age;
	char address[MAX_ADDRESS];
};

//封装通讯录
struct Contact {
	struct PeoInfo data[MAX];
	int sz;
};

//声明初始化通讯录函数
void InitContact(struct Contact* con);

//声明增加联系人函数
void AddContact(struct Contact* con);

//声明显示通讯录
void ShowContact(const struct Contact* con);

//删除通讯录
void DelContact(struct Contact* con);

//查找联系人
void Search(const struct Contact* con);

//修改联系人
void Modify(struct Contact* con);

//可以按照姓名索引、年龄等排序
void Sort(struct Contact* con);
