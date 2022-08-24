#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>

#define MAX 1000000000000000

//int main()
//{
//	int* p = (int*)malloc(sizeof(int) * MAX);//��̬�ڴ濪�� ��������
//
//
//	if (p == NULL)//����Ƿ񿪱ٳɹ� 
//	{
//		perror("main"); //��ӡ���� "main"   =    main:xxxxxxxx
//		return 0;
//	}
//
//	int i = 0;
//	for (i = 0;i < MAX;i++)
//	{
//		p[i] = i;
//	}
//
//	for (i = 0;i < MAX;i++)
//	{
//		printf("%d ", p[i]);
//	}
//
//	free(p); //��̬�ڴ����
//	p = NULL;
//	return 0;
//}


int main()
{
	int* p = calloc(10, sizeof(int));//��̬�ڴ濪�� �������� ��ֵΪ 0
	if (p == NULL)
	{
		perror("main");
		return 0;
	}
	int i = 0;

	for (i = 0;i < 10;i++)
	{
		printf("%d ", p[i]);
	}

	int* ptr = (int*)realloc(p, 20 * sizeof(int));//����
	if (ptr != NULL)  //�ж��Ƿ����ݳɹ�
	{
		p = ptr;
	}

	free(p);
	p = NULL;
	return 0;
}