#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<string.h>

int main()
{
	char arr1[] = "bit";
	char arr2[] = {'b', 'i', 't'};
	printf("%s\n", arr1);
	printf("%s", arr2);
	printf("%d", strlen(arr2));
}


//-----------������ʽ����쳲�������-------------

//int Fib(int i)
//{
//	int a = 1;
//	int b = 1;
//	int x = 0;
//	int y = 0;
//	int z = 0;
//	if (i == 1 || i == 2)
//	{
//		return 1;
//	}
//	else
//	{
//		for (x=1; x<=i-2; x++)
//		{
//			y = a + b;
//			a = b;
//			b = y;
//		}
//		return y;
//	}
//}
//
//
//int main()
//{
//
//	int i = 0;
//	printf("��������Ҫ��ڼ���쳲���������");
//	scanf("%d", &i);
//	int sum = Fib(i);
//	printf("��%d��쳲�������Ϊ%d", i, sum);
//	return 0;
//}


//--------------�ݹ�ʵ����쳲�������---------------------

//int Fib(int n)
//{
//	if (n > 2)
//	{
//		return Fib(n - 2) + Fib(n - 1);
//	}
//	return 1;
//}
//
//int main()
//{
//
//	int i = 0;//�ڼ���쳲�������
//	printf("������Ҫ��ڼ���쳲���������");
//	scanf("%d", &i);
//	int sum = Fib(i);
//	printf("��%d��쳲�������Ϊ%d", i, sum);
//	return 0;
//}



//---------------�ݹ����n��k�η�---------


//double power(int n, int k)
//{
//	if (k > 0)
//	{
//		return n * power(n, k - 1);
//	}
//	else if(k == 0)
//	{
//		return 1;
//	}
//	else
//	{
//		return 1.0 / power(n, -k);//�����η����ֿɻ��������η���֮һ������kΪ��������дΪ-k��Ϊ���������д����㲿�ֵݹ鼴��
//	}
//}
//
//
//int main()
//{
//
//	int n, k = 0;
//	printf("����n��k�������֣���n��k�η�\n�����룺");
//	scanf("%d %d", &n, &k);
//	double x = power(n, k);
//	printf("%d��%d�η�Ϊ��%lf", n, k, x);
//	return 0;
//}


//---------ÿλ�������------------------------


//int DigitSum(int x)
//{
//	if (x > 9)
//	{
//		return (x%10) + DigitSum(x / 10);//�������һλ����ʣ������ݹ�ִ��
//	}
//	return x;
//}
//
//
//int main()
//{
//
//	int sum = 0;
//	printf("������Ҫ��������֣�");
//	scanf("%d", &sum);
//	int n = DigitSum(sum);
//	printf("��Ϊ%d", n);
//	return 0;
//}



//------�ݹ�ʵ���ַ���������-------------------------


//void reverse_string(char* arr)
//{
//	int len = strlen(arr);//����str����ĳ���
//	char tmp = *arr;//arrΪstr��һ��Ԫ�ص�ַ�������ú�Ϊ��a����
//	*arr = *(arr + len - 1);//��һ��Ԫ�صĵ�ַ���ϳ���ƫ��������ʱ��ָ�����һ��Ԫ�صĵ�ַ�������ú�Ϊ��f��
//
//	*(arr + len - 1) = '\0';//��f��λ�ò���һ��\0
//	if (strlen(arr + 1) >= 2)//�ݹ���ֹ����
//		reverse_string(arr + 1);//�ݹ�
//
//	*(arr + len - 1) = tmp;//��ÿ�εݹ��ó�����Ԫ�طŵ����
//}
//
//int main()
//{
//
//	char str[] = "abcdef";
//	reverse_string(str);
//	printf("%s", str);
//	return 0;
//}



//-------------�ݹ鷽ʽʵ��strlen��������--------------------


//int my_strlen(char* p)//��Ԫ�ص�ַ��Ϊ��char����Ԫ�ص�ַ�����Դ���һ��char*ָ�������Ž��յ�����Ԫ�ص�ַ
//{
//	if (*p != '\0')//�������ж�ԭ�����е�Ԫ���Ƿ�Ϊ��\0��,
//	{
//							//�˴���p�𵽵��ǵ�ַ���ã���һΪ��λ��һ��Ԫ�أ�����Ҫ������
//		return 1 + my_strlen(p + 1);//pָ���һ��Ԫ�صĵ�ַ��p+1��ָ��ԭ����ڶ���Ԫ�أ�����д�ɣ�*p��+1���ǽ����ú��һ���൱��ԭ�����пո񣨵ڶ���Ԫ�أ���һ
//	}
//	return 0;
//}
//int main()
//{
//
//	char arr[] = "i love you";
//	int count = my_strlen(arr);//���鴫�δ���ȥ������Ԫ�صĵ�ַ��arrÿ��Ԫ�ص�������char
//	printf("%d\n", count);
//	return 0;
//}




//------------����ʵ��strlen��������--------------------


//int main()
//{
//
//	char arr[] = "i love you";
//	int i = 0;
//	int count = 0;
//	for (i = 0; i < 1000; i++)
//	{
//		if ('\0' == arr[i])
//		{
//			break;
//		}
//		else
//		{
//			count++;
//		}
//	}
//	printf("%d", count);
//	return 0;
//}



//--------------�ݹ鷽ʽ��n�Ľ׳�---------------------------


//int factorial(int y)
//{
//	if (y > 1)
//	{
//		return y * factorial(y - 1);
//	}
//	else
//	{
//		return 1;
//	}
//}
//
//int main()
//{
//
//	int n = 0;
//	printf("����һ����������׳�\n�����룺");
//	scanf("%d", &n);
//	int x = factorial(n);
//	printf("%d", x);
//	return 0;
//}


//------------������ʽ��n�Ľ׳�------------------------------


//int main()
//{
//
//	int n = 0;
//	int i = 0;
//	int tmp = 1;
//	printf("����һ����������׳�\n�����룺");
//	scanf("%d", &n);
//	for (i = 1; i <= n; i++)
//	{
//		tmp = tmp * i;
//	}
//	printf("%d", tmp);
//	return 0;
//}