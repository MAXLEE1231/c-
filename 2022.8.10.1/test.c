#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//1.写一个函数返回参数二进制中 1 的个数
//比如： 15       0000 1111       4 个 1
//程序原型：
//int  count_one_bits(unsigned int value)
//{
//    // 返回 1的位数
//}
//int count_one_bits(unsigned int value)
//{
//	int n = 0;
//	while (value > 0)
//	{
//		if ((value & 1) == 1)
//		{
//			n++;
//		}
//		value = value >> 1;
//	}
//	return n;
//
//	//int n = 0;
//	//while (value > 0)
//	//{
//	//
//	//	if (value%2 == 1)
//	//	{
//	//		n++;
//	//	}
//	//	value /= 2;
//	//}
//	//return n;
//}
//
//int main()
//{
//	unsigned int a = 0;
//	scanf("%d", &a);
//	int count = count_one_bits(a);
//	printf("%d个1\n", count);
//	return 0;
//}


////2.获取一个数二进制序列中所有的偶数位和奇数位，
////分别输出二进制序列。
//int main()
//{
//	int num =1;
//
//	int i = 31;
//	printf("%d二进制为:\n", num);
//	while (i >= 0)
//	{
//		printf("%d ", (num >> i) & 1);
//		i--;
//	}
//	printf("\n");
//	printf("奇数位：");
//	for (i = 0;i < 31;i += 2)
//	{
//		printf("%d ", (num >> i) & 1);
//	}
//	printf("\n");
//	printf("偶数位：");
//	for (i = 1;i <= 31;i += 2)
//	{
//		printf("%d ", (num >> i) & 1);
//	}
//	return 0;
//}


////3. 输出一个整数的每一位。
//int main()
//{
//	int a = 0;
//	int i = 31;
//	scanf("%d", &a);
//	printf("二进制为：");
//	while (i >= 0)
//	{
//		printf("%d", (a >> i) & 1);
//		i--;
//	}
//	return 0;
//}

//4.编程实现：
//两个int（32位）整数m和n的二进制表达中，
//有多少个位(bit)不同？
//输入例子 :
//1999 2299
//输出例子 : 7
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int i = 31;
//	int count = 0;
//	scanf("%d%d", &a, &b);
//	while (i >= 0)
//	{
//		if (((a >> i) & 1) != ((b >> i) & 1))
//		{
//			count++;
//		}
//	}
//	printf("%d", count);
//	return 0;
//}

//int main()
//{
//	int a = 0;
//	int b = 0;
//	int i = 31;
//	int count = 0;
//	scanf("%d%d", &a, &b);
//	int c = a ^ b;
//	for (i = 31;i >= 0;i--)
//	{
//		if (((c >> i) & 1) == 1)
//		{
//			count++;
//		}
//	}
//	printf("%d", count);
//	return 0;
//}


