#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>



void print(int x)//1234
{
	if (x > 9)
	{
		print(x / 10);
	}
	printf("%d ", x%10);//不能把这一句写在else里，否则会出问题
}


int main()
{
	int i = 0;
	printf("请输入一个要逐个打印的数字：");
	scanf("%d", &i);
	print(i);
	return 0;
}




//--------实现打印行和列为输入数字的乘法口诀表-------------------

//mul(int i)
//{
//	int j = 0;
//	int y = 0;
//	for (j = 1; j <= i; j++)
//	{
//		for (y = 1; y <= j; y++)
//		{
//			if (j < 10)
//			{
//				printf("%-2d*%d=%-3d ", j, y, j * y);
//			}
//			else
//			{
//				printf("%d*%d=%-3d ", j, y, j * y);
//			}
//		}
//		printf("\n");
//	}
//}
//
//
//int main()
//{
//
//	int i = 0;
//	printf("输入乘法口诀表层数：");
//	scanf("%d", &i);
//	mul(i);
//
//	return 0;
//}



//---------------------交换两个整数-------------------------------------------------------------------------------

//change(int* x, int* y)
//{
//	int tmp = *x;
//	*x = *y;
//	*y = tmp;
//}
//
//int main()
//{
//
//	int a = 10;
//	int b = 20;
//	printf("a=%d b=%d\n", a, b);
//	change(&a, &b);
//	printf("a=%d b=%d", a, b);
//	return 0;
//}


//-------------------调用一次函数sum的值加1--------------------------------------------------------------------

//void sum(int* p)
//{
//	(*p)++;//++优先级高于*号，所以++作用于p而不是*p，所以*p加括号
//}
//
//int main()
//{
//
//	int num = 0;
//	sum(&num);
//	printf("%d\n", num);
//	sum(&num);
//	printf("%d\n", num);
//	sum(&num);
//	printf("%d\n", num);
//	return 0;
//}



//----------------------------函数实现整形有序数组二分查找-------------------------------------------------------------------------------------------------------

//				  //此时的arr是一个指针，而此时若在函数里计算数组大小的话sizeof(arr)为计算arr指针大小，32位平台指针大小为4字节，64位平台为8字节
//int binary_search(int arr[], int x, int sz)
//{
//	int left = 0;
//	int right = sz - 1;
//	while (left<=right)
//	{
//		int mid = (left + right) / 2;
//		if (arr[mid] < x)
//		{
//			left = mid + 1;
//		}
//		else if (arr[mid] > x)
//		{
//			right = mid - 1;
//		}
//		else
//		{
//			return mid;
//		}
//	}
//	return 0;
//}
//
//int main()
//{
//
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	printf("请输入要查找的数：");
//	scanf("%d", &i);
//	int ret = binary_search(arr, i, sz);//接收函数返回值，若找到则ret为查找数下标，若找不到，ret等于0
//	                                    //数组传参时传的是数组里第一个元素的地址，数组名此时代表的是首元素的地址
//	if (ret == 0)
//	{
//		printf("\n找不到该数\n");
//	}
//	else
//	{
//		printf("\n找到了,在数组中的下标是：%d\n", ret);
//	}
//
//	return 0;
//}



//-------------------------判断素数---------------------------------------------------------------------------------------------------

//is_prime_number(int x)
//{
//	int j = 0;
//	for (j = 2; j < x; j++)
//	{
//		if (x % j == 0)
//		{
//			return 1;
//		}
//	}
//	return 0;
//}
//
//int main()
//{
//
//	int i = 0;
//	int judge = 0;
//	//int k = 0;
////again:
//	//printf("\n请输入判断数：");
//	//scanf("%d", &i);
//	for (i = 100; i <= 200; i++)
//	{
//		int num = is_prime_number(i);
//		if (0 == num)
//		{
//			printf("%d ", i);
//		}
//	}
//
//
//
//	//printf("\n是否继续判断（输入1继续  输入0退出）\n请选择：");
//	//scanf("%d", &judge);
//	//switch (judge)
//	//{
//	//case 1:
//	//		goto again;
//	//		break;
//	//case 0:
//	//	printf("退出程序\n");
//	//	break;
//	//default:
//	//	printf("输入错误，请重新输入\n");
//	//	goto again;
//	//	break;
//	//}
//	return 0;
//}