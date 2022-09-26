# define _CRT_SECURE_NO_WARNINGS 1
# include "contact.h"

//����ͨѶ¼
void DestroyCon(struct Contact* con) {
	free(con->data);
	con->data = NULL;
	con->capacity = 0;
	con->sz = 0;
}

//ʵ�ֳ�ʼ��ͨѶ¼
void InitContact(struct Contact* con) {
	//�������ָ��ǿ�
	assert(con);
	//con->sz = 0;
	//memset(con->data, 0, 100 * sizeof(struct PeoInfo));  //��ʼ��100������Ϊ0

	con->data = (struct PeoInfo*)malloc(DEFAULT_SIZE * sizeof(struct PeoInfo));
	con->capacity = DEFAULT_SIZE;
	con->sz = 0;
}

//�������
int check_capa(struct Contact * con) {
	
	if (con->sz == con->capacity) {
		
		//��������
		struct PeoInfo* ptr = (struct PeoInfo*)realloc(con->data, (con->capacity + INC_SZ)*sizeof(struct PeoInfo));
		if (ptr != NULL) {
			con->data = ptr;
			con->capacity += INC_SZ;
			printf("���ݳɹ���\n");
			return 1;	
		}
		else {
			perror("AddContact()");
			return 0;
		}
	}
	return 1;
}
//��̬����������ϵ����Ϣ
void AddContact(struct Contact* con) {
	if (0 == check_capa(con)) {
		return;
	}
	//������Ϣ
	//��szΪ�±꣬sz��ʾ����
	printf("������������");
	scanf("%s", con->data[con->sz].name);
	printf("�������Ա�");
	scanf("%s", con->data[con->sz].sex);
	printf("������绰���룺");
	scanf("%s", con->data[con->sz].tele);
	printf("���������䣺");
	scanf("%d", &(con->data[con->sz].age));
	printf("�������ַ��");
	scanf("%s", &(con->data[con->sz].address));

	con->sz++;
	printf("��ӳɹ���\n");
}


//ʵ�ִ�ӡ����
void ShowContact(const struct Contact* con) {
	printf("%-10s\t%-5s\t%-12s\t%-5s\t%-20s\n\n","����","�Ա�","�绰����","����","��ַ");
	for (int i = 0; i < con->sz; i++) {
		printf("%-10s\t%-5s\t%-12s\t%-5d\t%-20s\n", con->data[i].name,
			con->data[i].sex,
			con->data[i].tele,
			con->data[i].age,
			con->data[i].address);
	}
}
//ʵ��ͨ����ϵ��������������ϵ���Ƿ����
static int FindName(const struct Contact* con,char name[]) {
	for (int i = 0; i < con->sz; i++) {
		if (strcmp(con->data[i].name, name) == 0) {
			return i;
		}
	}
	return -1;
}
//ɾ��ָ����ϵ��
void DelContact(struct Contact* con) {
	char name[MAX_NAME];
	printf("������Ҫɾ������ϵ��������");
	scanf("%s", name);
	//���Ҹ���ϵ��
	int ret = FindName(con,name);
	if (ret == -1) {
		printf("����ϵ�˲����ڣ�\n");
	}
	else {
		for (int j = ret; j < con->sz - 1; j++) {
			con->data[j] = con->data[j + 1];
			//Ҳ����ʹ��memmove
		}
		con->sz--;
		printf("ɾ����ϵ�˳ɹ���\n");
	}
}

//����ָ����ϵ��
void SearchContact(const struct Contact* con) {
	char name[MAX_NAME];
	printf("������Ҫ���ҵ���ϵ�˵�������");
	scanf("%s", name);
	int ret = FindName(con,name);
	if (ret == -1) {
		printf("Ҫ���ҵ���ϵ�˲����ڣ�\n");
	}
	else {
		printf("%-10s\t%-5s\t%-12s\t%-5s\t%-20s\n\n", "����", "�Ա�", "�绰����", "����", "��ַ");
		printf("%-10s\t%-5s\t%-12s\t%-5d\t%-20s\n", con->data[ret].name,
			con->data[ret].sex,
			con->data[ret].tele,
			con->data[ret].age,
			con->data[ret].address);
	}
}

//ʵ���޸���ϵ��
void ModifyContact(struct Contact* con) {
	char name[MAX_NAME];
	printf("������Ҫ�޸ĵ���ϵ�˵�������");
	scanf("%s", name);
	int ret = FindName(con, name);
	if (ret == -1) {
		printf("Ҫ�޸ĵ���ϵ�˲�����\n");
	}
	else {
		//�޸���Ϣ
	
		printf("������������");
		scanf("%s", con->data[ret].name);
		printf("�������Ա�");
		scanf("%s", con->data[ret].sex);
		printf("������绰���룺");
		scanf("%s", con->data[ret].tele);
		printf("���������䣺");
		scanf("%d", &(con->data[ret].age));
		printf("�������ַ��");
		scanf("%s", &(con->data[ret].address));
		printf("�޸ĳɹ�\n");
	}
}

//ʵ��qsort����αȽ�
int CmpByAge(const void* e1, const void* e2) {
	//ǿ������ת��
	return ((struct PeoInfo*)e1)->age - ((struct PeoInfo*)e2)->age;
}
//��������������
int CmpByName(const void* e1, const void* e2) {
	return strcmp(((struct PeoInfo*)e1)->name, ((struct PeoInfo*)e2)->name);
}
//ʵ�ְ�������������
void SortContact(struct Contact* con) {
	//ʹ��qsort����
	//qsort (void* base, size_t num, size_t size,int (*compar)(const void*, const void*));
	qsort(con->data, con->sz, sizeof(struct PeoInfo), CmpByName);
}
