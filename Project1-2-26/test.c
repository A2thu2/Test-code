#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>//��׼�������ͷ�ļ���ʹ�ÿ⺯��(printf scanf )��Ҫ����
#include<string.h>

struct Book//����ṹ��
{
	char name[20];//�����ʾ����name���ֻ������20��Ԫ��
	short price;
};

int main()
{

	struct Book b1 = {"c���Գ������", 55 };//���ýṹ�崴���ýṹ�����
	struct Book* pb = &b1;//����ָ�����ȡ���ṹ��b1��ַ 
	printf("������%s\n", (*pb).name);
	printf("�۸�%d\n", pb->price);
	pb->price = 35;
	strcpy(b1.name, "C++");//strcpy - string copy - �ַ������� - �⺯�� - Ҫ����string.hͷ�ļ�---����ʹ�øı�price�ķ�ʽ�ı�name����Ϊname��һ������������������������һ����ַ����price��һ����������ֱ�Ӹ�ֵ��
	printf("���ۺ�۸�Ϊ��%d\n", b1.price);
	printf("���ĺ�����Ϊ��%s\n", pb->name);
	//- b1.price - (*pb).price - pb->price - ���ֱ����һ��
	//printf("������%s\n", b1.name);
	//printf("�۸�%d\n", b1.price);
	//b1.price = 35;
	//printf("���ۺ�۸�Ϊ��%d\n", b1.price);

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

////���庯��
//int Max(int x, int y)
//{
//	if (x > y)
//		return x;
//	else
//		return y;
//}
//
////�����
//#define MAX(X, Y) (X>Y?X:Y)
//
//int main()
//{
//
//	int a = 10;
//	int b = 20;
//	int max = 0;
//	//����ʵ��
//	max = Max(a, b);
//	printf("��������max = %d\n", max);
//	//��ʵ��
//	max = MAX(a, b);
//	printf("�����max = %d\n", max);
//	return 0;
//}

//static���ξֲ�����ʱ���þ�̬�ֲ��������������ڻ�䳤
// ȫ�ֱ����ͺ�������ͬ���̲�ͬԴ�ļ������ã���Ϊȫ�ֱ���������󣬶����������ⲿ�������ԣ���ʹ�ùؼ���extern -- �����ⲿ����
// extern int z ;---- �����ⲿȫ�ֱ���
// extern int Add(int, int); --- �����ⲿ������ֻҪ֪����������ֵ���;��У�
//static����ȫ�ֱ���ʱ���þ�̬ȫ�ֱ���ֻ�����Լ����ڵ�Դ�ļ��ڲ�ʹ��
//static���κ���ʱ���ı��˺������������� --  ���ⲿ�������Ըı�Ϊ�ڲ���������
//void test()//aΪ�ֲ��������ڴ洴���ռ��Ų���ֵa���Լӡ���ӡִ�����Ϊa�������ڴ�ռ��Լ���ֵ��������´ε��ú���ʱa���ɵ���1
//{
//	int a = 1;//����static�ؼ��ֺ�a����һ����̬�ֲ�����������ִ����һ�κ�����a��ѭ��5�κ�aΪ23456
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

//int Max(int x, int y)//����Max����������һ�����ֵ
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
//	printf("��������������");
//	scanf("%d %d", &a, &b);
//	max = Max(a, b);//���ֵ��ֵ��max
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
//	printf("����������������");
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
//	printf("����������������");
//	scanf("%d %d", &a, &b);
//	sum = a + b;
//	printf("��ӵ��ڣ�%d", sum);
//
//	return 0;
//}

//int main()
//{
//	int line = 0;
//	printf("�ϴ�ѧ\n");
//
//	while(line<20000)
//	{
//		printf("��һ�д��� ��%d\n", line);
//		line++;
//	}
//	if (line >= 20000)
//	{
//		printf("��offer\n");
//	}
//
//	return 0;
//}

//int main()
//{
//	int input = 0;
//	printf("�ϴ�ѧ\n");
//	printf("��Ҫ�ú�ѧϰ�1/0��>:");
//	scanf("%d", &input);//csanf˫����������ֵ�󲻼�\n���У�ʶ����
//	if (input == 1)
//	{
//		printf("��offer");
//	}
//	else
//	{
//		printf("������");
//	}
//	return 0;
//}

//int main()
//{
//	printf("%c\n", '288');
//	//printf("%d\n", strlen("abcdef"));
//	//\t - �Ʊ��ת��
//	//\32 - 32�������˽�������,�˽���32��Ӧʮ����26���ٽ�ASCII����϶�Ӧ26���ַ��������Ļ��
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
//	printf("%d\n", strlen(arr1));//stelen - string length - �����ַ�������
//	printf("%d\n", strlen(arr2));
//	return 0;
//}

//int main()
//{
//	char arr1[] = "abc";//��������
//	//"abc"--'a' 'b' 'c' '\0'--'\0'���ַ����Ľ�����־
//	char arr2[] = {'a', 'b', 'c',0};//'\0'����������ֱ������0��û�н�����־'\0'�Ļ����������ӡ��������ֵ�����Ϊ���ֵ��ӡ
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
//	int sum = 0;//�������
//	scanf("%d%d", &num1, &num2);//���뺯�����滻ǰ�涨��ı�����ֵ
//	sum = num1 + num2;//��Ӹ�ֵ��sum
//	printf("sum = %d\n", sum);//��ӡ���
//	return 0;
//}