#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>

int main()
{
	int i = 0;
	double sum = 0.0;
	int flag = 1;
	for (i = 1; i <= 100; i++)
	{
		sum = sum+ flag*(1.0 / i);//sum += flag*��1.0/i��
		flag = -flag;//ѭ��ʹ�ã�1.0/i���任������
	}
	printf("%lf", sum);
	return 0;
}

//���󣺵��������ĸ�ۼ�������Ϸ�ĸ�ı���ԭʽ��С
//int main()
//{
//
//	int a = 0;
//	int count = 0;
//	for (a = 1; a <= 100; a++)//�����棺��λΪ9ʱ��a%10������9��ʮλΪ9ʱa/10������9������if�ֿ�д������д��if elseif����ʽ����Ϊ�����ڼ������λΪ9�������û�л���ִ��elseif��䣬����99������һ��9.
//	{
//		if (a % 10 == 9 )
//		{
//			printf("%d ", a);
//			count++;
//		}
//		if (a / 10 == 9)
//		{
//			printf("%d ", a);
//			count++;
//		}
//	}
//	printf("һ����%d��", count);
//	return 0;
//}


//int main()
//{
//
//	int a = 0;
//	int count = 0;
//	for (a = 1; a <= 100; a++)
//	{
//		if (a % 10 == 9 || a / 9 == 10)
//		{
//			printf("%d ", a);
//			count++;
//		}
//		if (a == 99)
//		{
//			count++;
//		}
//	}
//	printf("һ����%d��", count);
//	return 0;
//}



//int main()
//{
//
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int left = 0;
//	int right = sizeof(arr) / sizeof(arr[0]);
//	int a = 0;
//	scanf("%d", &a);
//	while (left <= right)
//	{
//		int x = (left + right) / 2;
//		if (arr[x] < a)
//		{
//			left = x + 1;
//		}
//		else if (arr[x] > a)
//		{
//			right = x - 1;
//		}
//		else
//		{
//			printf("\n�ҵ��ˣ��������������±�Ϊ��%d\n", x);
//			break;
//		}
//	}
//	if (left > right)
//	{
//		printf("\n�������Ҳ�������\n");
//	}
//
//	return 0;
//}