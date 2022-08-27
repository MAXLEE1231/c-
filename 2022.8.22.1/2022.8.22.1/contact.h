#pragma once
#include<stdio.h>
#include<string.h>
#include<stdlib.h>

#define MAX_NAME 20
#define MAX_SEX 10
#define MAX_TELE 12
#define MAX_ADDR 30

#define MAX 1000

#define DEFAULT_SZ 3
#define INC_SZ 2

typedef struct PeoInfo//���� ������ŵ���Ϣ
{
	char name[MAX_NAME];
	int age;
	char sex[MAX_SEX];
	char tele[MAX_TELE];
	char addr[MAX_ADDR];
}PeoInfo;

//typedef struct Contact//ͨѶ¼ ��̬�汾
//{
//	PeoInfo data[MAX];
//	int sz;
//}Contact;

typedef struct Contact//ͨѶ¼ ��̬�汾
{
	PeoInfo *data;// ָ��̬����Ŀռ䣬���������ϵ�˵���Ϣ
	int sz;//  ��¼��ǰͨѶ¼����Ч��Ϣ�ĸ���
	int capacity;//  ��¼��ǰͨѶ¼���������
}Contact;

void InitContact(Contact* pc); //��ʼ��

void AddContact(Contact* pc);//����

void PrintContact(const Contact* pc);//��ӡ

void DelContact(Contact* pc);//ɾ��

void SearchContact(const Contact* pc);//����

void ModifyContact(Contact* pc);//�޸�

void SortContact(Contact* pc);//����

void DestoryContact(Contact* pc);//��̬�汾���ٻ���ͨѶ¼