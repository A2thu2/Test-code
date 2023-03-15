#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<stdlib.h>
#include<time.h>


//猜数字游戏
//1.电脑生成随机数
//2.由玩家来猜这个随机数

void menu()//定义menu函数 实现菜单效果
{
	printf("********程序随机生成一个1至100的数，由你猜测*******\n");
	printf("***************************************************\n");
	printf("********按1游玩游戏*************按0退出游戏********\n");
}

//--RAND_MAX-值为32767--rand函数生成一个0-32767之间的随机数

//时间戳---当前计算机的时间减去计算机的起始时间（1970.1.1.0:0:0）==（xxxx）秒（换算成秒）


void game()
{
	//-----思路-----1.生成一个随机数
	int ret = 0;//变量要定义在当前代码块的最前面
	int guess = 0;//接收猜的数字
		//printf("猜数字\n");


		//拿时间戳来设置随机数的生成起始点
		//time_t time(time_t *timer)---time_t的值实际上是一个长整型（long）

	ret = rand()%100+1;//调用rand之前要使用srand函数设置随机数的生成器，否则rand函数生成随机数每次都是一样的
				//0-32767范围太大，rand函数随机值对100取余得到的结果就是0-99,再加上1得到的随机数就是1-100！！！！！！！
		//printf("%d\n", ret);
	//--------------2.猜数字
	while (1)//1为真，循环执行
	{
		printf("输入你的猜测：");
		scanf("%d", &guess);
		if (guess > ret)
		{
			printf("你猜大了\n");
		}
		else if (guess < ret)
		{
			printf("你猜小了\n");
		}
		else
		{
			printf("你猜对了！！！！！！！！\n");
			break;
		}
	}
}

int main()
{

//---思路---; 猜数字小游戏，要实现游戏可循环玩，即游戏结束后可选择继续游玩或是结束游戏，所以游戏的执行过程就要放到一个循环里，而
//又因此函数至少执行一次，所以采用do...while...循环（即先执行一次程序，在由循环参数来控制是否循环）
	int input = 0;
	srand((unsigned int)time(NULL));//srand函数的值固定时，rand函数生成的随机数不变，所以要设置一个变值
									//time函数返回值为long，而srand函数要一个unsigned int类型，所以在time函数前加一个括号进行强制类型转换，此时srand函数里为一个变值，rand可随机生成随机数
									//time函数参数需要的是一个指针，参数不产生实际效果时填NULL表示空指针
									//生成起点在代码里设置一次就可以，不要频繁设置，若放在game函数里，game执行一次时间起点就设置一次，会导致两次生成随机数相差不大甚至一样
	do
	{
		menu();//实现菜单效果
		printf("请选择：");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("结束游戏\n");
			break;
		default:
			printf("输入错误\n");
			break;
		}
	} while (input);//接收input值  0为假--程序不执行，非0为真--执行程序
	return 0;
}




//int main()//二分查找，在数组中查找是否存在某个数
//{
//
//	int arr[] = { 1,2,4,6,8,9,10};
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int left = 0;
//	int right = sz-1;
//	int num = 0;
//	scanf("%d", &num);
//	while(left <= right)
//	{
//		int mid = (left + right) / 2;
//		if (arr[mid] > num)
//		{
//			right = mid - 1;
//		}
//		else if (arr[mid] < num)
//		{
//			left = mid + 1;
//		}
//		else
//		{
//			printf("找到了，这个数的下标是：%d\n", mid);
//			break;
//		}
//	}
//	if (left > right)
//	{
//		printf("数组中找不到该数\n");
//	}
//	return 0;
//}


//int main()//99乘法口诀表，外层for循环控制行数，里层for循环控制列数
//{
//
//	int i = 0;
//	for (i = 1; i <= 9; i++)
//	{
//		int j = 0;
//		for (j = 1; j <= i; j++)
//		{
//			printf("%d*%d=%-2d ", i, j, i * j);//%-2d -- 解决了当前层积为个数是和后层积为双数出现的位置不对齐情况，%2d意思是打印此数时默认为二位，
//											   //若实际不满二位，则在此数前用空格补齐，%-2d则是在打印数后用空格补齐
//
//		}
//		printf("\n");//当每列打印完时换行
//	}
//
//	return 0;
//}


//int main()//找出数组中的最大值
//{
//
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int max = arr[0];//将数组第一个数赋值给max
//	int i = 0;
//	for (i = 1; i < sz; i++)
//	{
//		if (max < arr[i])//将max与数组后面剩余元素挨个比较，若大于max则赋值给max
//		{
//			max = arr[i];
//		}
//	}
//	printf("max = %d", max);
//	return 0;
//}