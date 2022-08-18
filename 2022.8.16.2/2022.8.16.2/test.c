#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<string.h>


//void bubble_sort(int arr[], int sz)//√∞≈›≈≈–Ú
//{
//	int i = 0;
//	for (i = 0;i < sz - 1;i++)
//	{
//		int j = 0;
//		for (j = 0;j < sz - 1 - i;j++)
//		{
//			if (arr[j] > arr[j + 1])
//			{
//				int tmp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = tmp;
//			}
//		}
//	}
//}
//void print_arr(int arr[], int sz)
//{
//	int i = 0;
//	for (i = 0;i < sz;i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	printf("\n");
//}
//int main()
//{
//	int arr[10] = { 9,8,7,6,5,4,3,2,1,0 };
//	print_arr(arr, sizeof(arr) / sizeof(arr[0]));
//	bubble_sort(arr,sizeof(arr)/sizeof(arr[0]));
//	print_arr(arr, sizeof(arr) / sizeof(arr[0]));
//	return 0;
//}

//                                                //qsort()≈≈–Ú
////Ω·ππÃÂ≈≈–Ú
//struct Stu
//{
//	char name[20];
//	int age;
//};
//
////int cmp_str_age(const char* s1, const char* s2)//∞¥’’ƒÍ¡‰≈≈–Ú
////{
////	return ((struct Stu*)s1)->age - ((struct Stu*)s2)->age;
////}
//
//int cmp_str_name(const char* s1, const char* s2)//∞¥’’√˚◊÷≈≈–Ú
//{
//	return strcmp(((struct Stu*)s1)->name, ((struct Stu*)s1)->name);
//}
//void test()
//{
//	struct Stu s[] = { {"zhang",30},{"li",40},{"wang",20} };
//	//qsort(s, sizeof(s) / sizeof(s[0]), sizeof(s[0]), cmp_str_age);//∞¥’’ƒÍ¡‰≈≈–Ú
//	qsort(s, sizeof(s) / sizeof(s[0]), sizeof(s[0]), cmp_str_name);//∞¥’’√˚◊÷≈≈–Ú
//
//}
//int main()
//{
//	test();
//	return 0;
//}




//int main()
//{
//	int a[] = { 1,2,3,4 };              
//	printf("%d\n", sizeof(a));             //16
//	printf("%d\n", sizeof(a + 0));         //4
//	printf("%d\n", sizeof(*a));            //4
//	printf("%d\n", sizeof(a + 1));         //4
//	printf("%d\n", sizeof(a[1]));          //4
//	printf("%d\n", sizeof(&a));            //4
//	printf("%d\n", sizeof(*&a));           //16
//	printf("%d\n", sizeof(&a + 1));        //4
//	printf("%d\n", sizeof(&a[0]));         //4
//	printf("%d\n", sizeof(&a[0] + 1));     //4
//	return 0;
//}

int main()
{
	char arr[] = { 'a','b','c','d','e','f' };
	printf("%d\n", sizeof(arr));
	printf("%d\n", sizeof(arr + 0));
	printf("%d\n", sizeof(*arr));
	printf("%d\n", sizeof(arr[1]));
	printf("%d\n", sizeof(&arr));
	printf("%d\n", sizeof(&arr + 1));
	printf("%d\n\n", sizeof(&arr[0] + 1));
	printf("%d\n", strlen(arr));
	printf("%d\n", strlen(arr + 0));
	printf("%d\n", strlen(*arr));
	printf("%d\n", strlen(arr[1]));
	printf("%d\n", strlen(&arr));
	return 0;
}


//int main()  
//{
//	int a[5] = { 1, 2, 3, 4, 5 };
//	int* ptr = (int*)(&a + 1);
//	printf("%d,%d", *(a + 1), *(ptr - 1));
//	return 0;
//}