#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//�ݹ�
//int main()
//{
//	printf("hehe\n");
//	main();
//	return 0;
//}

//void print(int n)
//{
//	if (n > 9)
//	{
//		print(n / 10);
//	}
//	printf("%d ", n%10); 
//}
//
//int main()
//{
//	unsigned int num = 0;
//	scanf("%d", &num);//1234
//	//�ݹ�
//	print(num);
//	//print(1234)
//	//print(123) 4
//	//print(12) 3 4
//	//print(1) 2 3 4
//
//	return 0;
//
//}

//�Լ������������ַ�������
//int my_strlen(char* str)
//{
//	int count = 0;
//	while (*str != '\0')
//	{
//		count++;
//		str++;
//	}
//	return count;
//}
//
//int main()
//{
//	char arr[] = "bit";
// 
// //ģ��ʵ��һ��strlen����
//	int len = my_strlen(arr);//arr�����飬���鴫�Σ�����ȥ���ǵ�һ��Ԫ�صĵ�ַ
//	printf("len=%d\n", len);
//	return 0;
//}

//�õݹ鷽�����ַ�������
//�Ѵ��»�С
//my_strlen("bit");
//1+my_strlen("it");
//1+1+my_strlen("t");
//1+1+1+my_strlen("");
//1+1+1+0

//int my_strlen(char* str)
//{
//	if (*str != '\0')
//	{
//		return 1 + my_strlen(str + 1);
//	}
//	else
//		return 0;
//}
//
//int main()
//{
//	char arr[] = "bit";
//	int len = my_strlen(arr);
//	printf("len=%d\n", len);
//	return 0;
//}

//int Fac1(int n)
//{
//	int i = 0;
//	int ret = 1;
//	for (i = 1;i <= n;i++)
//	{
//		ret *= i;
//	}
//	return ret;
//}
//
//int Fac2(int n)
//{
//	if (n <= 1)
//		return 1;
//	else
//		return n*Fac2(n - 1);
//}
//
//int main()
//{
//	//��n�Ľ׳�
//	int n = 0;
//	int ret = 0;
//	scanf("%d", &n);
//	//ret = Fac1(n);//ѭ���ķ�ʽ
//	ret = Fac2(n);//�ݹ�ķ�ʽ
//	printf("%d��=%d\n", n, ret);
//	return 0;
//}

//쳲��������м��㷽��
//1.�ݹ�ķ���
//int Fib(int n)
//{
//	if (n <= 2)
//		return 1;
//	else
//		return Fib(n - 1) + Fib(n - 2);
//}

//2.�����ķ���
//int Fib(int n)
//{
//	int a = 1;
//	int b = 1;
//	int c = 1;
//	while(n>2)
//	{
//		c = a + b;
//		a = b;
//		b = c;
//		n--;//ÿ����һ�Σ�n-1
//	}
//	return c;
//}
//
//int main()
//{
//	int n = 0;
//	int ret = 0;
//	scanf("%d", &n);
//	//TDD-������������
//	ret=Fib(n);
//	printf("%d\n", ret);
//	return 0;
//}

//ʹ�õݹ�ķ�����⺺ŵ������
//1��      A->C      1��
//2�� A->B A->C B->C 3��
//3��                7��
//���ƹ�ʽ f(n)=2*f(n-1)+1

//int Hanio_twice(int n)
//{
//	if (n == 1)
//		return 1;
//	else
//	return 2 * Hanio_twice(n - 1)+1;//�ݹ鷽����n���-1
//}
//int main()
//{
//	int n = 0;
//	int ret = 0;
//	scanf("%d", &n);
//	ret = Hanio_twice(n);
//	printf("%d�㺺ŵ����ҪŲ��%d��\n", n, ret);
//	return 0;
//}

//��n��̨�ף�����ÿ�ο�����1������2��̨��
int frog(int n)
{
	if (n == 1)
		return 1;//1��̨�ף�ֻ��һ������
	if (n == 2)
		return 2;//1��̨�ף�����������
	return  frog(n - 1) + frog(n - 2);//��һ��������ѡ����1������2��̨��
	                                  //��һ������1��̨�ף�����(n-1)��̨�׵�������
	                                  //��һ������2��̨�ף�����(n-2)��̨�׵�����
}                                  

int main()
{
	int n = 0;
	int ret = 0;
	scanf("%d", &n);
	ret = frog(n);
	printf("����Ҫ����%d��̨����%d�ַ���\n", n, ret);
	return 0;
}
