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
// 当实参传递给形参时
// 形参其实是实参的一份临时拷贝
// 对形参的修改是不会改变实参的
// 
//void Swap1(int x, int y)
//{
//	int temp = 0;
//	temp = x;
//	x = y;
//	y = temp;
//}

//void Swap2(int* pa, int* pb)
//{
//	int temp = 0;
//	temp = *pa;
//	*pa = *pb;
//	*pb = temp;
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
//	printf("a=%d,b=%d\n", a, b);
//	Swap2(&a, &b);
//	printf("a=%d,b=%d\n", a, b);
//	return 0;
//}

//用函数判断100-200中的素数
//#include<math.h>
//int is_prime(int m)
//{
//	int n = 0;
//	for (n = 2;n <= sqrt(m);n++)
//	{
//		if (m % n == 0)
//		{
//			return 0;
//			break;
//		}
//		
//		
//	}
//	if (n > sqrt(m))
//	{
//		return 1;
//	}
//
//}
//int main()
//{
//	int i = 0;
//	int count = 0;
//	for (i = 100;i <= 200;i++)
//	{
//		if (is_prime(i) == 1)
//		{
//			printf("%d ", i);
//			count++;
//		}
//		
//	}
//	printf("\n100-200中存在%d个素数\n", count);
//	return 0;
//}


//用函数判断1000-2000年
//int is_leap_year(int x)
//{
//	if ((x%4==0&&x%100!= 0)||x%400==0)
//	{
//		return 1;
//	}
//	else
//	{
//		return 0;
//	}
//}
//
//int main()
//{
//	int year = 0;
//	int count = 0;
//	for (year = 1000;year <= 2000;year++)
//	{
//		if (is_leap_year(year) == 1)
//		{
//			printf("%d ", year);
//			count++;
//		}
//	}
//	printf("\n1000-2000年间有%d个闰年\n", count);
//	return 0;
//}

//#include<string.h>
//                      //本质上arr1是一个指针
//int binary_search(int arr1[], int n)
//{
//	int sz = sizeof(arr1) / sizeof(arr1[0]);//指针变量4个字节/arr1[0]4个字节=1，
//	                                        //导致程序出错，需要把sz放在主程序中
//	int left = 0;
//	int right = sz - 1;
//	while (left <= right)
//	{
//		int mid = (left + right) / 2;
//		if (arr1[mid] < n)
//		{
//		left = mid + 1;
//		}
//		else if (arr1[mid] > n)
//		{
//			right = mid - 1;
//		}
//		else
//		{
//			return mid;
//			break;
//		}
//	}
//	if (left > right)
//	{
//		return -1;
//	}
//
//}
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int k = 7;
//	                       //传递过去arr首元素的地址
//	int ret = binary_search(arr, k);
//	if (ret == -1)
//	{
//		printf("找不到指定的数字\n");
//	}
//	else
//	{
//		printf("找到了,下标是：%d\n",ret);
//	}
//	return 0;
//}

//本质上arr1是一个指针
//int binary_search(int arr[], int k,int sz)
//{
//	int left = 0;
//	int right = sz - 1;
//	while (left <= right)
//	{
//		int mid = (left + right) / 2;
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
//			break;
//		}
//	}
//	if (left > right)
//	{
//		return -1;
//	}
//
//}
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int k = 9;
//	int sz = sizeof(arr) / sizeof(arr[0]);//在主函数中计算数组长度
//	int ret = binary_search(arr, k, sz);//在函数中添加数组长度变量sz
//	if (ret == -1)
//	{
//		printf("找不到指定的数字\n");
//	}
//	else
//	{
//		printf("找到了,下标是：%d\n", ret);
//	}
//	return 0;
//}

//void Add(int* p)
//{
//	(*p)++;//++运算优先级高，应该把*p括起来
//
//}
//int main()
//{
//	int num = 0;
//	int i = 0;
//	for (i = 1;i <= 10;i++)
//	{
//		Add(&num);
//	}
//	printf("调用了%d次函数\n", num);
//	return 0;
//}

//函数的嵌套和链式访问
//int main()
//{
//	printf("%d", printf("%d", printf("%d", 43)));//printf的返回值是打印的字符的数量
//	return 0;
//}

#include"add.h"

int main()
{
	int a = 10;
	int b = 20;
	int sum = 0;
	sum = Add(a, b);
	printf("%d\n", sum);
}