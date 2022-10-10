# define _CRT_SECURE_NO_WARNINGS 1
# include "contact.h"

//销毁通讯录
void DestroyCon(struct Contact* con) {
	free(con->data);
	con->data = NULL;
	con->capacity = 0;
	con->sz = 0;
}

//实现初始化通讯录
void InitContact(struct Contact* con) {
	//断言这个指针非空
	assert(con);
	//con->sz = 0;
	//memset(con->data, 0, 100 * sizeof(struct PeoInfo));  //初始化100个数据为0

	con->data = (struct PeoInfo*)malloc(DEFAULT_SIZE * sizeof(struct PeoInfo));
	con->capacity = DEFAULT_SIZE;
	con->sz = 0;
}

//检查容量
int check_capa(struct Contact * con) {
	
	if (con->sz == con->capacity) {
		
		//增加容量
		struct PeoInfo* ptr = (struct PeoInfo*)realloc(con->data, (con->capacity + INC_SZ)*sizeof(struct PeoInfo));
		if (ptr != NULL) {
			con->data = ptr;
			con->capacity += INC_SZ;
			printf("增容成功！\n");
			return 1;	
		}
		else {
			perror("AddContact()");
			return 0;
		}
	}
	return 1;
}
//
void AddContact(struct Contact* con) {
	if (0 == check_capa(con)) {
		return;
	}
	//增添信息
	//以sz为下标，sz表示人数
	printf("请输入姓名：");
	scanf("%s", con->data[con->sz].name);
	printf("请输入性别：");
	scanf("%s", con->data[con->sz].sex);
	printf("请输入电话号码：");
	scanf("%s", con->data[con->sz].tele);
	printf("请输入年龄：");
	scanf("%d", &(con->data[con->sz].age));
	printf("请输入地址：");
	scanf("%s", &(con->data[con->sz].address));

	con->sz++;
	printf("添加成功！\n");
}


//实现打印函数
void ShowContact(const struct Contact* con) {
	printf("%-10s\t%-5s\t%-12s\t%-5s\t%-20s\n\n","姓名","性别","电话号码","年龄","地址");
	for (int i = 0; i < con->sz; i++) {
		printf("%-10s\t%-5s\t%-12s\t%-5d\t%-20s\n", con->data[i].name,
			con->data[i].sex,
			con->data[i].tele,
			con->data[i].age,
			con->data[i].address);
	}
}

static int FindName(struct Contact* con,char name[]) {
	for (int i = 0; i < con->sz; i++) {
		if (strcmp(con->data[i].name, name) == 0) {
			return i;
		}
	}
	return -1;
}
//删除指定联系人
void DelContact(struct Contact* con) {
	char name[MAX_NAME];
	printf("请输入要删除的联系人姓名：");
	scanf("%s", name);
	//查找该联系人
	int ret = FindName(con,name);
	if (ret == -1) {
		printf("该联系人不存在！\n");
	}
	else {
		for (int j = ret; j < con->sz - 1; j++) {
			con->data[j] = con->data[j + 1];
			//也可以使用memmove
		}
		con->sz--;
		printf("删除联系人成功！\n");
	}
}

//查找指定联系人
void Search(const struct Contact* con) {
	char name[MAX_NAME];
	printf("请输入要查找的联系人的姓名：");
	scanf("%s", name);
	int ret = FindName(con,name);
	if (ret == -1) {
		printf("要查找的联系人不存在！\n");
	}
	else {
		printf("%-10s\t%-5s\t%-12s\t%-5s\t%-20s\n\n", "姓名", "性别", "电话号码", "年龄", "地址");
		printf("%-10s\t%-5s\t%-12s\t%-5d\t%-20s\n", con->data[ret].name,
			con->data[ret].sex,
			con->data[ret].tele,
			con->data[ret].age,
			con->data[ret].address);
	}
}


//实现修改联系人
void Modify(struct Contact* con) {
	char name[MAX_NAME];
	printf("请输入要修改的联系人的姓名：");
	scanf("%s", name);
	int ret = FindName(con, name);
	if (ret == -1) {
		printf("要修改的联系人不存在\n");
	}
	else {
		//修改信息
	
		printf("请输入姓名：");
		scanf("%s", con->data[ret].name);
		printf("请输入性别：");
		scanf("%s", con->data[ret].sex);
		printf("请输入电话号码：");
		scanf("%s", con->data[ret].tele);
		printf("请输入年龄：");
		scanf("%d", &(con->data[ret].age));
		printf("请输入地址：");
		scanf("%s", &(con->data[ret].address));
		printf("修改成功\n");
	}
}

//实现qsort的如何比较
int CmpByAge(const void* e1, const void* e2) {
	//强制类型转化
	return ((struct PeoInfo*)e1)->age - ((struct PeoInfo*)e2)->age;
}
//按照姓名来排序
int CmpByName(const void* e1, const void* e2) {
	return strcmp(((struct PeoInfo*)e1)->name, ((struct PeoInfo*)e2)->name);
}
//实现按照年龄来排序
void Sort(struct Contact* con) {
	//使用qsort函数
	//qsort (void* base, size_t num, size_t size,int (*compar)(const void*, const void*));
	qsort(con->data, con->sz, sizeof(struct PeoInfo), CmpByName);
}
