#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>



void print(int x)//1234
{
	if (x > 9)
	{
		print(x / 10);
	}
	printf("%d ", x%10);//���ܰ���һ��д��else�����������
}


int main()
{
	int i = 0;
	printf("������һ��Ҫ�����ӡ�����֣�");
	scanf("%d", &i);
	print(i);
	return 0;
}




//--------ʵ�ִ�ӡ�к���Ϊ�������ֵĳ˷��ھ���-------------------

//mul(int i)
//{
//	int j = 0;
//	int y = 0;
//	for (j = 1; j <= i; j++)
//	{
//		for (y = 1; y <= j; y++)
//		{
//			if (j < 10)
//			{
//				printf("%-2d*%d=%-3d ", j, y, j * y);
//			}
//			else
//			{
//				printf("%d*%d=%-3d ", j, y, j * y);
//			}
//		}
//		printf("\n");
//	}
//}
//
//
//int main()
//{
//
//	int i = 0;
//	printf("����˷��ھ��������");
//	scanf("%d", &i);
//	mul(i);
//
//	return 0;
//}



//---------------------������������-------------------------------------------------------------------------------

//change(int* x, int* y)
//{
//	int tmp = *x;
//	*x = *y;
//	*y = tmp;
//}
//
//int main()
//{
//
//	int a = 10;
//	int b = 20;
//	printf("a=%d b=%d\n", a, b);
//	change(&a, &b);
//	printf("a=%d b=%d", a, b);
//	return 0;
//}


//-------------------����һ�κ���sum��ֵ��1--------------------------------------------------------------------

//void sum(int* p)
//{
//	(*p)++;//++���ȼ�����*�ţ�����++������p������*p������*p������
//}
//
//int main()
//{
//
//	int num = 0;
//	sum(&num);
//	printf("%d\n", num);
//	sum(&num);
//	printf("%d\n", num);
//	sum(&num);
//	printf("%d\n", num);
//	return 0;
//}



//----------------------------����ʵ����������������ֲ���-------------------------------------------------------------------------------------------------------

//				  //��ʱ��arr��һ��ָ�룬����ʱ���ں�������������С�Ļ�sizeof(arr)Ϊ����arrָ���С��32λƽָ̨���СΪ4�ֽڣ�64λƽ̨Ϊ8�ֽ�
//int binary_search(int arr[], int x, int sz)
//{
//	int left = 0;
//	int right = sz - 1;
//	while (left<=right)
//	{
//		int mid = (left + right) / 2;
//		if (arr[mid] < x)
//		{
//			left = mid + 1;
//		}
//		else if (arr[mid] > x)
//		{
//			right = mid - 1;
//		}
//		else
//		{
//			return mid;
//		}
//	}
//	return 0;
//}
//
//int main()
//{
//
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	printf("������Ҫ���ҵ�����");
//	scanf("%d", &i);
//	int ret = binary_search(arr, i, sz);//���պ�������ֵ�����ҵ���retΪ�������±꣬���Ҳ�����ret����0
//	                                    //���鴫��ʱ�������������һ��Ԫ�صĵ�ַ����������ʱ���������Ԫ�صĵ�ַ
//	if (ret == 0)
//	{
//		printf("\n�Ҳ�������\n");
//	}
//	else
//	{
//		printf("\n�ҵ���,�������е��±��ǣ�%d\n", ret);
//	}
//
//	return 0;
//}



//-------------------------�ж�����---------------------------------------------------------------------------------------------------

//is_prime_number(int x)
//{
//	int j = 0;
//	for (j = 2; j < x; j++)
//	{
//		if (x % j == 0)
//		{
//			return 1;
//		}
//	}
//	return 0;
//}
//
//int main()
//{
//
//	int i = 0;
//	int judge = 0;
//	//int k = 0;
////again:
//	//printf("\n�������ж�����");
//	//scanf("%d", &i);
//	for (i = 100; i <= 200; i++)
//	{
//		int num = is_prime_number(i);
//		if (0 == num)
//		{
//			printf("%d ", i);
//		}
//	}
//
//
//
//	//printf("\n�Ƿ�����жϣ�����1����  ����0�˳���\n��ѡ��");
//	//scanf("%d", &judge);
//	//switch (judge)
//	//{
//	//case 1:
//	//		goto again;
//	//		break;
//	//case 0:
//	//	printf("�˳�����\n");
//	//	break;
//	//default:
//	//	printf("�����������������\n");
//	//	goto again;
//	//	break;
//	//}
//	return 0;
//}