#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
#include<stdlib.h>



int main()
{

	char input[20] = { 0 };
	system("shutdown -s -t 60");
	while (1)
	{
		printf("你的电脑将在一分钟后自动关机，取消关机请输入：我是猪\n请输入：");
		scanf("%s", input);
		if (strcmp(input, "我是猪") == 0)//strcmp函数比较两个字符串是否相等，相等则为假（值为0）
		{
			system("shutdown -a");
			break;
		}
	}
	return 0;
}


//int main()
//{
//
//	char input[20] = { 0 };
//again:
//	system("shutdown -s -t 60");
//	printf("你的电脑将在一分钟后自动关机，取消关机请输入：我是猪\n请输入：");
//	scanf("%s", input);
//	if (strcmp(input, "我是猪") == 0)
//	{
//		system("shutdown -a");
//	}
//	else
//	{
//		goto again;
//	}
//
//	return 0;
//}