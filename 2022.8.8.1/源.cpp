#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//求一个整数存储在内存中的二进制中1的个数
//int main()
//{
//	int input = 0;
//	int count = 0;
//	int i = 0;
//	scanf("%d", &input);
//	for (i = 0;i < 32;i++)
//	{
//		if (1 == ((input >> 1) & 1))
//		{
//			count++;
//		}
//
//	}
	//适用于正整数
	//while (input)
	//{
	//	if (input % 2 == 1)
	//	{
	//		count++;
	//	}
	//	input = input / 2;
	//}
//	printf("%d", count);
//	return 0;
//}

//int main()
//{
//	char c = 1;
//	printf("%u\n", sizeof(c));
//	printf("%u\n", sizeof(+c));
//	printf("%u\n", sizeof(!c));
//	return 0;
//}

//指针打印数组
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7 };
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int* p = arr;
//	for (i = 0;i < sz;i++)
//	{
//		printf("%d ", *p);
//		p++;
//	}
//	return 0;
//}

////模拟strlen计算字符串长度 指针-指针
//int my_strlen(char* str)
//{
//	char* start = str;
//	char* end = str;
//	while(*end != '\0')
//	{
//		end++;
//	}
//	return end - start;
//}
//
////递归实现 strlen
//int my_strlen(char* str)
//{
//	if (*str == '\0')
//	{
//		return 0;
//	}
//	else
//	{
//		return 1 + my_strlen(str + 1);
//	}
//}
//
//int main()
//{
//	char arr[] = "world";
//	int len = my_strlen(arr);
//	printf("%d\n", len);
//	return 0;
//}
