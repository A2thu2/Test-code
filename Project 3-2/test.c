#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>

int main()
{
    int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
    int left = 0;//数组第一个元素下标
    int sz = sizeof(arr) / sizeof(arr[0]);//数组元素个数
    int right = sz - 1;//数组最后一个元素下标
    int num = 0;
    printf("请输入要查找的数：");
    scanf("%d", &num);
    while (left <= right)//二分查找法
    {


        int k = (left + right) / 2;
        if (arr[k] < num)
        {
            left = k + 1;
        }
        else if (arr[k] > num)
        {
            right = k - 1;
        }
        else
        {
            printf("找到了，在数组中下标是%d\n", k);
            break;
        }

    }
    if (left > right)
    {
        printf("数组中找不到此数\n");
    }
    return 0;
}

//int main()
//{
//
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int i = 0;
//	int z = 11;
//	int ch = sizeof(arr) / sizeof(arr[0]);
//	//printf("请输入一个整数：");
//	//scanf("%d", &z);
//	for (i = 0; i < ch; i++)
//	{
//		if (z == arr[i])
//		{
//			printf("找到了，该数在数组中下标为：%d\n", i);
//			break;
//		}
//	}
//	if (i == ch)
//	{
//		printf("未在数组中找到该数\n");
//	}
//
//	return 0;
//}