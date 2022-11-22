#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//Add(int x, int y)
//{
//	int z = 0;
//	z = x + y;
//	return z;
//}
//
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int sum=Add(a, b);
//
//	printf("%d\n", sum);
//	return 0;
//}

#include<string.h>
//int main()
//{
//	char arr1[] = "bit";
//	char arr2[20] = "########";
//	strcpy(arr2, arr1);
//	printf("%s\n", arr2);
//	//strlen - string length - 字符串长度有关
//	return 0;
//}

//int main()
//{
//	char arr[] = "hello world";
//	memset(arr, '*', 5);
//	//memesrt(void * ptr,int value,size_t num);
//	printf("%s\n", arr);
//	return 0;
//}

//自定义函数实现求两个数的极大值
//int MAX(int x, int y)
//{
//	int z = 0;
//	if (x > y)
//	{
//		z = x;
//	}
//	else
//	{
//		z = y;
//	}
//	return z;
//}
//int main()
//{
//	int a = 30;
//	int b = 20;
//	int max = MAX(a, b);
//	printf("较大值为%d\n", max);
//	return 0;
//}

////不能完成交换任务
//void Swap1(int x, int y)
//{
//	int temp = 0;
//	temp = x;
//	x = y;
//	y = temp;
//}

void Swap2(int* pa, int* pb)
{
	int temp = 0;
	temp = *pa;
	*pa = *pb;
	*pb = temp;
}
int main()
{
	int a = 10;
	int b = 20;
	printf("a=%d,b=%d\n", a, b);
	Swap2(&a, &b);
	printf("a=%d,b=%d\n", a, b);
	return 0;
}