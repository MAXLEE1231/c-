#define _CRT_SECURE_NO_WARNINGS 1
#include"contact.h"

void InitContact(Contact* pc)
{
	pc->sz = 0;
	memset(pc->data, 0, sizeof(pc->data));//内存初始化
}

void AddContact(Contact* pc)
{
	if (pc->sz > 1000)
	{
		printf("储存已满\n");
		return;
	}
	printf("请输入名字：\n");
	scanf("%s", pc->data[pc->sz].name);
	printf("请输入年龄：\n");
	scanf("%d", &(pc->data[pc->sz].age));
	printf("请输入性别：\n");
	scanf("%s", pc->data[pc->sz].sex);
	printf("请输入电话：\n");
	scanf("%s", pc->data[pc->sz].tele);
	printf("请输入地址：\n");
	scanf("%s", pc->data[pc->sz].addr);

	pc->sz++;
	printf("增加成功\n");
}

void PrintContact(const Contact* pc)
{
	int i = 0;
	printf("%-5s\t%-5s\t%-5s\t%-12s\t%-20s\n", "名字", "年龄", "性别", "电话", "地址");
	for (i = 0;i < pc->sz;i++)
	{
		printf("%-5s\t%-5d\t%-5s\t%-12s\t%-20s\n", pc->data[i].name,
			                                    pc->data[i].age, 
			                                    pc->data[i].sex, 
			                                    pc->data[i].tele, 
			                                    pc->data[i].addr);
	}
}

static int FindByName(Contact* pc, char* name)
{
	int i = 0;
	for (i = 0;i < pc->sz;i++)
	{
		if (strcmp(pc->data[i].name, name) == 0)
		{
			return i;
		}
	}
	return -1;
}


void DelContact(Contact* pc)
{
	char name[MAX_NAME] = { 0 };

	if (pc->sz == 0)
	{
		printf("通讯录为空\n");
		return;
	}

	printf("请输入要删除的名字：\n");
	scanf("%s", name);

	int pos = FindByName(pc, name);
	if (pos == -1)
	{
		printf("删除的人不存在\n");
	}

	int i = 0;
	for (i = pos;i < pc->sz - 1;i++)
	{
		pc->data[i] = pc->data[i + 1];
	}
	pc->sz--;
	printf("删除成功\n");
}

void SearchContact(const Contact* pc)
{
	char name[MAX_NAME] = { 0 };
	printf("请输入查找人的名字：\n");
	scanf("%s", name);
	
	int pos = FindByName(pc, name);
	if (pos == -1)
	{
		printf("查找的人不存在\n");
		return;
	}
	else
	{
		printf("%-5s\t%-5s\t%-5s\t%-12s\t%-20s\n", "名字", "年龄", "性别", "电话", "地址");
		printf("%-5s\t%-5d\t%-5s\t%-12s\t%-20s\n", pc->data[pos].name,
		                                           pc->data[pos].age,
			                                       pc->data[pos].sex,
			                                       pc->data[pos].tele,
			                                       pc->data[pos].addr);
	}
}

void ModifyContact(Contact* pc)
{
	char name[MAX_NAME] = { 0 };
	printf("请输入修改人的名字：\n");
	scanf("%s", name);

	int pos = FindByName(pc, name);
	if (pos == -1)
	{
		printf("修改的人不存在\n");
		return;
	}
	else
	{
		printf("请输入名字：\n");
		scanf("%s", pc->data[pos].name);
		printf("请输入年龄：\n");
		scanf("%d", &(pc->data[pos].age));
		printf("请输入性别：\n");
		scanf("%s", pc->data[pos].sex);
		printf("请输入电话：\n");
		scanf("%s", pc->data[pos].tele);
		printf("请输入地址：\n");
		scanf("%s", pc->data[pos].addr);
		printf("修改成功\n");
	}
}

//void SortContact(Contact* pc)
//{
//
//}