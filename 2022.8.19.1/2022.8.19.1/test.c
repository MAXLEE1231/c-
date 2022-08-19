#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
#include<assert.h>


////strtok函数 字符串分割函数   
//int main()
//{
//	char arr[] = "maxlee@163.com";
//	char* p = "@.";
//	char tmp[20] = { 0 };
//	strcpy(tmp, arr);
//	char* ret = NULL;
//	for (ret = strtok(tmp, p);*ret != '\0';ret = strtok(NULL, p))
//	{
//		printf("%s\n", ret);
//	}
//	//strtok(tmp, p);
//	//strtok(NULL, p);// 继续分割 传入 NULL ,会记录分割位置 ，继续分割
//	//strtok(NULL, p);
//
//	return 0;
//}

////内存函数  memcpy 拷贝不重叠的内存
//void* my_memcpy(void* dest, const void* src, size_t num)
//{
//	void* ret = dest;
//	assert(dest && src);
//	while (num--)
//	{
//		*(char*)dest = *(char*)src;
//		dest = (char*)dest + 1;
//		str = (char*)src + 1;
//	}
//	return ret;
//}
//
//int main()
//{
//	int arr1[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int arr2[20] = { 0 };
//	my_memcpy(arr2, arr1, 5 * sizeof(int));//拷贝前五个字符
//	return 0;
//}


////memmove 可以拷贝重叠的内存
//void* my_memmove(char* dest, const char* src, size_t num)
//{
//	char* ret = dest;
//	assert(dest && src);
//	if (dest < src)
//	{
//		//前->后
//		while (num--)
//		{
//			*(char*)dest = *(char*)src;
//			dest = (char*)dest + 1;
//			src = (char*)src + 1;
//		}
//	}
//	else
//	{
//		while (num--)
//		{
//			*((char*)dest + num) = *((char*)src + num);
//		}
//	}
//	return ret;
//}
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	my_memmove(arr, arr+2, 5 * sizeof(int));
//	return 0;
//}


////memcmp  内存比较
//int my_memcmp(const void* ptr1, const char* ptr2, size_t num)
//{
//	 
//}
//int main()
//{
//	float arr1[] = { 1.0,2.0,3.0,4.0 };
//	float arr2[] = { 1.0,3.0 };
//	int ret = my_memcmp(arr1, arr2, 1 * sizeof(float));
//	return 0;
//}


//memset
int main()
{
	int arr[10] = { 0 };
	memset(arr, 1, 20);  //以字节为单位设置内存
	return 0;
}