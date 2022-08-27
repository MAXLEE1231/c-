#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//int main()
//{
//	FILE* pf = fopen("test.dat", "w");
//	if (pf == NULL)
//	{
//		perror("fopen");
//		return 1;
//	}
//
//	fputc('L', pf);
//	fputc('u', pf);
//	fputc('L', pf);
//	fputc('u', pf);
//
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}

//int main()
//{
//	fputc('l', stdout);
//	fputc('l', stdout);
//	fputc('l', stdout);
//	return 0;
//}

//int main()
//{
//	FILE* pf = fopen("test.dat", "r");
//	if (pf == NULL)
//	{
//		perror("fopen");
//		return 1;
//	}
//
//	int ret = fgetc(pf);
//	printf("%c", ret);
//    ret = fgetc(pf);
//	printf("%c", ret);	
//    ret = fgetc(pf);
//	printf("%c", ret);
//
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}


//int main()
//{
//	FILE* pf = fopen("test.dat", "w");
//	if (pf == NULL)
//	{
//		perror("fopen");
//		return 1;
//	}
//
//	fputs("abdcd\n", pf);
//	fputs("efghi\n", pf);
//
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}


//int main()
//{
//	char arr[10] = { 97 };
//	FILE* pf = fopen("test.dat", "r");
//	if (pf == NULL)
//	{
//		perror("fopen");
//		return 1;
//	}
//	fgets(arr,3, pf);
//	printf("%s\n",arr);
//	fgets(arr, 3, pf);
//	printf("%s\n", arr);
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}


//typedef struct S
//{
//	char arr[10];
//	int num;
//	float sc;
//}S;

//int main()
//{
//	S s = { "abcdef",10,5.5f };
//	FILE* pf = fopen("test.dat", "w");
//	if (pf == NULL)
//	{
//		perror("fopen");
//		return 1;
//	}
//
//	fprintf(pf, "%s %d %f", s.arr, s.num, s.sc);
//
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}

//int main()
//{
//	S s = { 0 };
//	FILE* pf = fopen("test.dat", "r");
//	if (pf == NULL)
//	{
//		perror("fopen");
//		return 1;
//	}
//
//	fscanf(pf, "%s %d %f", s.arr, &(s.num), &(s.sc));
//
//	printf("%s %d %f", s.arr, s.num, s.sc);
//
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}

typedef struct S
{
	char arr[10];
	int num;
	float sc;
}S;


//int main()
//{
//	S s = { "abcdef",10,5.5f };
//	FILE* pf = fopen("test.dat", "w");
//	if (pf == NULL)
//	{
//		perror("fopen");
//		return 1;
//	}
//	
//	fwrite(&s, sizeof(S), 1, pf);
//
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}

int main()
{
	S s = {0};
	FILE* pf = fopen("test.dat", "r");
	if (pf == NULL)
	{
		perror("fopen");
		return 1;
	}

	fread(&s, sizeof(S), 1, pf);
	printf("%s %d %f", s.arr, s.num, s.sc);

	fclose(pf);
	pf = NULL;
	return 0;
}