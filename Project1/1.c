# define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
#include<windows.h>
int main()
{
	int i = 0;
	char password[20] = { 0 };
	for (i = 0;i < 3;i++)
	{
		printf("����������п����룺\n");
		scanf("%s", password);
		if (strcmp(password, "524854") == 0)
		{
			printf("��½�ɹ�\n");
			break;
		}
		else
		{
			printf("��½ʧ��\n");
		}
	}
	if (i == 3)
		printf("�������������\n");
	return 0;
}
//int main()
//{
//	char arr1[] = "welcome to lulu!!!!!!!";
//	char arr2[] = "######################";
//	int left = 0;
//	int right = strlen(arr1) - 1;
//
//	while (left <=right)
//	{
//		arr2[left] = arr1[left];
//		arr2[right] = arr1[right];
//		printf("%s\n", arr2);
//		Sleep(1000);
//		system("cls");
//		left++;
//		right--;
//	}
//	return 0;
//}
////��֪�������飬���ֲ�������λ��
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int k ;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int left = 0;
//	int right = sz - 1;
//	printf("���������ֵ��\n");
//	scanf("%d", &k);
//	while (left < right)
//	{
//		int mid = (left + right) / 2;
//		if (arr[mid] > k)
//		{
//			right = mid + 1;
//		}
//		else if (arr[mid] < k)
//		{
//			left = mid - 1;
//		}
//		else
//		{
//			printf("�ҵ��ˣ��±�Ϊ��%d\n", mid);
//			break;
//		}
//	}
//	if (left > right)
//	{
//		printf("�Ҳ���\n");
//	}
//	return 0;
//}
//�׳����
//int main()
//{
//	int a = 0;
//	int n = 0;
//	int b = 1;
//	int c = 0;
//	scanf("%d", &a);
//	for (n = 1;n <= a;n++)
//	{
//		b *= n;
//		c += b;
//	}
//	printf("%d\n", c);
//	return 0;
//}
//int main()
//{
//	int a = 0;
//	int n = 0;
//	int b = 1;
//	scanf("%d", &n);
//	for (a = 1; a <= n; a++)
//	{
//		b *= a;
//	}
//	printf("%d\n", b);
//
//		return 0;
//}
//
//#include<stdio.h>
//int main()
//{
//	int ch = 0;
//	while ((ch = getchar()) != EOF)
//		putchar(ch);
//	return 0;
//}
////int main() 
//{int a = 1;
//while(a<=10)
//{
//	printf("%d\n", a);
//	a++;
//}
//return 0;
//
//}