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
//	printf("���������룺");
//	scanf("%s", password);//���뺯���ᴴ��һ�����뻺�����������������ݣ�scanf��ȡ�߿ո���߻س�����\n��ǰ���ַ�����getchar��ȡ��ʣ�µĻ������ڵ��ַ�����һ��ֻ��ȡһ���ַ�
//	while ((ch = getchar()) != '\n')//����scanf���һ��getchar��������뻺�������Ա�����getchar����������ʹ��,�ж�getchar�Ƿ�ȡ���س�����ȡ����ֹͣѭ��
//	{
//		;//����䣬ѭ���岻ʹ��
//	}
//	printf("��ȷ������(Y/N)��");
//	ret = getchar();
//	if (ret == 'Y')
//	{
//		printf("ȷ�ϳɹ�");
//	}
//	else
//	{
//		printf("ȡ��ȷ��");
//	}
//
//	return 0;
//}

//int main()
//{
//
//	int ch = 0;
//	while ((ch = getchar()) != EOF)//EOF - end of file - �ļ�������־�������ַ����Ľ�����־\0һ����������ctrl + z�� getchar�ͻ�õ�һ��EOF - EOF�������Ǹ�-1
//	{
//		putchar(ch);
//	}
//
//	return 0;
//}