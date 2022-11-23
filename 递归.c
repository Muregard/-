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
// //模拟实现一个strlen函数
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

int my_strlen(char* str)
{
	if (*str != '\0')
	{
		return 1 + my_strlen(str + 1);
	}
	else
		return 0;
}

int main()
{
	char arr[] = "bit";
	int len = my_strlen(arr);
	printf("len=%d\n", len);
	return 0;
}