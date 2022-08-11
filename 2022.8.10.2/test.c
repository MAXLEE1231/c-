#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
#include<assert.h>

//模拟实现strlen
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
	printf("字符串长度为：%d\n", sz);
	return 0;
}