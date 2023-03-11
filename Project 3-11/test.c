#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>

int main(int argc, char* argv[])
{
	int i = 1;
	scanf("%d", &i);
	int arr[6];
	//int target = 0;
	//scanf("%d", &i);
	scanf("%d%d%d%d%d%d", &arr[0], &arr[1], &arr[2], &arr[3], &arr[4], &arr[5]);
	int target = 0;
	scanf("%d", &target);
	int left = 0;
	int right = sizeof(arr) / sizeof(arr[0]);
	int x = (left + right) / 2;
	while (left <= right)
	{
		if (arr[x] < arr[target])
		{
			left = x + 1;
		}
		else if (arr[x] > arr[target])
		{
			right = x - 1;
		}
		else
		{
			printf("%d", x);
			break;
		}
	}
	return 0;
}