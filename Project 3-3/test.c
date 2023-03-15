#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>

int main()
{

	char arr1[] = { "where there is a will,there is a way" };
	char arr2[] = { "####################################" };
	int left = 0;
	int right = sizeof(arr2) / sizeof(arr2[0]);
	while(left < right)
	{
		printf("%s\n", arr2);
		arr2[left] = arr1[left];
		left++;
		arr2[right] = arr1[right];
		right--;
	}
	return 0;
}
