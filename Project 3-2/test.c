#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>

int main()
{

	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
	int i = 0;
	int z = 11;
	int ch = sizeof(arr) / sizeof(arr[0]);
	//printf("������һ��������");
	//scanf("%d", &z);
	for (i = 0; i < ch; i++)
	{
		if (z == arr[i])
		{
			printf("�ҵ��ˣ��������������±�Ϊ��%d\n", i);
			break;
		}
	}
	if (i == ch)
	{
		printf("δ���������ҵ�����\n");
	}

	return 0;
}