#pragma once
#include<stdio.h>
#include<string.h>

#define MAX_NAME 20
#define MAX_SEX 10
#define MAX_TELE 12
#define MAX_ADDR 30

#define MAX 1000

typedef struct PeoInfo//����
{
	char name[MAX_NAME];
	int age;
	char sex[MAX_SEX];
	char tele[MAX_TELE];
	char addr[MAX_ADDR];
}PeoInfo;

typedef struct Contact//ͨѶ¼
{
	PeoInfo data[MAX];
	int sz;
}Contact;

void InitContact(Contact* pc); //��ʼ��

void AddContact(Contact* pc);//����

void PrintContact(const Contact* pc);//��ӡ

void DelContact(Contact* pc);//ɾ��

void SearchContact(const Contact* pc);//����

void ModifyContact(Contact* pc);//�޸�

void SortContact(Contact* pc);//����