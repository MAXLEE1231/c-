#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//int main()
//{
//	printf("%s\n", __FILE__);
//	printf("%d\n", __LINE__);
//	printf("%s\n", __DATE__);
//	printf("%s\n", __TIME__);
//	printf("%s\n", __FUNCTION__);
//
//
//	//日志写入文件
//	int i = 0;
//	FILE* pf = fopen("log.txt", "a+");
//	if (pf == NULL)
//	{
//		perror("fopen");
//		return 1;
//	}
//	for (i = 0;i < 10;i++)
//	{
//		fprintf(pf, "%s %d %s %s %d\n", __FILE__, __LINE__, __DATE__, __TIME__, i);
//	}
//	return 0;
//}



//#define M 10 //定义标识符
//#define MAX(X,Y)((X)>(Y)?(X):(Y)) //定义宏
//
//int main()
//{
//	int max = MAX(20, M);
//	printf("%d", max);
//	return 0;
//}

//#define PRINT(X,FORMAT) printf("the value of "#X" is "FORMAT"\n",X) //define 定义宏 #  的使用
//int main()
//{
//	int a = 10;
//	PRINT(a,"%d");     // printf("the value of "#X" is ""%d""\n", X)-->printf("the value of " "a" " is " "%d" "\n",a)
//	int b = 20;
//	PRINT(b,"%d");
//	int c = 30;
//	PRINT(c,"%d");
//
//
//	float f = 5.5f;
//	PRINT(f,"%f");
//	return 0;
//}



//#define CAT(X,Y) X##Y  // define 定义宏 ##  的使用
//int main()
//{
//	int lulu = 250;
//	printf("%d", CAT(lu, lu));  // printf("%d",lulu);
//	return 0;
//}



