#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<string.h>
#include<windows.h>
#include<stdlib.h>

int main()
{

	char arr1[20] = "123456";
	char arr2[20] = "";
	int i = 0;
	for (i = 0; i < 3; i++)
	{
		printf("请输入密码\n");
		scanf("%s", arr2);
		if (strcmp(arr1 , arr2) == 0)//判断两个字符串是否相等不能使用 == ，应该使用库函数 - strcmp来比较两个字符串是否相等,strcmp(arr1 , arr2)规定 1>2返回正数 - 1=2返回0 - 1<2返回负数
		{
			printf("密码输入正确");
			break;
		}
		//else if(i < 2)
		//{
		//	printf("密码输入错误，请重新输入:\n");
		//}
		else
		{
			printf("密码输入错误\n");
		}
	}
	if (i == 3)
	{
		printf("密码输入错误3次，即将锁定账户");
	}
	return 0;
}

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