#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
#include<assert.h>


////1.ʵ��һ�����������������ַ����е�k���ַ���
////ABCD����һ���ַ��õ�BCDA
////ABCD���������ַ��õ�CDAB
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
//	printf("���������ַ����е��ַ�Ϊ��");
//	scanf("%d", &k);
//	rotate(arr, sz, k);
//	printf("%s", arr);
//	return 0;
//}


////2.�ж�һ���ַ����Ƿ�Ϊ����һ���ַ�����ת֮����ַ�����
////���磺����s1 = AABCD��s2 = BCDAA������1
////����s1 = abcd��s2 = ACBD������0.
////
////AABCD����һ���ַ��õ�ABCDA
////AABCD���������ַ��õ�BCDAA
////
////AABCD����һ���ַ��õ�DAABC
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
//		printf("��\n");
//	}
//	else if (a == 0)
//	{
//		printf("��\n");
//	}
//	return 0;
//}
//
////1.һ��������ֻ�����������ǳ���һ�Σ�
////�����������ֶ����������Ρ�
////�ҳ�������ֻ����һ�ε����֣����ʵ�֡�
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


////2.����ˮ��1ƿ��ˮ1Ԫ��2����ƿ���Ի�һƿ��ˮ��
////��20Ԫ�����Զ�����ˮ��
////���ʵ�֡�
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


////3.ģ��ʵ��strcpy                                  ��arr2����arr1�� ���һ��Ϊ\0
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



//4.ģ��ʵ��strcat                                   ��arr2ƴ�ӵ�arr1���� ���Ϊ\0
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


////3.ʵ��strstr                                    ����arr2��û����arr1�г���
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
//		printf("û�ҵ�\n");
//	}
//	else
//	{
//		printf("�ҵ��˵�ַΪ��%p", p);
//	}
//	return 0;
//}


////4.ʵ��strchr                                ����b��arr1�е�һ�γ��ֵ�λ��
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
//		printf("�Ҳ���");
//	}
//	else
//	{
//		printf("%d", p - arr+1);
//	}
//	return 0;
//}



////5.ʵ��strcmp                    �Ƚ������ַ����Ƿ����
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
//		printf("��ͬ\n");
//	}
//	else
//	{
//		printf("��ͬ\n");
//	}
//	return 0;
//}



//6.ʵ��memcpy
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


