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