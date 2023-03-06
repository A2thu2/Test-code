#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>

int main()
{
	int i = 0;
	double sum = 0.0;
	int flag = 1;
	for (i = 1; i <= 100; i++)
	{
		sum = sum+ flag*(1.0 / i);//sum += flag*（1.0/i）
		flag = -flag;//循环使得（1.0/i）变换正负号
	}
	printf("%lf", sum);
	return 0;
}

//错误：单独计算分母累加再添加上分母改变了原式大小
//int main()
//{
//
//	int a = 0;
//	int count = 0;
//	for (a = 1; a <= 100; a++)//改良版：个位为9时，a%10都是余9，十位为9时a/10都是商9，两个if分开写而不是写成if elseif的形式，因为后者在计算完个位为9的情况下没有机会执行elseif语句，所以99会计算成一个9.
//	{
//		if (a % 10 == 9 )
//		{
//			printf("%d ", a);
//			count++;
//		}
//		if (a / 10 == 9)
//		{
//			printf("%d ", a);
//			count++;
//		}
//	}
//	printf("一共有%d个", count);
//	return 0;
//}


//int main()
//{
//
//	int a = 0;
//	int count = 0;
//	for (a = 1; a <= 100; a++)
//	{
//		if (a % 10 == 9 || a / 9 == 10)
//		{
//			printf("%d ", a);
//			count++;
//		}
//		if (a == 99)
//		{
//			count++;
//		}
//	}
//	printf("一共有%d个", count);
//	return 0;
//}



//int main()
//{
//
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int left = 0;
//	int right = sizeof(arr) / sizeof(arr[0]);
//	int a = 0;
//	scanf("%d", &a);
//	while (left <= right)
//	{
//		int x = (left + right) / 2;
//		if (arr[x] < a)
//		{
//			left = x + 1;
//		}
//		else if (arr[x] > a)
//		{
//			right = x - 1;
//		}
//		else
//		{
//			printf("\n找到了，该数在数组中下标为：%d\n", x);
//			break;
//		}
//	}
//	if (left > right)
//	{
//		printf("\n数组中找不到该数\n");
//	}
//
//	return 0;
//}