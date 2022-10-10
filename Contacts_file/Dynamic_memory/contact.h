# define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
#include <assert.h>
#include <stdlib.h>
//ʹ�ú궨��,��ߺ�����չ��
#define MAX 100
#define MAX_NAME 20
#define MAX_SEX 5
#define MAX_TELE 12
#define MAX_ADDRESS 30

#define DEFAULT_SIZE 3
#define INC_SZ 3  //ÿ�����ݵĴ�С
//��ʾ�˵���Ϣ
struct PeoInfo {
	char name[MAX_NAME];
	char sex[MAX_SEX];
	char tele[MAX_TELE];
	int age;
	char address[MAX_ADDRESS];
};

//��װͨѶ¼����̬�ڴ濪�٣�
struct Contact {
	struct PeoInfo *data;
	int sz;  
	int capacity;  //ͨѶ¼����
};


//������ʼ��ͨѶ¼����
void InitContact(struct Contact* con);

//����ͨѶ¼
void DestroyCon(struct Contact* con);

//����������ϵ�˺���
void AddContact(struct Contact* con);

//������ʾͨѶ¼
void ShowContact(const struct Contact* con);

//ɾ��ͨѶ¼
void DelContact(struct Contact* con);

//������ϵ��
void Search(const struct Contact* con);

//�޸���ϵ��
void Modify(struct Contact* con);

//���԰����������������������
void Sort(struct Contact* con);
