#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//1.дһ���������ز����������� 1 �ĸ���
//���磺 15       0000 1111       4 �� 1
//����ԭ�ͣ�
//int  count_one_bits(unsigned int value)
//{
//    // ���� 1��λ��
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
//	printf("%d��1\n", count);
//	return 0;
//}


////2.��ȡһ�������������������е�ż��λ������λ��
////�ֱ�������������С�
//int main()
//{
//	int num =1;
//
//	int i = 31;
//	printf("%d������Ϊ:\n", num);
//	while (i >= 0)
//	{
//		printf("%d ", (num >> i) & 1);
//		i--;
//	}
//	printf("\n");
//	printf("����λ��");
//	for (i = 0;i < 31;i += 2)
//	{
//		printf("%d ", (num >> i) & 1);
//	}
//	printf("\n");
//	printf("ż��λ��");
//	for (i = 1;i <= 31;i += 2)
//	{
//		printf("%d ", (num >> i) & 1);
//	}
//	return 0;
//}


////3. ���һ��������ÿһλ��
//int main()
//{
//	int a = 0;
//	int i = 31;
//	scanf("%d", &a);
//	printf("������Ϊ��");
//	while (i >= 0)
//	{
//		printf("%d", (a >> i) & 1);
//		i--;
//	}
//	return 0;
//}

//4.���ʵ�֣�
//����int��32λ������m��n�Ķ����Ʊ���У�
//�ж��ٸ�λ(bit)��ͬ��
//�������� :
//1999 2299
//������� : 7
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


