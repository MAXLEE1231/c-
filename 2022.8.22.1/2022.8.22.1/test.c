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
	InitContact(&con);//��ʼ��
	do
	{
		menu();
		printf("��ѡ��");
		scanf("%d", &input);
		switch (input)
		{
		case ADD://��
			AddContact(&con);
			break;
		case DEL://ɾ
			DelContact(&con);
			break;
		case SEARCH://��
			SearchContact(&con);
			break;
		case MODIFY://��
			ModifyContact(&con);
			break;
		case SORT://����
			/*SortContact(&con);*/
			break;
		case PRINT://��ӡ
			PrintContact(&con);
			break;
		case EXIT://�˳�
			SaveContact(&con);//����ͨѶ¼
			DestoryContact(&con); //��̬�汾��������ͨѶ¼
			printf("�˳�ͨѶ¼\n");
			break;
		default:
			printf("ѡ�����/n");
			break;
		}
	} while (input);
	return 0;
}