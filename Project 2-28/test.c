#define _CRT_SECURE_NO_WARNINGS 

#include<stdio.h>;
#include<string.h>;

int main()
{
	int x = 1;
	while(x <= 100)
	{
		if (x % 2 == 1)
		{
			printf("%d\n", x);
		}
		x++;
	}

	return 0;
}

//int main()
//{
//
//	int num = 4;
//	if (num = 5)//一个等于为赋值，两个等号判断相等，所以输出结果为呵呵，可将两个参数位置调换则一个等号是报错，减低错误的概率：5 == num
//	{
//		printf("呵呵\n");
//	}
//
//	return 0;
//}


//int main()
//{
//	int x, y;
//	if (condition)
//	{
//		return x;
//	}
//	return y;//若条件（condition）成立返回x，否则返回y。因为return是终止函数的，若condition成立则函数终止,不执行return y;
//	return 0;
//}

//int main()
//{
//	int a = 0;
//	int b = 0;
//	if (a == 1);
//		if (b == 2);
//			printf("哈哈\n");
//	else//悬空else和它离得最近的未匹配的if相匹配，此程序第一个if不满足，无输出结果，所以要注意大括号的使用
//		printf("呵呵\n");
//
//	return 0;
//}

//int main()
//{
//	int age;
//	printf("请输入你的年龄：");
//	scanf("%d", &age);
//	if(age < 18)
//	{
//		printf("未成年\n");
//	}
//	else
//	{
//		if(age < 28 && age >= 18)
//		{
//			printf("青年\n");
//		}
//		else if(age < 50 && age >= 28)
//		{
//			printf("壮年\n");
//		}
//		else if (age < 90 && age >= 50)
//		{
//			printf("暮年\n");
//		}
//		else
//		{
//			printf("神仙\n");
//		}
//	}
//	return 0;
//}

//int main()
//{
//
//	int a = 0;//语句以分号结尾
//	;//单独一个分号也是语句 - 空语句
//
//	//语法结构
//	// 
//	//if(表达式)// ---- 表达式计算结果如果为真，则执行语句，否则什么都不执行
//	//    语句;
//	
//	//if(表达式）
//	//		语句1;
//	//else
//	//		语句2;
//
//	//if(表达式1）// --- 多分支语句只能执行一条语句
//	//		语句1;
//	//else if(表达式2）
//	//		语句2;
//	//else
//	//		语句3;
//	//
//	//
//	//
//	//
//	//
//	//
//
//	return 0;
//}