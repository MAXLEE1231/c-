#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>



////1.ʵ��һ����������ӡ�˷��ھ����ھ���������������Լ�ָ����
////����9�����9 * 9�ھ�������12�����12 * 12�ĳ˷��ھ���
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



//2.ʹ�ú���ʵ���������Ľ�����
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



////3.ʵ��һ�������ж�year�ǲ������ꡣ
//void leap_year(int input)
//{
//	if ((input % 4 == 0 && input % 100 != 0) || input % 400 == 0)
//	{
//		printf("%d�����ꡣ",input);
//	}
//	else
//	{
//		printf("%d�������ꡣ",input);
//	}
//}
//int main()
//{
//	int input = 0;
//	scanf("%d", &input);
//	leap_year(input);
//	return 0;
//}



//4.����һ�����飬
//ʵ�ֺ���init������ʼ�����顢
//ʵ��empty����������顢
//ʵ��reverse���������������Ԫ�ص����á�
//Ҫ���Լ���ƺ����Ĳ���������ֵ��
//
////5.ʵ��һ���������ж�һ�����ǲ���������
//int main()
//{
//	int input = 0;
//	scanf("%d", &input);
//	int i = 0;
//	for (i = 2;i < input;i++)
//	{
//		if (input % i == 0)
//		{
//			printf("����������");
//			break;
//		}
//	}
//	if (i == input)
//	{
//		printf("��������");
//	}
//	return 0;
//}



//1.�ݹ�ͷǵݹ�ֱ�ʵ�����n��쳲���������
//int main()   //�ǵݹ�
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



////2.��дһ������ʵ��n^k��ʹ�õݹ�ʵ��
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



////3. дһ���ݹ麯��DigitSum(n)������һ���Ǹ����������������������֮�ͣ�
////���磬����DigitSum(1729)����Ӧ�÷���1 + 7 + 2 + 9�����ĺ���19
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



////4. ��дһ������ reverse_string(char* string)���ݹ�ʵ�֣�
////ʵ�֣��������ַ����е��ַ��������С�
////Ҫ�󣺲���ʹ��C�������е��ַ�������������
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



//5.�ݹ�ͷǵݹ�ֱ�ʵ��strlen
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


//6.�ݹ�ͷǵݹ�ֱ�ʵ����n�Ľ׳�
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

////7.�ݹ鷽ʽʵ�ִ�ӡһ��������ÿһλ
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
