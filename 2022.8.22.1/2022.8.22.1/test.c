#define _CRT_SECURE_NO_WARNINGS 1
#include"contact.h"

void menu()
{
	printf("**************************\n");
	printf("***  1.add    2.del    ***\n");
	printf("***  2.search 4.modify ***\n");
	printf("***  5.sort   6.print  ***\n");
	printf("***      0.exit        ***\n");
	printf("**************************\n");
}

enum option
{
	EXIT,
	ADD,
	DEL,
	SEARCH,
	MODIFY,
	SORT,
	PRINT
};

int main()
{
	int input = 0;
	Contact con;
	InitContact(&con);//初始化
	do
	{
		menu();
		printf("请选择：");
		scanf("%d", &input);
		switch (input)
		{
		case ADD://增
			AddContact(&con);
			break;
		case DEL://删
			DelContact(&con);
			break;
		case SEARCH://查
			SearchContact(&con);
			break;
		case MODIFY://改
			ModifyContact(&con);
			break;
		case SORT://排序
			/*SortContact(&con);*/
			break;
		case PRINT://打印
			PrintContact(&con);
			break;
		case EXIT://退出
			SaveContact(&con);//保存通讯录
			DestoryContact(&con); //动态版本回收销毁通讯录
			printf("退出通讯录\n");
			break;
		default:
			printf("选择错误/n");
			break;
		}
	} while (input);
	return 0;
}