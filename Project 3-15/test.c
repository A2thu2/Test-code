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
		printf("��ĵ��Խ���һ���Ӻ��Զ��ػ���ȡ���ػ������룺������\n�����룺");
		scanf("%s", input);
		if (strcmp(input, "������") == 0)//strcmp�����Ƚ������ַ����Ƿ���ȣ������Ϊ�٣�ֵΪ0��
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
//	printf("��ĵ��Խ���һ���Ӻ��Զ��ػ���ȡ���ػ������룺������\n�����룺");
//	scanf("%s", input);
//	if (strcmp(input, "������") == 0)
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