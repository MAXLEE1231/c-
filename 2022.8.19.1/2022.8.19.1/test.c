#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
#include<assert.h>


////strtok���� �ַ����ָ��   
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
//	//strtok(NULL, p);// �����ָ� ���� NULL ,���¼�ָ�λ�� �������ָ�
//	//strtok(NULL, p);
//
//	return 0;
//}

////�ڴ溯��  memcpy �������ص����ڴ�
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
//	my_memcpy(arr2, arr1, 5 * sizeof(int));//����ǰ����ַ�
//	return 0;
//}


////memmove ���Կ����ص����ڴ�
//void* my_memmove(char* dest, const char* src, size_t num)
//{
//	char* ret = dest;
//	assert(dest && src);
//	if (dest < src)
//	{
//		//ǰ->��
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


////memcmp  �ڴ�Ƚ�
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
	memset(arr, 1, 20);  //���ֽ�Ϊ��λ�����ڴ�
	return 0;
}