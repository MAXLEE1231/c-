#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main()
{
	int age ;
	scanf("%d", &age);
	if (age < 18)
	{
		printf("未成年\n");
	}
	else if (18 <= age && age <= 28)
	{
		printf("青年\n");
	}
	else
	{
		printf("厉害\n");
	}
}