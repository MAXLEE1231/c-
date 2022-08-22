#pragma once
#include<stdio.h>
#include<string.h>

#define MAX_NAME 20
#define MAX_SEX 10
#define MAX_TELE 12
#define MAX_ADDR 30

#define MAX 1000

typedef struct PeoInfo//类型
{
	char name[MAX_NAME];
	int age;
	char sex[MAX_SEX];
	char tele[MAX_TELE];
	char addr[MAX_ADDR];
}PeoInfo;

typedef struct Contact//通讯录
{
	PeoInfo data[MAX];
	int sz;
}Contact;

void InitContact(Contact* pc); //初始化

void AddContact(Contact* pc);//增加

void PrintContact(const Contact* pc);//打印

void DelContact(Contact* pc);//删除

void SearchContact(const Contact* pc);//查找

void ModifyContact(Contact* pc);//修改

void SortContact(Contact* pc);//排序