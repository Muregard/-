#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//递归
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
//	//递归
//	print(num);
//	//print(1234)
//	//print(123) 4
//	//print(12) 3 4
//	//print(1) 2 3 4
//
//	return 0;
//
//}

//自己创建函数求字符串长度
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
// 计数器方法，模拟实现一个strlen函数
//	int len = my_strlen(arr);//arr是数组，数组传参，传过去的是第一个元素的地址
//	printf("len=%d\n", len);
//	return 0;
//}

//用递归方法求字符串长度
//把大事化小
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
//	//求n的阶乘
//	int n = 0;
//	int ret = 0;
//	scanf("%d", &n);
//	//ret = Fac1(n);//循环的方式
//	ret = Fac2(n);//递归的方式
//	printf("%d！=%d\n", n, ret);
//	return 0;
//}

//斐波那契数列计算方法
//1.递归的方法
//int Fib(int n)
//{
//	if (n <= 2)
//		return 1;
//	else
//		return Fib(n - 1) + Fib(n - 2);
//}

//2.迭代的方法
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
//		n--;//每迭代一次，n-1
//	}
//	return c;
//}
//
//int main()
//{
//	int n = 0;
//	int ret = 0;
//	scanf("%d", &n);
//	//TDD-测试驱动开发
//	ret=Fib(n);
//	printf("%d\n", ret);
//	return 0;
//}

//使用递归的方法求解汉诺塔问题
//1层      A->C      1次
//2层 A->B A->C B->C 3次
//3层                7次
//递推公式 f(n)=2*f(n-1)+1

//int Hanio_twice(int n)
//{
//	if (n == 1)
//		return 1;
//	else
//	return 2 * Hanio_twice(n - 1)+1;//递归方法，n逐次-1
//}
//int main()
//{
//	int n = 0;
//	int ret = 0;
//	scanf("%d", &n);
//	ret = Hanio_twice(n);
//	printf("%d层汉诺塔需要挪动%d次\n", n, ret);
//	return 0;
//}

//共n级台阶，青蛙每次可以跳1级或者2级台阶
int frog(int n)
{
	if (n == 1)
		return 1;//1级台阶，只有一种跳法
	if (n == 2)
		return 2;//1级台阶，有两种跳法
	return  frog(n - 1) + frog(n - 2);//第一次有两种选择，跳1级或者2级台阶
	                                  //第一次先跳1级台阶，还有(n-1)级台阶的跳法；
	                                  //第一次先跳2级台阶，还有(n-2)级台阶的跳法
}                                  

int main()
{
	int n = 0;
	int ret = 0;
	scanf("%d", &n);
	ret = frog(n);
	printf("青蛙要跳上%d级台阶有%d种方法\n", n, ret);
	return 0;
}
