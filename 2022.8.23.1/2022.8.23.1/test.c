#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>

#define MAX 1000000000000000

//int main()
//{
//	int* p = (int*)malloc(sizeof(int) * MAX);//动态内存开辟 堆区开辟
//
//
//	if (p == NULL)//检查是否开辟成功 
//	{
//		perror("main"); //打印错误 "main"   =    main:xxxxxxxx
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
//	free(p); //动态内存回收
//	p = NULL;
//	return 0;
//}


int main()
{
	int* p = calloc(10, sizeof(int));//动态内存开辟 堆区开辟 赋值为 0
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

	int* ptr = (int*)realloc(p, 20 * sizeof(int));//增容
	if (ptr != NULL)  //判断是否增容成功
	{
		p = ptr;
	}

	free(p);
	p = NULL;
	return 0;
}