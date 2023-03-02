#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>

int main()
{

	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
	int i = 0;
	int z = 11;
	int ch = sizeof(arr) / sizeof(arr[0]);
	//printf("请输入一个整数：");
	//scanf("%d", &z);
	for (i = 0; i < ch; i++)
	{
		if (z == arr[i])
		{
			printf("找到了，该数在数组中下标为：%d\n", i);
			break;
		}
	}
	if (i == ch)
	{
		printf("未在数组中找到该数\n");
	}

	return 0;
}