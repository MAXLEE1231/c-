#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<time.h>
#include<string.h>

////打印100~200之间的素数
//int is_prime(int i)
//{
//	int n = 0;
//	for (n = 2;n < i;n++)
//	{
//		if (i % n == 0)
//		{
//			return 0;
//		}
//	}
//	return 1;
//}
//
//int main()
//{
//	int i = 0;
//	for (i = 100;i <= 200;i++)
//	{
//		if (is_prime(i) == 1)
//		{
//			printf("%d ", i);
//		}
//	}
//	return 0;
//}

// 输出乘法口诀表
int main()
{
	int x = 0;
	for (x = 1;x < 10;x++)
	{
		int y = 0;
		for (y = 1;y <= x;y++)
		{
			int z = x * y;
			printf("%d * %d = %d  ", y, x, z);
		}
		printf("\n\n");
	}
}

////判断1000年---2000年之间的闰年
//int main()
//{
//	int n = 0;
//	for (n = 1000;n <= 2000;n++)
//	{
//		if ((n % 4 == 0 && n % 10 != 0) || n % 400 == 4)
//		{
//			printf("%d ", n);
//		}
//	}
//	return 0;
//}

////给定两个整形变量的值，将两个值的内容进行交换。
//int main()
//{
//	int x = 10;
//	int y = 5;
//	//int z = 0;
//	//z = x;
//	//x = y;
//	//y = z;
//
//	//x = x + y;
//	//y = x - y;
//	//x = x - y;
//
//	x = x ^ y;
//	y = x ^ y;
//	x = x ^ y;
//	printf("x=%d,y=%d", x, y);
//	return 0;
//}

////求10 个整数中最大值
//void max(int arr[], int sz)
//{
//	int i = 0;
//	for (i = 0;i < sz - 1; i++)
//	{
//		if (arr[i] > arr[i + 1])
//		{
//			arr[i + 1] = arr[i];
//		}
//	}
//	printf("最大值为：%d", arr[sz - 1]);
//}
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,11,8,9 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	max(arr, sz);
//	return 0;
//}

////将三个数按从大到小输出
//int main()
//{
//	int x = 10;
//	int y = 5;
//	int z = 15;
//	int n = 0;
//	if (x < y)
//	{
//		n = x;
//		x = y;
//		y = n;
//	}
//	if (x < z)
//	{
//		n = x;
//		x = z;
//		z = n;
//	}
//	if (y < z)
//	{
//		n = y;
//		y = z;
//		z = n;
//	}
//	printf("%d %d %d", x, y, z);
//	return 0;
//}

//求两个数的最大公约数。
//int main()
//{
//	int x = 0;
//	int y = 0;
//	scanf("%d%d", &x, & y);
//	int min = (x < y ? x : y);
//	for (min = (x < y ? x : y);min > 0;min--)
//	{
//		if (x % min == 0 && y % min == 0)
//		{
//			printf("%d", min);
//			break;
//		}
//	}
//	return 0;
//}

////辗转相除法
//int main()
//{
//	int x = 0;
//	int y = 0;
//	int z = 0;
//	scanf("%d%d", &x, &y);
//	z = x % y;
//	while (z)
//	{
//		x = y;
//		y = z;
//		z = x % y;
//	}
//	printf("%d", y);
//}

////将数组A中的内容和数组B中的内容进行交换。（数组一样大）
//int main()
//{
//	int arra[5] = { 1,2,3,4,5 };
//	int arrb[5] = { 5,4,3,2,1 };
//	int arrc[5] = { 0 };
//	int sz = sizeof(arra) / sizeof(arra[0]);
//	int i = 0;
//	for (i = 0;i < sz;i++)
//	{
//		arrc[i] = arra[i];
//		arra[i] = arrb[i];
//		arrb[i] = arrc[i];
//	}
//	return 0;
//}

//计算1/1-1/2+1/3-1/4+1/5 …… + 1/99 - 1/100 的值。
//float math()
//{
//	float b = 0;
//	int i = 0;
//	for (i = 1; i <= 100; i++)
//	{
//		if (i % 2 == 0)
//		{
//			b -= 1 / i;
//		}
//		else
//		{
//			b += 1 / i;
//		}
//	}
//}
//int main()
//{
//	float a = 0;
//	a = math();
//	printf("%f", a);
//	return 0;
//}

