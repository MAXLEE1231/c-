#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<assert.h>
//模拟strstr函数  arr1中有没有arr2 有的话返回  找到的起始位置，没有的话返回 NULL 
char* my_strstr(const char* arr1, const char* arr2)
{
	assert(arr1 && arr2);
	const char* s1 = NULL;
	const char* s2 = NULL;
	const char* cp = arr1;

	if (*arr2 == '\0') //如果arr2 为空字符串 返回arr1
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
		printf("找到了\n");
	}
	else
	{
		printf("找到了\n");
	}
	return 0;
}