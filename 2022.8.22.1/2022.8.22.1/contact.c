#define _CRT_SECURE_NO_WARNINGS 1
#include"contact.h"

//void InitContact(Contact* pc) //��̬��ʼ��
//{
//	pc->sz = 0;
//	memset(pc->data, 0, sizeof(pc->data));//�ڴ��ʼ��
//}

void InitContact(Contact* pc)//��̬��ʼ��
{
	pc->data = (PeoInfo*)malloc(DEFAULT_SZ * sizeof(PeoInfo));
	if (pc->data == NULL)
	{
		perror("InitContact");
		return;
	}
	pc->sz = 0;
	pc->capacity = DEFAULT_SZ;

	LoadContact(pc);// �����ļ�
}

void LoadContact(Contact* pc)//�����ļ�
{
	FILE* pf = fopen("contact.dat", "r");
	if (pf == NULL)
	{
		perror("LoadContact");
		return;
	}
	PeoInfo tmp = { 0 };
	while (fread(&tmp, sizeof(PeoInfo), 1, pf))
	{
		check_capacity(pc);
		pc->data[pc->sz] = tmp;
		pc->sz++;
	}
	fclose(pf);
	pf = NULL;
}

void SaveContact(Contact* pc)// �����ļ�
{
	FILE* pf = fopen("contact.dat", "w");
	if (pf == NULL)
	{
		perror("SaveContact");
		return;
	}
	int i = 0;
	for (i = 0;i < pc->sz;i++)
	{
		fwrite(pc->data + i, sizeof(PeoInfo), 1, pf);
	}


	fclose(pf);
	pf = NULL;
	printf("ͨѶ¼�ѱ���\n");
}


//void AddContact(Contact* pc)//��̬����
//{
//	if (pc->sz > 1000)
//	{
//		printf("��������\n");
//		return;
//	}
//	printf("���������֣�\n");
//	scanf("%s", pc->data[pc->sz].name);
//	printf("���������䣺\n");
//	scanf("%d", &(pc->data[pc->sz].age));
//	printf("�������Ա�\n");
//	scanf("%s", pc->data[pc->sz].sex);
//	printf("������绰��\n");
//	scanf("%s", pc->data[pc->sz].tele);
//	printf("�������ַ��\n");
//	scanf("%s", pc->data[pc->sz].addr);
//
//	pc->sz++;
//	printf("���ӳɹ�\n");
//}
void check_capacity(Contact* pc)//�ж��Ƿ�����
{
	if (pc->sz == pc->capacity)//����
	{
		PeoInfo* ptr = (PeoInfo*)realloc(pc->data, (pc->capacity + INC_SZ) * sizeof(PeoInfo));
		if (ptr != NULL)
		{
			pc->data = ptr;
			pc->capacity += INC_SZ;
			printf("���ݳɹ�\n");
		}
		else
		{
			perror("AddContact");
			printf("������ϵ��ʧ��\n");
			return;
		}
	}
}

void AddContact(Contact* pc)//��̬����
{
	check_capacity(pc);//�ж�����

	printf("���������֣�\n");
	scanf("%s", pc->data[pc->sz].name);
	printf("���������䣺\n");
	scanf("%d", &(pc->data[pc->sz].age));
	printf("�������Ա�\n");
	scanf("%s", pc->data[pc->sz].sex);
	printf("������绰��\n");
	scanf("%s", pc->data[pc->sz].tele);
	printf("�������ַ��\n");
	scanf("%s", pc->data[pc->sz].addr);

	pc->sz++;
	printf("���ӳɹ�\n");
}

void PrintContact(const Contact* pc)
{
	int i = 0;
	printf("%-5s\t%-5s\t%-5s\t%-12s\t%-20s\n", "����", "����", "�Ա�", "�绰", "��ַ");
	for (i = 0;i < pc->sz;i++)
	{
		printf("%-5s\t%-5d\t%-5s\t%-12s\t%-20s\n", pc->data[i].name,
			                                    pc->data[i].age, 
			                                    pc->data[i].sex, 
			                                    pc->data[i].tele, 
			                                    pc->data[i].addr);
	}
}

static int FindByName(const Contact* pc, char* name)
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
		printf("ͨѶ¼Ϊ��\n");
		return;
	}

	printf("������Ҫɾ�������֣�\n");
	scanf("%s", name);

	int pos = FindByName(pc, name);
	if (pos == -1)
	{
		printf("ɾ�����˲�����\n");
	}

	int i = 0;
	for (i = pos;i < pc->sz - 1;i++)
	{
		pc->data[i] = pc->data[i + 1];
	}
	pc->sz--;
	printf("ɾ���ɹ�\n");
}

void SearchContact(const Contact* pc)
{
	char name[MAX_NAME] = { 0 };
	printf("����������˵����֣�\n");
	scanf("%s", name);
	
	int pos = FindByName(pc, name);
	if (pos == -1)
	{
		printf("���ҵ��˲�����\n");
		return;
	}
	else
	{
		printf("%-5s\t%-5s\t%-5s\t%-12s\t%-20s\n", "����", "����", "�Ա�", "�绰", "��ַ");
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
	printf("�������޸��˵����֣�\n");
	scanf("%s", name);

	int pos = FindByName(pc, name);
	if (pos == -1)
	{
		printf("�޸ĵ��˲�����\n");
		return;
	}
	else
	{
		printf("���������֣�\n");
		scanf("%s", pc->data[pos].name);
		printf("���������䣺\n");
		scanf("%d", &(pc->data[pos].age));
		printf("�������Ա�\n");
		scanf("%s", pc->data[pos].sex);
		printf("������绰��\n");
		scanf("%s", pc->data[pos].tele);
		printf("�������ַ��\n");
		scanf("%s", pc->data[pos].addr);
		printf("�޸ĳɹ�\n");
	}
}

//void SortContact(Contact* pc)
//{
//
//}



void DestoryContact(Contact* pc)
{
	free(pc->data);
	pc->data = NULL;
	pc->sz = 0;
	pc->capacity = 0;
}
