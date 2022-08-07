#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//int main()
//{
//	int a = 0;
//	int x = 3;
//	int y = 5;
//	printf("交换前：x=%d,y=%d\n", x, y);
	//交换
	//a = x;
	//x = y;
	//y = a;
	//不考虑溢出，不借助其他变量，交换 
	//x = x + y;
	//y = x - y;
	//x = x - y;

	//考虑溢出,异或法
	//x = x ^ y;
	//y = x ^ y;
	//x = x ^ y;
	//printf("交换后：x=%d,y=%d\n", x, y);

	//return 0;
    //}

int main()
{
	//int arr[] = { 1,2,3,4,5,1,2,3,4,6,4,6,4,3,1,52,334};
	//int i = 0;
	//int sz = sizeof(arr) / sizeof(arr[0]);
	//printf("出现一次数字有：");
	//for (i = 0;i < sz;i++)
	//{
	//	int count = 0;
	//	int j = 0;
	//	for (j = 0;j < sz; j++)
	//	{
	//		if (arr[i] == arr[j])
	//		{
	//			count++;
	//		}
	//	}
	//	if (count == 1)
	//	{
	//		printf("%d ", arr[i]);
	//	}
	//}
	return 0;
}