#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<assert.h>
//ģ��strstr����  arr1����û��arr2 �еĻ�����  �ҵ�����ʼλ�ã�û�еĻ����� NULL 
char* my_strstr(const char* arr1, const char* arr2)
{
	assert(arr1 && arr2);
	const char* s1 = NULL;
	const char* s2 = NULL;
	const char* cp = arr1;

	if (*arr2 == '\0') //���arr2 Ϊ���ַ��� ����arr1
	{
		return (char*)arr1;
	}
	while (*cp)
	{
		s1 = cp;
		s2 = arr2;
		while (*s1 && *s2 && (*s1 == *s2))
		{
			s1++;
			s2++;
		}
		if (*s2 == '\0')
		{
			return (char*)cp;
		}
		cp++;
	}
	return NULL;
}
int main()
{
	char arr1[] = "abcdefg";
	char arr2[] = "bc";
	char* ret = my_strstr(arr1, arr2);
	if (ret != NULL)
	{
		printf("�ҵ���\n");
	}
	else
	{
		printf("�ҵ���\n");
	}
	return 0;
}