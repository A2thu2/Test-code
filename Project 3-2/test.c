#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>

int main()
{
    int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
    int left = 0;//�����һ��Ԫ���±�
    int sz = sizeof(arr) / sizeof(arr[0]);//����Ԫ�ظ���
    int right = sz - 1;//�������һ��Ԫ���±�
    int num = 0;
    printf("������Ҫ���ҵ�����");
    scanf("%d", &num);
    while (left <= right)//���ֲ��ҷ�
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
            printf("�ҵ��ˣ����������±���%d\n", k);
            break;
        }

    }
    if (left > right)
    {
        printf("�������Ҳ�������\n");
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
//	//printf("������һ��������");
//	//scanf("%d", &z);
//	for (i = 0; i < ch; i++)
//	{
//		if (z == arr[i])
//		{
//			printf("�ҵ��ˣ��������������±�Ϊ��%d\n", i);
//			break;
//		}
//	}
//	if (i == ch)
//	{
//		printf("δ���������ҵ�����\n");
//	}
//
//	return 0;
//}