// 编写程序数一下 1到 100 的所有整数中出现多少个数字9。
//int main()
//{
//	int count = 0;
//	int i = 0;
//	for (i = 1;i <= 100;i++)
//	{
//		if ((i % 10 == 9) || ((i / 10 )% 10 == 9))
//		{
//			count++;
//		}
//	}
//	printf("%d", count);
//	return 0;
//}

////水仙花数
//int main()
//{
//	int i = 0;
//	for (i = 100;i <= 999;i++)
//	{
//		if (pow (i / 100, 3) + pow(i / 10 % 10, 3) + pow(i % 10, 3) == i)
//		{
//			printf("%d ", i);
//		}
//	}
//	return 0;
//}

////求Sn=a+aa+aaa+aaaa+aaaaa的前5项之和，其中a是一个数字，
//int main()
//{
//	int sn = 0;
//	int a = 0;
//	scanf("%d", &a);
//	int i = 0;
//	int n = 0;
//	for (i = 1;i <= 5;i++)
//	{
//		n = n * 10 + a;
//		sn += n;
//	}
//	printf("%d", sn);
//	return 0;
//}

////完成猜数字游戏。1-100
//void menu()
//{
//	printf("************************\n");
//	printf("******* 1.play *********\n");
//	printf("******* 2.exit *********\n");
//	printf("************************\n");
//}
//
//void game()
//{
//	int a = rand() % 100 + 1;
//	int b = 0;
//	while (1)
//	{
//		printf("请输入：");
//		scanf("%d", &b);
//		if (a > b)
//		{
//			printf("猜小了。\n");
//		}
//		else if (a < b)
//		{
//			printf("猜大了。\n");
//		}
//		else
//		{
//			printf("猜对了。\n");
//				break;
//		}
//	}
//}
//
//int main()
//{
//	int input = 0;
//	srand((unsigned int)time(NULL));
//	do
//	{
//		menu();
//		printf("请输入：");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 1:
//			game();
//		case 0:
//			break;
//		default:
//			printf("输入错误，请重新输入。\n");
//		}
//	} while (input);
//	return 0;
//}

////写代码可以在整型有序数组中查找想要的数字，
////找到了返回下标，找不到返回 - 1.（折半查找）
//int find(int arr[], int a, int sz)
//{
//	int left = 0;
//	int right = sz -1;
//	
//	while (left<right)
//	{
//		int mid = (left + right) / 2;
//		if (a > arr[mid])
//		{
//			left = mid;
//		}
//		else if (a < arr[mid])
//		{
//			right = mid;
//		}
//		else
//		{
//			return mid;
//		}
//	}
//	return -1;
//}
//
//int main()
//{
//	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9};
//	int a = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]); 
//	int i = 0;
//	printf("请输入查找数字：");
//	scanf("%d", &a);
//    i = find(arr, a, sz);
//	printf("下标为：%d", i);
//	return 0;
//}

////编写代码模拟三次密码输入的场景。
////最多能输入三次密码，密码正确，提示“登录成功”, 密码错误，
////可以重新输入，最多输入三次。三次均错，则提示退出程序。
//int main()
//{
//	char arr[] = { 0 };
//	int i = 0;
//	for (i = 0;i < 3;i++)
//	{
//		printf("请输入密码：\n");
//		scanf("%s", arr);
//		if (strcmp(arr, "961231") == 0)
//		{
//			printf("登陆成功\n");
//			break;
//		}
//		else
//		{
//			printf("密码错误。\n");
//		}
//	}
//	if (i == 3)
//	{
//		printf("三次输入都错误，即将退出。");
//	}
//	return 0;
//}

////编写一个程序，可以一直接收键盘字符，
////如果是小写字符就输出对应的大写字符，
////如果接收的是大写字符，就输出对应的小写字符，
////如果是数字不输出。
//int main()
//{
//	char a = 0;
//	scanf("%c", &a);
//	if (a >= 65 && a <= 89)
//	{
//		a += 32;
//	}
//	else if (a <= 122, a >= 97)
//	{
//		a -= 32;
//	}
//	printf("%c", a);
//	return 0;
//}


