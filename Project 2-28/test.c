#define _CRT_SECURE_NO_WARNINGS 

#include<stdio.h>;
#include<string.h>;

int main()
{
	int x = 1;
	while(x <= 100)
	{
		if (x % 2 == 1)
		{
			printf("%d\n", x);
		}
		x++;
	}

	return 0;
}

//int main()
//{
//
//	int num = 4;
//	if (num = 5)//һ������Ϊ��ֵ�������Ⱥ��ж���ȣ�����������Ϊ�Ǻǣ��ɽ���������λ�õ�����һ���Ⱥ��Ǳ������ʹ���ĸ��ʣ�5 == num
//	{
//		printf("�Ǻ�\n");
//	}
//
//	return 0;
//}


//int main()
//{
//	int x, y;
//	if (condition)
//	{
//		return x;
//	}
//	return y;//��������condition����������x�����򷵻�y����Ϊreturn����ֹ�����ģ���condition����������ֹ,��ִ��return y;
//	return 0;
//}

//int main()
//{
//	int a = 0;
//	int b = 0;
//	if (a == 1);
//		if (b == 2);
//			printf("����\n");
//	else//����else������������δƥ���if��ƥ�䣬�˳����һ��if�����㣬��������������Ҫע������ŵ�ʹ��
//		printf("�Ǻ�\n");
//
//	return 0;
//}

//int main()
//{
//	int age;
//	printf("������������䣺");
//	scanf("%d", &age);
//	if(age < 18)
//	{
//		printf("δ����\n");
//	}
//	else
//	{
//		if(age < 28 && age >= 18)
//		{
//			printf("����\n");
//		}
//		else if(age < 50 && age >= 28)
//		{
//			printf("׳��\n");
//		}
//		else if (age < 90 && age >= 50)
//		{
//			printf("ĺ��\n");
//		}
//		else
//		{
//			printf("����\n");
//		}
//	}
//	return 0;
//}

//int main()
//{
//
//	int a = 0;//����ԷֺŽ�β
//	;//����һ���ֺ�Ҳ����� - �����
//
//	//�﷨�ṹ
//	// 
//	//if(���ʽ)// ---- ���ʽ���������Ϊ�棬��ִ����䣬����ʲô����ִ��
//	//    ���;
//	
//	//if(���ʽ��
//	//		���1;
//	//else
//	//		���2;
//
//	//if(���ʽ1��// --- ���֧���ֻ��ִ��һ�����
//	//		���1;
//	//else if(���ʽ2��
//	//		���2;
//	//else
//	//		���3;
//	//
//	//
//	//
//	//
//	//
//	//
//
//	return 0;
//}