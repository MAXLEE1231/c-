#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
#include<assert.h>

//ģ��ʵ��strlen
int my_strlen(const char* arr)
{
	assert(arr != NULL);
	int count = 0;
	while (*arr++ != '\0')
	{
		count++;
	}
	return count;
}

int main()
{
    char arr[] = "hello";
	int sz = my_strlen(arr);
	printf("�ַ�������Ϊ��%d\n", sz);
	return 0;
}