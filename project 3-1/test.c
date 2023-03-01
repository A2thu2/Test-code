#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>

int main()
{
	int ch = 0;
	while((ch = getchar()) != EOF)
	{
		if (ch < '0' || ch > '9')
		{
			continue;
		}
		putchar(ch);
	}

	return 0;
}


//int main()
//{
//	int ret = 0;
//	char password[20] = { 0 };
//	int ch;
//	printf("请输入密码：");
//	scanf("%s", password);//输入函数会创建一个输入缓冲区，从里面拿数据，scanf会取走空格或者回车符（\n）前的字符，而getchar会取走剩下的缓冲区内的字符，且一次只能取一个字符
//	while ((ch = getchar()) != '\n')//所以scanf后跟一个getchar可清空输入缓冲区，以便后面的getchar函数可正常使用,判断getchar是否取到回车符，取到则停止循环
//	{
//		;//空语句，循环体不使用
//	}
//	printf("请确认输入(Y/N)：");
//	ret = getchar();
//	if (ret == 'Y')
//	{
//		printf("确认成功");
//	}
//	else
//	{
//		printf("取消确认");
//	}
//
//	return 0;
//}

//int main()
//{
//
//	int ch = 0;
//	while ((ch = getchar()) != EOF)//EOF - end of file - 文件结束标志（就像字符串的结束标志\0一样），键入ctrl + z后 getchar就会得到一个EOF - EOF本质上是个-1
//	{
//		putchar(ch);
//	}
//
//	return 0;
//}