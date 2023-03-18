#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<string.h>

int main()
{
	char arr1[] = "bit";
	char arr2[] = {'b', 'i', 't'};
	printf("%s\n", arr1);
	printf("%s", arr2);
	printf("%d", strlen(arr2));
}


//-----------迭代方式计算斐波那契数-------------

//int Fib(int i)
//{
//	int a = 1;
//	int b = 1;
//	int x = 0;
//	int y = 0;
//	int z = 0;
//	if (i == 1 || i == 2)
//	{
//		return 1;
//	}
//	else
//	{
//		for (x=1; x<=i-2; x++)
//		{
//			y = a + b;
//			a = b;
//			b = y;
//		}
//		return y;
//	}
//}
//
//
//int main()
//{
//
//	int i = 0;
//	printf("请输入需要求第几个斐波那契数：");
//	scanf("%d", &i);
//	int sum = Fib(i);
//	printf("第%d个斐波那契数为%d", i, sum);
//	return 0;
//}


//--------------递归实现求斐波那契数---------------------

//int Fib(int n)
//{
//	if (n > 2)
//	{
//		return Fib(n - 2) + Fib(n - 1);
//	}
//	return 1;
//}
//
//int main()
//{
//
//	int i = 0;//第几个斐波那契数
//	printf("请输入要求第几个斐波那契数：");
//	scanf("%d", &i);
//	int sum = Fib(i);
//	printf("第%d个斐波那契数为%d", i, sum);
//	return 0;
//}



//---------------递归计算n的k次方---------


//double power(int n, int k)
//{
//	if (k > 0)
//	{
//		return n * power(n, k - 1);
//	}
//	else if(k == 0)
//	{
//		return 1;
//	}
//	else
//	{
//		return 1.0 / power(n, -k);//负数次方部分可化成正数次方分之一，输入k为负数，改写为-k则为正数，进行大于零部分递归即可
//	}
//}
//
//
//int main()
//{
//
//	int n, k = 0;
//	printf("输入n和k两个数字，求n的k次方\n请输入：");
//	scanf("%d %d", &n, &k);
//	double x = power(n, k);
//	printf("%d的%d次方为：%lf", n, k, x);
//	return 0;
//}


//---------每位数字求和------------------------


//int DigitSum(int x)
//{
//	if (x > 9)
//	{
//		return (x%10) + DigitSum(x / 10);//分离最后一位数，剩余的数递归执行
//	}
//	return x;
//}
//
//
//int main()
//{
//
//	int sum = 0;
//	printf("请输入要计算的数字：");
//	scanf("%d", &sum);
//	int n = DigitSum(sum);
//	printf("和为%d", n);
//	return 0;
//}



//------递归实现字符串的逆序-------------------------


//void reverse_string(char* arr)
//{
//	int len = strlen(arr);//计算str数组的长度
//	char tmp = *arr;//arr为str第一个元素地址，解引用后为‘a’，
//	*arr = *(arr + len - 1);//第一个元素的地址加上长度偏移量，此时是指向最后一个元素的地址，解引用后为‘f’
//
//	*(arr + len - 1) = '\0';//将f的位置补上一个\0
//	if (strlen(arr + 1) >= 2)//递归终止条件
//		reverse_string(arr + 1);//递归
//
//	*(arr + len - 1) = tmp;//将每次递归拿出的首元素放到最后
//}
//
//int main()
//{
//
//	char str[] = "abcdef";
//	reverse_string(str);
//	printf("%s", str);
//	return 0;
//}



//-------------递归方式实现strlen函数功能--------------------


//int my_strlen(char* p)//首元素地址因为是char类型元素地址，所以创建一个char*指针变量存放接收到的首元素地址
//{
//	if (*p != '\0')//解引用判断原数组中的元素是否为‘\0’,
//	{
//							//此处的p起到的是地址作用，加一为定位下一个元素，不需要解引用
//		return 1 + my_strlen(p + 1);//p指向第一个元素的地址，p+1则指向原数组第二个元素，若是写成（*p）+1则是解引用后加一，相当于原数组中空格（第二个元素）加一
//	}
//	return 0;
//}
//int main()
//{
//
//	char arr[] = "i love you";
//	int count = my_strlen(arr);//数组传参传过去的是首元素的地址，arr每个元素的类型是char
//	printf("%d\n", count);
//	return 0;
//}




//------------迭代实现strlen函数功能--------------------


//int main()
//{
//
//	char arr[] = "i love you";
//	int i = 0;
//	int count = 0;
//	for (i = 0; i < 1000; i++)
//	{
//		if ('\0' == arr[i])
//		{
//			break;
//		}
//		else
//		{
//			count++;
//		}
//	}
//	printf("%d", count);
//	return 0;
//}



//--------------递归方式求n的阶乘---------------------------


//int factorial(int y)
//{
//	if (y > 1)
//	{
//		return y * factorial(y - 1);
//	}
//	else
//	{
//		return 1;
//	}
//}
//
//int main()
//{
//
//	int n = 0;
//	printf("输入一个整数求其阶乘\n请输入：");
//	scanf("%d", &n);
//	int x = factorial(n);
//	printf("%d", x);
//	return 0;
//}


//------------迭代方式求n的阶乘------------------------------


//int main()
//{
//
//	int n = 0;
//	int i = 0;
//	int tmp = 1;
//	printf("输入一个整数求其阶乘\n请输入：");
//	scanf("%d", &n);
//	for (i = 1; i <= n; i++)
//	{
//		tmp = tmp * i;
//	}
//	printf("%d", tmp);
//	return 0;
//}