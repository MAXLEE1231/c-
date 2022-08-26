#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

//struct S
//{
//	int n;
//	int arr[];
//};
//
//int main()
//{
//	struct S* ps = (struct S*)malloc(sizeof(struct S) + 10 * sizeof(int)); //柔性数组 动态开辟空间
//	ps->n = 10;
//	if (ps == NULL)
//	{
//		perror("main");
//		return 1;
//	}
//	int i = 0;
//	for (i = 0;i < 10;i++)
//	{
//		ps->arr[i] = i;
//	}
//	
//	struct S* ptr = (struct S*)realloc(ps, sizeof(struct S) + 10 * sizeof(int) + 10 * sizeof(int));//增容
//	if (ptr != NULL)
//	{
//		ps = ptr;
//	}
//	//使用
//
//	free(ps);//释放
//	ps = NULL;
//	return 0;
//}


struct S
{
	int n;
	int* arr;
};

int main()
{
	struct S* ps = (struct S*)malloc(sizeof(struct S));
	if (ps == NULL)
	{
		perror("ps");
		return 1;
	}

	ps->n = 10;
	ps->arr = (int*)malloc(10 * sizeof(int));
	if (ps->arr == NULL)
	{
		perror("ps->arr");
		return 1;
	}

	int i = 0;
	for (i = 0;i < 10;i++)
	{
		ps->arr[i] = i;
	}

	int* ptr = (int*)realloc(ps->arr, 20 * sizeof(int));//增容
	if (ptr != NULL)
	{
		ps->arr = ptr;
	}

	//使用

	free(ps->arr);//释放
	ps->arr = NULL;
	free(ps);
	ps = NULL;

	return 0;
}