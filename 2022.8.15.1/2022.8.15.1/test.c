#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

 
////��һ���ַ����������Ϊ:"student a am i",
////���㽫��������ݸ�Ϊ"i am a student".
////Ҫ��
////����ʹ�ÿ⺯����
////ֻ�ܿ������޸��ռ䣨�ռ�������ַ����ĳ����޹أ���
////
////student a am i
////i ma a tneduts
////i am a student
//int my_strlen(char* arr)//�ַ�������
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
//void inversion(char* arr)//�ַ�����ת
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
//void inversion_part(char* arr, char* left, char* right)//��ת�����ַ���
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


////1.��������ʹ����ȫ����λ��ż��ǰ�档
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

