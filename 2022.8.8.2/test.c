#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<time.h>
#include<string.h>

////��ӡ100~200֮�������
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

// ����˷��ھ���
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

////�ж�1000��---2000��֮�������
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

////�����������α�����ֵ��������ֵ�����ݽ��н�����
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

////��10 �����������ֵ
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
//	printf("���ֵΪ��%d", arr[sz - 1]);
//}
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,11,8,9 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	max(arr, sz);
//	return 0;
//}

////�����������Ӵ�С���
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

//�������������Լ����
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

////շת�����
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

////������A�е����ݺ�����B�е����ݽ��н�����������һ����
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

//����1/1-1/2+1/3-1/4+1/5 ���� + 1/99 - 1/100 ��ֵ��
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

// ��д������һ�� 1�� 100 �����������г��ֶ��ٸ�����9��
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

////ˮ�ɻ���
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

////��Sn=a+aa+aaa+aaaa+aaaaa��ǰ5��֮�ͣ�����a��һ�����֣�
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

////��ɲ�������Ϸ��1-100
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
//		printf("�����룺");
//		scanf("%d", &b);
//		if (a > b)
//		{
//			printf("��С�ˡ�\n");
//		}
//		else if (a < b)
//		{
//			printf("�´��ˡ�\n");
//		}
//		else
//		{
//			printf("�¶��ˡ�\n");
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
//		printf("�����룺");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 1:
//			game();
//		case 0:
//			break;
//		default:
//			printf("����������������롣\n");
//		}
//	} while (input);
//	return 0;
//}

////д����������������������в�����Ҫ�����֣�
////�ҵ��˷����±꣬�Ҳ������� - 1.���۰���ң�
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
//	printf("������������֣�");
//	scanf("%d", &a);
//    i = find(arr, a, sz);
//	printf("�±�Ϊ��%d", i);
//	return 0;
//}

////��д����ģ��������������ĳ�����
////����������������룬������ȷ����ʾ����¼�ɹ���, �������
////�����������룬����������Ρ����ξ�������ʾ�˳�����
//int main()
//{
//	char arr[] = { 0 };
//	int i = 0;
//	for (i = 0;i < 3;i++)
//	{
//		printf("���������룺\n");
//		scanf("%s", arr);
//		if (strcmp(arr, "961231") == 0)
//		{
//			printf("��½�ɹ�\n");
//			break;
//		}
//		else
//		{
//			printf("�������\n");
//		}
//	}
//	if (i == 3)
//	{
//		printf("�������붼���󣬼����˳���");
//	}
//	return 0;
//}

////��дһ�����򣬿���һֱ���ռ����ַ���
////�����Сд�ַ��������Ӧ�Ĵ�д�ַ���
////������յ��Ǵ�д�ַ����������Ӧ��Сд�ַ���
////��������ֲ������
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


