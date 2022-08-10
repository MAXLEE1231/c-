#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>



////1.实现一个函数，打印乘法口诀表，口诀表的行数和列数自己指定，
////输入9，输出9 * 9口诀表，输入12，输出12 * 12的乘法口诀表。
//void x_y(int x)
//{
//	int i = 0;
//	for (i = 1;i <= x;i++)
//	{
//		int j = 0;
//		for (j = 1;j <= i;j++)
//		{
//			int z = i * j;
//			printf("%d * %d = %d ", j, i, z);
//		}
//		printf("\n\n");
//	}
//}
//int main()
//{
//	int x = 0;
//	scanf("%d", &x);
//	x_y(x);
//	return 0;
//}



//2.使用函数实现两个数的交换。
//void a_b(int a, int b)
//{
//	////int c = 0;
//	////c = a;
//	////a = b;
//	////b = c;
//
//	//a = a + b;
//	//b = a - b;
//	//a = a - b;
//
//	a = a ^ b;
//	b = a ^ b;
//	a = a ^ b;
//}
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d%d", &a, &b);
//	a_b(a,b);
//	return 0;
//}



////3.实现一个函数判断year是不是润年。
//void leap_year(int input)
//{
//	if ((input % 4 == 0 && input % 100 != 0) || input % 400 == 0)
//	{
//		printf("%d是闰年。",input);
//	}
//	else
//	{
//		printf("%d不是闰年。",input);
//	}
//}
//int main()
//{
//	int input = 0;
//	scanf("%d", &input);
//	leap_year(input);
//	return 0;
//}



//4.创建一个数组，
//实现函数init（）初始化数组、
//实现empty（）清空数组、
//实现reverse（）函数完成数组元素的逆置。
//要求：自己设计函数的参数，返回值。
//
////5.实现一个函数，判断一个数是不是素数。
//int main()
//{
//	int input = 0;
//	scanf("%d", &input);
//	int i = 0;
//	for (i = 2;i < input;i++)
//	{
//		if (input % i == 0)
//		{
//			printf("不是素数。");
//			break;
//		}
//	}
//	if (i == input)
//	{
//		printf("是素数。");
//	}
//	return 0;
//}



//1.递归和非递归分别实现求第n个斐波那契数。
//int main()   //非递归
//{
//	int a = 0;
//	int b = 1;
//	int c = 0;
//	int n = 0;  
//	int i = 0;
//	scanf("%d", &n);
//	for (i = 1;i < n;i++)
//	{
//		c = a + b;
//		a = b;
//		b = c;
//	}
//	printf("%d", b);
//	return 0;
//}

//int fs(int n)
//{
//	if (n <= 2)
//	{
//		return 1;
//	}
//	else
//	{
//		return fs(n - 1) + fs(n - 2);
//	}
//}
//
//int main()  
//{
//	int n = 0;
//	scanf("%d", &n);
//	int sum = fs(n);
//	printf("%d", sum);
//	return 0;
//}



////2.编写一个函数实现n^k，使用递归实现
//int n_k(int n, int k)
//{
//	if (k <= 1)
//	{
//		return n;
//	}
//	else
//	{
//		return n * n_k(n, k - 1);
//	}
//}
//int main()
//{
//	int n = 0;
//	int k = 0;
//	scanf("%d%d", &n, &k);
//	int z = n_k(n, k);
//	printf("%d", z);
//	return 0;
//}



////3. 写一个递归函数DigitSum(n)，输入一个非负整数，返回组成它的数字之和，
////例如，调用DigitSum(1729)，则应该返回1 + 7 + 2 + 9，它的和是19
//int DigitSum(int n)
//{
//	if (n < 10)
//	{
//		return n;
//	}
//	else
//	{
//		return n % 10 + DigitSum(n / 10);
//	}
//}
//
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int sum = DigitSum(n);
//	printf("%d", sum);
//	return 0;
//}



////4. 编写一个函数 reverse_string(char* string)（递归实现）
////实现：将参数字符串中的字符反向排列。
////要求：不能使用C函数库中的字符串操作函数。
//int my_strlen(char* string)
//{
//	if (*string == '\0')
//	{
//		return 0;
//	}
//	return 1 + my_strlen(string + 1);
//}
//
//
//char reverse_string(char* string)
//{
//	int sz = my_strlen(string);
//	static int i = 0;
//	char arr = { 0 };
//	if (i < sz/2)
//	{
//		arr = *(string + i);
//		*(string + i) = *(string + sz - i - 1);
//		*(string + sz - i - 1) = arr;
//		i++;
//		reverse_string(string);
//	}
//		return string;
//}
//
//int main()
//{
//	char string[] = "hello";
//    reverse_string(string);
//	printf("%s", string);
//	return 0;
//
//}



//5.递归和非递归分别实现strlen
//int my_strlen(char* arr)
//{
//	if (*arr == '\0')
//	{
//		return 0;
//	}
//	return 1 + my_strlen(arr + 1);
//}

//int my_strlen(char* arr)
//{
//	int count = 0;
//	while (*arr != '\0')
//	{
//		count++;
//		arr++;
//	}
//	return count;
//}
//int main()
//{
//	char arr[] = "hello";
//	int sz = my_strlen(arr);
//	printf("%d", sz);
//	return 0;
//}


//6.递归和非递归分别实现求n的阶乘
//int my_fac(int n)
//{
//	int i = 0;
//	int fac = 1;
//	for (i = 1;i <= n;i++)
//	{
//		fac *= i;
//	}
//	return fac;
//}

//int my_fac(int n)
//{
//	int i = n;
//	if (n > 0)
//	{
//		i = i * my_fac(n - 1);
//	}
//	if (n != 0) 
//	{
//		return i;
//	}
//	else
//	{
//		return 1;
//	}
//}
//
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int fac = my_fac(n);
//	printf("%d", fac);
//	return 0;
//}

////7.递归方式实现打印一个整数的每一位
//void my_printf(int a)
//{
//	if (a / 10 > 0)
//	{
//		int i = a % 10;
//		printf("%d\n", i);
//		my_printf(a / 10);
//	}
//	else
//	{
//		printf("%d", a);
//	}
//}
//
//int main()
//{
//	int a = 0;
//	scanf("%d", &a);
//	my_printf(a);
//	return 0;
//}
