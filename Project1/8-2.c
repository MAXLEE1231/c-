#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main()
{
	int age ;
	scanf("%d", &age);
	if (age < 18)
	{
		printf("δ����\n");
	}
	else if (18 <= age && age <= 28)
	{
		printf("����\n");
	}
	else
	{
		printf("����\n");
	}
}