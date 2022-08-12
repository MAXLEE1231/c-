#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

////判断当前机器字节序
//int check_sys()
//{
//	int i = 1;
//	char* p = (char*)&i;//强制转换成char型指针，4字节变成1字节
//	return *p;
//}
//
// 
//int main()
//{
//	int a = check_sys();
//	if (a == 1)
//	{
//		printf("小端\n");
//	}
//	else
//	{
//		printf("大端\n");
//	}
//	return 0;
//}

//int main()
//{
//	char a = -1;
//	signed char b = -1;
//	unsigned char c = -1;
//	printf("a=%d,b=%d,c=%d", a, b, c);
//		return 0;
//}

//int main()
//{
//	unsigned int i;
//	for (i = 9; i >= 0; i--) {
//		printf("%u\n", i);
//	}
//	///*int i = -20;*/
//	//unsigned int j = -10;
//	//printf("%d",  j);
//	return 0;
//}

//int main()
//{
//	char a[1000];
//	int i;
//	for (i = 0; i < 1000; i++)
//	{
//		a[i] = -1 - i;
//	}
//	printf("%d", strlen(a));
//	return 0;
//}

//int main()
//{
//	char a = -128;
//	printf("%u\n", a);
//	return 0;
//}

//int main()
//{
//	char a = 128;
//	printf("%u\n", a);
//	return 0;
//}

//int main()
//{
//	int i = -20;
//	unsigned int j = 10;
//	printf("%d\n", i + j);
//	return 0;
//}