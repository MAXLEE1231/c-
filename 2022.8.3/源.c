#define _CRT_SECURE_NO_WARNINGS a
#include<stdio.h>
#include<string.h>
//�ػ�����
int main()
{
	char input[20] = { 0 };
	system("shutdown -s -t 60");
again:
	printf("��ע��!��ĵ���һ�����ڹػ���������룺��������ȡ���ػ�\n�����룺");
	scanf( "%s",input );
	if (strcmp(input, "������") == 0)
	{
		system("shutdown -a");
	}
	else
	{
		goto again;
	}
	return 0;
}