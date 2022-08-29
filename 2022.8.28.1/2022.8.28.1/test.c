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
//	sprintf(buf, "%s %d %f", s.arr, s.age, s.f);//把格式化的数据，转换成字符串 
//
//	printf("%s\n",buf);
//
//	sscanf(buf, "%s %d %f", b.arr, &(b.age), &(b.f));//从字符串中，读取一个格式化的数据
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
//	//读写文件
//	int ch = 0;
//	while ((ch = fgetc(pfread)) != EOF)//读文件 判断结束或者读取失败 结尾返 EOF
//	{
//		fputc(ch, pfwrite); //写文件
//	}
//
//	if (feof(pfread))
//	{
//		printf("遇到文件结束标志，正常结束\n");
//	}
//	else if (ferror(pfread))  //如果设置了与流关联的错误指示符 ，则返回非零值。否则，返回零。
//	{
//		printf("文件读取失败\n");
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
//VS2013 WIN10环境测试
int main()
{
	FILE* pf = fopen("test.txt", "w");
	fputs("abcdef", pf);//先将代码放在输出缓冲区
	printf("睡眠10秒-已经写数据了，打开test.txt文件，发现文件没有内容\n");
	Sleep(10000);
	printf("刷新缓冲区\n");
	fflush(pf);//刷新缓冲区时，才将输出缓冲区的数据写到文件（磁盘）
	//注：fflush 在高版本的VS上不能使用了
	printf("再睡眠10秒-此时，再次打开test.txt文件，文件有内容了\n");
	Sleep(10000);
	fclose(pf);
	//注：fclose在关闭文件的时候，也会刷新缓冲区
	pf = NULL;
	return 0;
}