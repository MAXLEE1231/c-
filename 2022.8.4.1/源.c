#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
#include<time.h>
#include<math.h>


//�ж�����
//int is_prime(int n)
//{
//	int a = 0;
//	for (a = 2;a < n;a++)//for (a = 2;a <= sqrt(n);a++)
//	{
//		if (n % a == 0)
//			return 0;
//	}
//	return 1;
//}


//��ӡ100-200������
//int main()
//{
//	int i = 0;
//	for(i=100 ;i <= 200;i++)
//	{
//		if (is_prime(i) == 1)
//			printf("%d ", i);
//	}
//	return 0;
//}



//�������֣��ж��Ƿ�Ϊ����
//int main()
//{
//	int i = 0;
//	scanf("%d", &i);
//	if (is_prime(i) == 1)
//		printf("��������\n");
//	else
//		printf("����������\n");
//	return 0;
//}


//�ж�����
//int is_leap_year(int y)
//{
//	if ((y % 4 == 0 && y % 100 != 0) || (y % 400 == 0))
//		return 1;
//	else
//		return 0;
//}


//int main()
//{
//	int year = 0;
//	for (year = 1000;year <= 2000;year++)
//	{
//		if (1 == is_leap_year(year))
//		{
//			printf("%d ", year);
//		}
//	}
//	return 0;
//}

//���ֲ��� ��������
//int binary_search(int arr[], int k,int sz)
//{
//	int left = 0;
//	int right =  sz - 1;
//	while (left <= right)
//	{
//		int mid = (left + right) / 2;
//
//		if (arr[mid] < k)
//		{
//			left = mid + 1;
//		}
//		else if (arr[mid] > k)
//		{
//			right = mid - 1;
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
//	int arr[] = { 1,2,3,4,5,6,7,8,9 };
//	int k = 7;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int ret = binary_search(arr, k,sz);
//	if (ret == -1)
//	{
//		printf("�Ҳ�����\n");
//	}
//	else
//	{
//		printf("�ҵ���,�±�Ϊ%d��\n", ret);
//	}
//	return 0;
//}


//void Add(int* b)
//{
//	(*b)++;
//}
//
//
//int main()
//{
//	int a = 0;
//	Add(&a);
//	printf("%d\n", a);
//	return 0;
//}



//�ݹ�

//void print(int a)
//{
//	if (a > 9)
//	{
//		print(a / 10);
//	}
//	printf("%d  ", a % 10);
//}
//int main()
//{
//	unsigned int a = 0;
//	scanf("%d", &a);
//	print(a);
//	return 0;
//}


//�ݹ�ʵ��strlen�����ַ�������
//int my_strlen(char* str)
//{
//	if (*str == '\0')
//	{
//		return 0;
//	}
//	else
//	{
//		return 1 + my_strlen(str + 1);
//	}
//}
//int main()
//{
//	char arr[] = ("lulu");
//	int len = my_strlen(arr);
//	printf("len=%d\n", len);
//}

//forѭ������׳�
//int Fac(int n)
//{
//	int i = 0;
//	int ret = 1;
//	for (i = 1;i <= n;i++)
//	{
//		ret*=i;
//	}
//	return ret;
//}


//�ݹ����׳�
//int Fac(int n)
//{
//	if (n <= 1)
//		return 1;
//	else
//	{
//		return n * Fac(n - 1);
//	}
//}
//
//int main()
//{
//	int n = 0;
//	int ret = 0;
//	scanf("%d", &n);
//	ret = Fac(n);
//	printf("%d\n", ret);
//	return 0;
//}

//�ݹ����쳲�������  �������� 
//int Flb(int n)
//{
//	if (n <= 2)
//		return 1;
//	else
//	{
//		return Flb(n - 1) + Flb(n - 2);
//	}
//}

//ѭ������쳲������� �ٶȿ�
//int Flb(int n)
//{
//	int a = 1;
//	int b = 1;
//	int c = 1;
//
//	while (n > 2)
//	{
//		c = a + b;
//		a = b;
//		b = c;
//		n--;
//	}
//	return c;
//}
//
//int main()
//{
//	int n = 0;
//	int ret = 0;
//	scanf("%d", &n);
//	ret = Flb(n);
//	printf("%d\n", ret);
//	return 0;
//}