#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>


//typedef struct S
//{
//	char arr[10];
//	int age;
//	float f;
//}S;
//
//int main()
//{
//	S s = { "abc",10,5.5f };
//	S b = { 0 };
//	char buf[100] = { 0 };
//
//	sprintf(buf, "%s %d %f", s.arr, s.age, s.f);//�Ѹ�ʽ�������ݣ�ת�����ַ��� 
//
//	printf("%s\n",buf);
//
//	sscanf(buf, "%s %d %f", b.arr, &(b.age), &(b.f));//���ַ����У���ȡһ����ʽ��������
//
//	printf("%s %d %f\n", b.arr, b.age, b.f);
//	return 0;
//}

//int main()
//{
//	FILE* pf = fopen("test.txt", "r");
//	if (pf == NULL)
//	{
//		perror("fopen");
//		return 1;
//	}
//	int a = fgetc(pf);
//	printf("%c\n", a);
//
//	fseek(pf, -2, SEEK_END);
//
//	a = fgetc(pf);
//	printf("%c\n", a);
//	a = fgetc(pf);
//	printf("%c\n", a);
//
//	int ret = ftell(pf);
//	printf("%d\n", ret);
//
//	rewind(pf);
//	a = fgetc(pf);
//	printf("%c\n", a);
//	pf = NULL;
//	return 0;
//}

//int main()
//{
//	int a = 10000;
//	FILE* pf = fopen("test.txt", "w");
//	if (pf == NULL)
//	{
//		perror("fopen");
//		return 1;
//	}
//	
//	fwrite(&a, sizeof(int), 1, pf); 
//
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}

//int main()
//{
//	FILE* pfread = fopen("test.txt", "r");
//	if (pfread == NULL)
//	{
//		perror("fopen test");
//		return 1;
//	}
//
//	FILE* pfwrite = fopen("test1.txt", "w");
//	if (pfwrite == NULL)
//	{
//		perror("fopen text1");
//		fclose(pfread);
//		pfread = NULL;
//		return 1;
//	}
//
//	//��д�ļ�
//	int ch = 0;
//	while ((ch = fgetc(pfread)) != EOF)//���ļ� �жϽ������߶�ȡʧ�� ��β�� EOF
//	{
//		fputc(ch, pfwrite); //д�ļ�
//	}
//
//	if (feof(pfread))
//	{
//		printf("�����ļ�������־����������\n");
//	}
//	else if (ferror(pfread))  //������������������Ĵ���ָʾ�� ���򷵻ط���ֵ�����򣬷����㡣
//	{
//		printf("�ļ���ȡʧ��\n");
//	}
//
//	fclose(pfread);
//	pfread = NULL;
//	fclose(pfwrite);
//	pfwrite = NULL;
//	return 0;
//}

#include <stdio.h>
#include <windows.h>
//VS2013 WIN10��������
int main()
{
	FILE* pf = fopen("test.txt", "w");
	fputs("abcdef", pf);//�Ƚ�����������������
	printf("˯��10��-�Ѿ�д�����ˣ���test.txt�ļ��������ļ�û������\n");
	Sleep(10000);
	printf("ˢ�»�����\n");
	fflush(pf);//ˢ�»�����ʱ���Ž����������������д���ļ������̣�
	//ע��fflush �ڸ߰汾��VS�ϲ���ʹ����
	printf("��˯��10��-��ʱ���ٴδ�test.txt�ļ����ļ���������\n");
	Sleep(10000);
	fclose(pf);
	//ע��fclose�ڹر��ļ���ʱ��Ҳ��ˢ�»�����
	pf = NULL;
	return 0;
}