#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

 
////有一个字符数组的内容为:"student a am i",
////请你将数组的内容改为"i am a student".
////要求：
////不能使用库函数。
////只能开辟有限个空间（空间个数和字符串的长度无关）。
////
////student a am i
////i ma a tneduts
////i am a student
//int my_strlen(char* arr)//字符串长度
//{
//	int count = 0;
//	while (*arr != '\0')
//	{
//		count++;
//		arr++;
//	}
//	return count;
//}
//
//void inversion(char* arr)//字符串翻转
//{
//	int sz = my_strlen(arr);
//	char* left = arr;
//	char* right = arr + sz - 1;
//	char a = ' ';
//	while (left < right)
//	{
//		a = *left;
//		*left = *right;
//		*right = a;
//		left++;
//		right--;
//	}
//}
//
//void inversion_part(char* arr, char* left, char* right)//翻转部分字符串
//{
//	char a = ' ';
//	while (left < right)
//	{
//		a = *left;
//		*left = *right;
//		*right = a;
//		right--;
//		left++;
//	}
//}
//int main()
//{
//	char arr[] = "student a am i";
//	char* left = arr;
//	char* right = arr;
//	char* a = NULL;
//	inversion(arr);
//	printf("%s\n", arr);
//	while (1)
//	{
//		while (*right != ' ' && *right != '\0')
//		{
//			right++;
//		}
//		right--;
//		inversion_part(arr, left, right);
//		a = right;
//		a++;
//		if (*a == '\0')
//		{
//			break;
//		}
//		right += 2;
//		left = right;
//	}
//	printf("%s\n", arr);
//	return 0;
//}


////1.调整数组使奇数全部都位于偶数前面。
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int i = 0;
//	for (i = sz-1;i>0;i--)
//	{
//		int j = 0;
//		for (j = sz - 1;j > 0;j--)
//		{
//			if (*(arr + j) % 2 == 1)
//			{
//				int tmp = *(arr + j);
//				*(arr + j) = *(arr + j - 1);
//				*(arr + j - 1) = tmp;
//			}
//		}
//		
//	}
//
//	for (i = 0;i < sz;i++)
//	{
//		printf("%d", arr[i]);
//	}
//	return 0;
//}

