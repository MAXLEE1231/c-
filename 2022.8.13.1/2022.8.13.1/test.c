#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

////������
//void menu()
//{
//	printf("****************************\n");
//	printf("****   1.add    2.sub   ****\n");
//	printf("****   3.mul    4.div   ****\n");
//	printf("****        0.exit      ****\n");
//	printf("****************************\n");
//}
//
//int add(int a, int b)
//{
//	return a + b;
//}
//
//int sub(int a, int b)
//{
//	return a - b;
//}
//
//int mul(int a, int b)
//{
//	return a * b;
//}
//
//int div(int a, int b)
//{
//	return a / b;
//}
//int main()
//{
//	int x = 0;
//	int y = 0;
//	int ret = 0;
//	int input = 0;
//	do
//	{
//		menu();
//		printf("�����룺\n");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 1:
//			printf("���������:");
//			scanf("%d%d", &x, &y);
//			ret = add(x, y);
//			printf("ret=%d\n", ret);
//			break;
//		case 2:
//			printf("���������:");
//			scanf("%d%d", &x, &y);
//			ret = sub(x, y);
//			printf("ret=%d\n", ret);
//			break;
//		case 3:
//			printf("���������:");
//			scanf("%d%d", &x, &y);
//			ret = mul(x, y);
//			printf("ret=%d\n", ret);
//			break;
//		case 4:
//			printf("���������:");
//			scanf("%d%d", &x, &y);
//			ret = div(x, y);
//			printf("ret=%d\n", ret);
//			break;
//		case 0:
//			printf("�˳�\n");
//			break;
//		default:
//			printf("ѡ�����\n");
//			break;
//		}
//	} while (input);
//	return 0;
//}


////���ú���ָ������ʵ�ּ�����
//void menu()
//{
//	printf("****************************\n");
//	printf("****   1.add    2.sub   ****\n");
//	printf("****   3.mul    4.div   ****\n");
//	printf("****        0.exit      ****\n");
//	printf("****************************\n");
//}
//
//int add(int a, int b)
//{
//	return a + b;
//}
//
//int sub(int a, int b)
//{
//	return a - b;
//}
//
//int mul(int a, int b)
//{
//	return a * b;
//}
//
//int div(int a, int b)
//{
//	return a / b;
//}
//
//int main()
//{
//	int x = 0;
//	int y = 0;
//	int ret = 0;
//	int input = 1;
//	int(*p[5])(int, int) = { NULL,add,sub,mul,div };
//	while (input)
//	{
//		menu();
//		printf("�����룺");
//		scanf("%d", &input);
//		if (input > 0 && input < 5)
//		{
//			printf("�������������");
//			scanf("%d%d", &x, &y);
//			ret = (*p[input])(x, y);
//			printf("ret=%d\n", ret);
//		}
//		else
//		{
//			printf("�������\n");
//		}
//	}
//}