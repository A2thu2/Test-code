#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>//标准输入输出头文件，使用库函数(printf scanf )需要声明
#include<string.h>

struct Book//定义结构体
{
	char name[20];//数组表示变量name最多只能容纳20个元素
	short price;
};

int main()
{

	struct Book b1 = {"c语言程序设计", 55 };//利用结构体创建该结构体变量
	struct Book* pb = &b1;//定义指针变量取出结构体b1地址 
	printf("书名：%s\n", (*pb).name);
	printf("价格：%d\n", pb->price);
	pb->price = 35;
	strcpy(b1.name, "C++");//strcpy - string copy - 字符串拷贝 - 库函数 - 要引入string.h头文件---不能使用改变price的方式改变name，因为name是一个数组名，数组名本质上是一个地址，而price是一个变量（可直接赋值）
	printf("降价后价格为：%d\n", b1.price);
	printf("更改后书名为：%s\n", pb->name);
	//- b1.price - (*pb).price - pb->price - 三种表达结果一样
	//printf("书名：%s\n", b1.name);
	//printf("价格：%d\n", b1.price);
	//b1.price = 35;
	//printf("降价后价格为：%d\n", b1.price);

	return 0;
}


//int main() {
//
//    printf("     **     \n");
//    printf("     **     \n");
//    printf("************\n");
//    printf("************\n");
//    printf("    *  *    \n");
//    printf("    *  *    \n");
//    return 0;
//}

////定义函数
//int Max(int x, int y)
//{
//	if (x > y)
//		return x;
//	else
//		return y;
//}
//
////定义宏
//#define MAX(X, Y) (X>Y?X:Y)
//
//int main()
//{
//
//	int a = 10;
//	int b = 20;
//	int max = 0;
//	//函数实现
//	max = Max(a, b);
//	printf("函数计算max = %d\n", max);
//	//宏实现
//	max = MAX(a, b);
//	printf("宏计算max = %d\n", max);
//	return 0;
//}

//static修饰局部变量时，让静态局部变量的生命周期会变长
// 全局变量和函数可在同工程不同源文件中引用（因为全局变量作用域大，而函数具有外部链接属性），使用关键字extern -- 声明外部符号
// extern int z ;---- 引用外部全局变量
// extern int Add(int, int); --- 饮用外部函数（只要知道函数参数值类型就行）
//static修饰全局变量时，让静态全局变量只能在自己所在的源文件内部使用
//static修饰函数时，改变了函数的链接属性 --  由外部链接属性改变为内部链接属性
//void test()//a为局部变量，内存创建空间存放并赋值a、自加、打印执行完后，为a创建的内存空间以及赋值都清除，下次调用函数时a依旧等于1
//{
//	int a = 1;//加上static关键字后a就是一个静态局部变量，函数执行完一次后不销毁a，循环5次后a为23456
//	a++;
//	printf("a = %d\n", a);
//}
//
//int main()
//{
//	int i = 0;
//	while (i < 5)
//	{
//		test();
//		i++;
//	}
//
//	return 0;
//}

//int Max(int x, int y)//定义Max函数，返回一个最大值
//{
//		if (x > y)
//		{
//			return x;
//		}
//		else
//		{
//			return y;
//		}
// }
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int max = 0;
//	printf("输入两个整数：");
//	scanf("%d %d", &a, &b);
//	max = Max(a, b);//最大值赋值给max
//	printf("max=%d\n", max);
//	return 0;
//}

//int Add(int a, int b)
//{
//	int z = a + b;
//	return z;
//}
//
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int z = 0;
//
//	printf("输入两个操作数：");
//	scanf("%d %d", &a, &b);
//	z = Add(a, b);
//	printf("z = %d\n", z);
//	return 0;
//}

//int main()
//{
//	int a = 0;
//	int b = 0;
//	int sum = 0;
//	printf("输入两个操作数：");
//	scanf("%d %d", &a, &b);
//	sum = a + b;
//	printf("相加等于：%d", sum);
//
//	return 0;
//}

//int main()
//{
//	int line = 0;
//	printf("上大学\n");
//
//	while(line<20000)
//	{
//		printf("敲一行代码 ：%d\n", line);
//		line++;
//	}
//	if (line >= 20000)
//	{
//		printf("好offer\n");
//	}
//
//	return 0;
//}

//int main()
//{
//	int input = 0;
//	printf("上大学\n");
//	printf("你要好好学习嘛（1/0）>:");
//	scanf("%d", &input);//csanf双引号内输入值后不加\n换行，识别不了
//	if (input == 1)
//	{
//		printf("好offer");
//	}
//	else
//	{
//		printf("烤红薯");
//	}
//	return 0;
//}

//int main()
//{
//	printf("%c\n", '288');
//	//printf("%d\n", strlen("abcdef"));
//	//\t - 制表符转义
//	//\32 - 32是两个八进制数字,八进制32对应十进制26，再将ASCII码表上对应26的字符输出到屏幕上
//	return 0;
//}

//int main()
//{
//	printf("c:\\text\\32\\text.c");
//
//	return 0;
//}

//int main()
//{
//	char arr1[] = "abc";
//	char arr2[] = { 'a', 'b', 'c'};
//	printf("%d\n", strlen(arr1));//stelen - string length - 计算字符串长度
//	printf("%d\n", strlen(arr2));
//	return 0;
//}

//int main()
//{
//	char arr1[] = "abc";//定义数组
//	//"abc"--'a' 'b' 'c' '\0'--'\0'是字符串的结束标志
//	char arr2[] = {'a', 'b', 'c',0};//'\0'等于在数组直接输入0，没有结束标志'\0'的话不会结束打印，后面出现的乱码为随机值打印
//	printf("%s\n", arr1);
//	printf("%s\n", arr2);
//
//	return 0;
//}

//int main()
//{
//
//	int num1 = 0;
//	int num2 = 0;
//	int sum = 0;//定义变量
//	scanf("%d%d", &num1, &num2);//输入函数，替换前面定义的变量的值
//	sum = num1 + num2;//相加赋值给sum
//	printf("sum = %d\n", sum);//打印输出
//	return 0;
//}