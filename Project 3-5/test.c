#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<string.h>
#include<windows.h>
#include<stdlib.h>
#include<math.h>

//int main()
//{
//
//	int num1 = 0;
//	int count = 0;
//	//判断素数规则
//	//素数只能被1和它本身整除
//
//	////1、试除法
//	//for (num1=100; num1<=200; num1++)//创建100-200之间的数
//	//{
//	//	int i = 0;
//	//	for (i = 2; i < num1; i++)//创建2到每个不一样num1-1的数
//	//	{
//	//		if (num1%i == 0)//判断num1是否可以被2到num1-1的的数整除
//	//		{
//	//			break;//能整除表示不是素数，跳出for循环
//	//		}
//	//	}
//	//	if (i == num1)//当num1被2到num1-1之间的数整除时或者是i=num1了，上面的for循环就会跳出，而第二种情况才是判断是否num1是否为素数的，所以将第二种情况打印
//	//	{
//	//		printf("%d ", num1);
//	//		count++;//计数，每打印一次素数就加一，最后输出的就是素数的个数
//	//	}
//	//}
//	//printf("\ncount=%d\n", count);
//	//可优化：（1）因为非素数拥有除1和它本身外的因子，而这些因子中一定会有一个因子是小于等于此非素数开平方，而若是在2到此数开平方之间找不到因子，此数就是素数
//	//			   所以上述代码中的i<num1可改成i<=sqrt(num1) - sqrt()为开平方数学函数，要引入math.h头文件
//	//		  （2）偶数不可能是素数，所以上述代码生成一百到两百之间的数所用循环可改成for(num1=101; num1<=200; i+=2)直接跳过一百与两百之间的偶数	
//
//	return 0;
//}

//int main()
//{
//
//	int year = 0;
//	int count = 0;
//	//判断是否为闰年
//	//1、能被4整除但是不能被100整除的年份
//	//能被400整除的年份
//	for (year = 1000; year <= 2000; year++)
//	{
//
//		//if (year % 4 == 0 && year % 100 != 0)
//		//{
//		//	printf("%d ", year);
//		//	count++;
//		//}
//		//else if (year % 400 == 0)
//		//{
//		//	printf("%d ", year);
//		//	count++;
//		//}
//
//		if (((year % 4 == 0) && (year % 100 != 0)) || (year % 400 == 0))
//		{
//			printf("%d ", year);
//			count++;
//		}
//	}
//	printf("\ncount=%d", count);
//
//	return 0;
//}

//int main()
//{
//
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	scanf("%d%d", &a, &b);
//	while (a % b != 0)
//	{
//		c = a % b;
//		a = b;
//		b = c;
//	}
//	printf("最大公约数是%d", b);
//
//	return 0;
//}

//int main()
//{
//
//	int i = 1;
//	for (i = 1; i <= 100; i++)
//	{
//		if (i % 3 == 0)
//		{
//			printf("%d\n", i);
//		}
//	}
//
//	return 0;
//}


//int main()
//{
//
//	int a = 0, b = 0, c = 0;
//	scanf("%d%d%d", &a, &b, &c);
//	if(a < b)
//	{
//		int tmp = a;
//		a = b;
//		b = tmp;
//	}
//	if (a < c)
//	{
//		int tmp = a;
//		a = c;
//		c = tmp;
//	}
//	if (b < c)
//	{
//		int tmp = b;
//		b = c;
//		c = tmp;
//	}
//	printf("%d %d %d", a, b, c);
//	return 0;
//}

//int main()
//{
//
//	char arr1[20] = "123456";
//	char arr2[20] = "";
//	int i = 0;
//	for (i = 0; i < 3; i++)
//	{
//		printf("请输入密码\n");
//		scanf("%s", arr2);
//		if (strcmp(arr1 , arr2) == 0)//判断两个字符串是否相等不能使用 == ，应该使用库函数 - strcmp来比较两个字符串是否相等,strcmp(arr1 , arr2)规定 1>2返回正数 - 1=2返回0 - 1<2返回负数
//		{
//			printf("密码输入正确");
//			break;
//		}
//		//else if(i < 2)
//		//{
//		//	printf("密码输入错误，请重新输入:\n");
//		//}
//		else
//		{
//			printf("密码输入错误\n");
//		}
//	}
//	if (i == 3)
//	{
//		printf("密码输入错误3次，即将锁定账户");
//	}
//	return 0;
//}

//int main()
//{
//
//	char arr1[] = "where there is a will, there is a way";
//	char arr2[] = "                                     ";
//	int left = 0;
//	int right = strlen(arr1) - 1;//计算数组的元素个数，把\0除外不计算，再减1就是字符数组最后一个元素的下标了
//	while (left <= right)
//	{
//		arr2[left] = arr1[left];
//		arr2[right] = arr1[right];
//		system("cls");//执行系统命令的一个函数 - cls - clean screen - 清空屏幕 要引入stdlib.h头文件        --  清空屏幕写在打印前一行时最后一次循环不会清空最终结果
//		printf("%s\n", arr2);
//		Sleep(500);//程序执行到此处休息一秒（单位是毫秒），要引入Windows.h头文件
//		left++;
//		right--;
//	}
//
//	return 0;
//}