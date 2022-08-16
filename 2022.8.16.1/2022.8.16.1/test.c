#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
#include<assert.h>


////1.实现一个函数，可以左旋字符串中的k个字符。
////ABCD左旋一个字符得到BCDA
////ABCD左旋两个字符得到CDAB
//void rotate(char* arr, int sz, int k)
//{
//	int i = 0;
//	char* pk = arr + k - 1;
//	for (i = 0;i < k;i++)
//	{
//		int j = 0;
//		for (j = 0;j < sz-1;j++)
//		{
//			int tmp = *(arr + j);
//			*(arr + j )= *(arr + j + 1);
//			*(arr + j + 1) = tmp;
//		}
//	}
//}
//int main()
//{
//	char arr[] = "ABCDEFG";
//	int k = 0;
//	int sz = strlen(arr);
//	printf("可以左旋字符串中的字符为：");
//	scanf("%d", &k);
//	rotate(arr, sz, k);
//	printf("%s", arr);
//	return 0;
//}


////2.判断一个字符串是否为另外一个字符串旋转之后的字符串。
////例如：给定s1 = AABCD和s2 = BCDAA，返回1
////给定s1 = abcd和s2 = ACBD，返回0.
////
////AABCD左旋一个字符得到ABCDA
////AABCD左旋两个字符得到BCDAA
////
////AABCD右旋一个字符得到DAABC
//int rotate(char* s1,char* s2, int sz)
//{
//	int k = 0;
//	for (k = 1;k < sz;k++)
//	{
//		int i = 0;
//		for (i = 0;i < k;i++)
//		{
//			int j = 0;
//			for (j = 0;j < sz - 1;j++)
//			{
//				int tmp = *(s1 + j);
//				*(s1 + j) = *(s1 + j + 1);
//				*(s1 + j + 1) = tmp;
//			}
//		}
//		if (strcmp(s1, s2) == 0)
//		{
//			return 1;
//		}
//	}
//	return 0;
//}
//
//int main()
//{
//	char s1[] = " ";
//	char s2[] = " ";
//	scanf("%s", s1);
//	scanf("%s", s2);
//	int sz = strlen(s1);
//	int a = rotate(s1, s2, sz);
//	if (a == 1)
//	{
//		printf("是\n");
//	}
//	else if (a == 0)
//	{
//		printf("否\n");
//	}
//	return 0;
//}
//
////1.一个数组中只有两个数字是出现一次，
////其他所有数字都出现了两次。
////找出这两个只出现一次的数字，编程实现。
//int main()
//{
//	int arr[] = { 1,1,2,2,3,4,5,5,6,6 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int i = 0;
//	for (i = 0;i < sz;i++)
//	{
//		int b = 0;
//		int j = 0;
//		for (j = 0;j < sz;j++)
//		{
//			int a = 0;
//			a =	arr[i] ^ arr[j];
//			if (a != 0)
//			{
//				b++;
//			}
//		}
//		if (b != sz - 2)
//		{
//			printf("%d ", arr[i]);
//		}
//	}
//	return 0;
//}


////2.喝汽水，1瓶汽水1元，2个空瓶可以换一瓶汽水，
////给20元，可以多少汽水。
////编程实现。
//int main()
//{
//	int a = 20;
//	int b = a/1;
//	while (a > 1)
//	{
//		b = b + (a / 2);
//		a = (a / 2) + (a % 2);
//	}
//	printf("%d", b);
//	return 0;
//}


////3.模拟实现strcpy                                  将arr2复制arr1中 最后一个为\0
//char* my_strcpy(char* arr1, const char* arr2)
//{
//	assert(arr1 && arr2);
//	char* p = arr1;
//	while (*arr1++ = *arr2++);
//	return p;
//}
//int main()
//{
//	char arr1[] = "***********";
//	char arr2[] = "abcdefg";
//	my_strcpy(arr1, arr2);
//	printf("%s", arr1);
//	return 0;
//}



//4.模拟实现strcat                                   将arr2拼接到arr1后面 最后为\0
//char* my_strcat(char* arr1, const char* arr2)
//{
//	assert(arr1 && arr2);
//	char* p = arr1;
//	int s1 = strlen(arr1);
//	arr1 += s1;
//	while (*arr1++ = *arr2++)
//	{
//
//	}
//	return p;
//}
//int main()
//{
//	char arr1[100] = "hello";
//	char arr2[] = "lulu";
//	my_strcat(arr1, arr2);
//	printf("%s", arr1);
//	return 0;
//}


////3.实现strstr                                    查找arr2有没有在arr1中出现
//char* my_strstr(const char* arr1, const char* arr2)
//{
//	assert(arr1 && arr2);
//	char* s1 = (char*)arr1;
//	char* s2 = (char*)arr2;
//	char* s3 = (char*)arr1;
//	if (arr2 == '\0');
//	{
//		return (char*)arr1;
//	}
//	while (s3)
//	{
//		s1 = s3;
//		s2 = (char*)arr2;
//		while (*s1 && *s2 && *s1 == *s2)
//		{
//			s1++;
//			s2++;
//		}
//		if (*s2 == '\0')
//		{
//			return s3;
//		}
//		if (*s1 == '\0')
//		{
//			return NULL;
//		}
//		s3++;
//	}
//}
//int main()
//{
//	char arr1[] = "abcde";
//	char arr2[] = "cde";
//	char* p = my_strstr(arr1, arr2);
//	if (p == NULL)
//	{
//		printf("没找到\n");
//	}
//	else
//	{
//		printf("找到了地址为：%p", p);
//	}
//	return 0;
//}


////4.实现strchr                                查找b在arr1中第一次出现的位置
//char* my_strchr(const char* arr, int b)
//{
//	assert(arr);
//	while (*arr != '\0')
//	{
//		if (*arr == b)
//		{
//			return arr;
//		}
//		arr++;
//	}
//	return NULL;
//}
//int main()
//{
//	char arr[] = "abcde";
//	char b = 'c';
//	char* p = my_strchr(arr, b);
//	if (p == NULL)
//	{
//		printf("找不到");
//	}
//	else
//	{
//		printf("%d", p - arr+1);
//	}
//	return 0;
//}



////5.实现strcmp                    比较两个字符串是否相等
//int my_strcmp(const char* arr1, const char* arr2)
//{
//	assert(arr1 && arr2);
//	while (*arr1 == *arr2)
//	{
//		if (*arr1 == '\0')
//		{
//			return 0;
//		}
//		arr1++;
//		arr2++;
//	}
//	return (*arr1 - *arr2);
//}
//int main()
//{
//	char arr1[] = "abcd";
//	char arr2[] = "abcd";
//	int p = my_strcmp(arr1, arr2);
//	if (p == 0)
//	{
//		printf("相同\n");
//	}
//	else
//	{
//		printf("不同\n");
//	}
//	return 0;
//}



//6.实现memcpy
void* my_memcpy(void* arr1, const void* arr2, size_t sz)
{
	assert(arr1 && arr2);
	void* p = arr1;
	while (sz--)
	{
		*(char*)arr1 = *(char*)arr2;
		++(char*)arr1;
		++(char*)arr2;
	}
	return p;
}
int main()
{
	char arr1[20] = { 0 };
	char arr2[] = {1,2,3,4,5};
	my_memcpy(arr1, arr2, sizeof(arr2));
	return 0;
}


