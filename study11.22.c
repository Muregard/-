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
//	//strlen - string length - �ַ��������й�
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

//�Զ��庯��ʵ�����������ļ���ֵ
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
//	printf("�ϴ�ֵΪ%d\n", max);
//	return 0;
//}

////������ɽ�������
// ��ʵ�δ��ݸ��β�ʱ
// �β���ʵ��ʵ�ε�һ����ʱ����
// ���βε��޸��ǲ���ı�ʵ�ε�
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

//�ú����ж�100-200�е�����
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
//	printf("\n100-200�д���%d������\n", count);
//	return 0;
//}


//�ú����ж�1000-2000��
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
//	printf("\n1000-2000�����%d������\n", count);
//	return 0;
//}

//#include<string.h>
//                      //������arr1��һ��ָ��
//int binary_search(int arr1[], int n)
//{
//	int sz = sizeof(arr1) / sizeof(arr1[0]);//ָ�����4���ֽ�/arr1[0]4���ֽ�=1��
//	                                        //���³��������Ҫ��sz������������
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
//	                       //���ݹ�ȥarr��Ԫ�صĵ�ַ
//	int ret = binary_search(arr, k);
//	if (ret == -1)
//	{
//		printf("�Ҳ���ָ��������\n");
//	}
//	else
//	{
//		printf("�ҵ���,�±��ǣ�%d\n",ret);
//	}
//	return 0;
//}

//������arr1��һ��ָ��
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
//	int sz = sizeof(arr) / sizeof(arr[0]);//���������м������鳤��
//	int ret = binary_search(arr, k, sz);//�ں�����������鳤�ȱ���sz
//	if (ret == -1)
//	{
//		printf("�Ҳ���ָ��������\n");
//	}
//	else
//	{
//		printf("�ҵ���,�±��ǣ�%d\n", ret);
//	}
//	return 0;
//}

//void Add(int* p)
//{
//	(*p)++;//++�������ȼ��ߣ�Ӧ�ð�*p������
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
//	printf("������%d�κ���\n", num);
//	return 0;
//}

//������Ƕ�׺���ʽ����
//int main()
//{
//	printf("%d", printf("%d", printf("%d", 43)));//printf�ķ���ֵ�Ǵ�ӡ���ַ�������
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