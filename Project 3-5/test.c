#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<string.h>
#include<windows.h>
#include<stdlib.h>
#include<math.h>

//int main()
//{
//
//	int num1 = 0;
//	int count = 0;
//	//�ж���������
//	//����ֻ�ܱ�1������������
//
//	////1���Գ���
//	//for (num1=100; num1<=200; num1++)//����100-200֮�����
//	//{
//	//	int i = 0;
//	//	for (i = 2; i < num1; i++)//����2��ÿ����һ��num1-1����
//	//	{
//	//		if (num1%i == 0)//�ж�num1�Ƿ���Ա�2��num1-1�ĵ�������
//	//		{
//	//			break;//��������ʾ��������������forѭ��
//	//		}
//	//	}
//	//	if (i == num1)//��num1��2��num1-1֮���������ʱ������i=num1�ˣ������forѭ���ͻ����������ڶ�����������ж��Ƿ�num1�Ƿ�Ϊ�����ģ����Խ��ڶ��������ӡ
//	//	{
//	//		printf("%d ", num1);
//	//		count++;//������ÿ��ӡһ�������ͼ�һ���������ľ��������ĸ���
//	//	}
//	//}
//	//printf("\ncount=%d\n", count);
//	//���Ż�����1����Ϊ������ӵ�г�1��������������ӣ�����Щ������һ������һ��������С�ڵ��ڴ˷�������ƽ������������2��������ƽ��֮���Ҳ������ӣ�������������
//	//			   �������������е�i<num1�ɸĳ�i<=sqrt(num1) - sqrt()Ϊ��ƽ����ѧ������Ҫ����math.hͷ�ļ�
//	//		  ��2��ż��������������������������������һ�ٵ�����֮���������ѭ���ɸĳ�for(num1=101; num1<=200; i+=2)ֱ������һ��������֮���ż��	
//
//	return 0;
//}

//int main()
//{
//
//	int year = 0;
//	int count = 0;
//	//�ж��Ƿ�Ϊ����
//	//1���ܱ�4�������ǲ��ܱ�100���������
//	//�ܱ�400���������
//	for (year = 1000; year <= 2000; year++)
//	{
//
//		//if (year % 4 == 0 && year % 100 != 0)
//		//{
//		//	printf("%d ", year);
//		//	count++;
//		//}
//		//else if (year % 400 == 0)
//		//{
//		//	printf("%d ", year);
//		//	count++;
//		//}
//
//		if (((year % 4 == 0) && (year % 100 != 0)) || (year % 400 == 0))
//		{
//			printf("%d ", year);
//			count++;
//		}
//	}
//	printf("\ncount=%d", count);
//
//	return 0;
//}

//int main()
//{
//
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	scanf("%d%d", &a, &b);
//	while (a % b != 0)
//	{
//		c = a % b;
//		a = b;
//		b = c;
//	}
//	printf("���Լ����%d", b);
//
//	return 0;
//}

//int main()
//{
//
//	int i = 1;
//	for (i = 1; i <= 100; i++)
//	{
//		if (i % 3 == 0)
//		{
//			printf("%d\n", i);
//		}
//	}
//
//	return 0;
//}


//int main()
//{
//
//	int a = 0, b = 0, c = 0;
//	scanf("%d%d%d", &a, &b, &c);
//	if(a < b)
//	{
//		int tmp = a;
//		a = b;
//		b = tmp;
//	}
//	if (a < c)
//	{
//		int tmp = a;
//		a = c;
//		c = tmp;
//	}
//	if (b < c)
//	{
//		int tmp = b;
//		b = c;
//		c = tmp;
//	}
//	printf("%d %d %d", a, b, c);
//	return 0;
//}

//int main()
//{
//
//	char arr1[20] = "123456";
//	char arr2[20] = "";
//	int i = 0;
//	for (i = 0; i < 3; i++)
//	{
//		printf("����������\n");
//		scanf("%s", arr2);
//		if (strcmp(arr1 , arr2) == 0)//�ж������ַ����Ƿ���Ȳ���ʹ�� == ��Ӧ��ʹ�ÿ⺯�� - strcmp���Ƚ������ַ����Ƿ����,strcmp(arr1 , arr2)�涨 1>2�������� - 1=2����0 - 1<2���ظ���
//		{
//			printf("����������ȷ");
//			break;
//		}
//		//else if(i < 2)
//		//{
//		//	printf("���������������������:\n");
//		//}
//		else
//		{
//			printf("�����������\n");
//		}
//	}
//	if (i == 3)
//	{
//		printf("�����������3�Σ����������˻�");
//	}
//	return 0;
//}

//int main()
//{
//
//	char arr1[] = "where there is a will, there is a way";
//	char arr2[] = "                                     ";
//	int left = 0;
//	int right = strlen(arr1) - 1;//���������Ԫ�ظ�������\0���ⲻ���㣬�ټ�1�����ַ��������һ��Ԫ�ص��±���
//	while (left <= right)
//	{
//		arr2[left] = arr1[left];
//		arr2[right] = arr1[right];
//		system("cls");//ִ��ϵͳ�����һ������ - cls - clean screen - �����Ļ Ҫ����stdlib.hͷ�ļ�        --  �����Ļд�ڴ�ӡǰһ��ʱ���һ��ѭ������������ս��
//		printf("%s\n", arr2);
//		Sleep(500);//����ִ�е��˴���Ϣһ�루��λ�Ǻ��룩��Ҫ����Windows.hͷ�ļ�
//		left++;
//		right--;
//	}
//
//	return 0;
//}