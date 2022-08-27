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

typedef struct PeoInfo//类型 单个存放的信息
{
	char name[MAX_NAME];
	int age;
	char sex[MAX_SEX];
	char tele[MAX_TELE];
	char addr[MAX_ADDR];
}PeoInfo;

//typedef struct Contact//通讯录 静态版本
//{
//	PeoInfo data[MAX];
//	int sz;
//}Contact;

typedef struct Contact//通讯录 动态版本
{
	PeoInfo *data;// 指向动态申请的空间，用来存放联系人的信息
	int sz;//  记录当前通讯录中有效信息的个数
	int capacity;//  记录当前通讯录的最大容量
}Contact;

void InitContact(Contact* pc); //初始化

void AddContact(Contact* pc);//增加

void PrintContact(const Contact* pc);//打印

void DelContact(Contact* pc);//删除

void SearchContact(const Contact* pc);//查找

void ModifyContact(Contact* pc);//修改

void SortContact(Contact* pc);//排序

void DestoryContact(Contact* pc);//动态版本销毁回收通讯录