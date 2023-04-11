#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int* func_a(int arr[], int arr_len) //1
{
	int* counter = (int*)malloc(sizeof(int)* 1001);

	for (int i = 0; i < 1001; i++)
	{
		counter[i] = 0;
	}
	for (int i = 0; i < arr_len; i++)
	{
		counter[arr[i]]++;
	}
	return counter;
}

int func_b(int arr[], int arr_len) //2
{
	int ret = 0;
	for (int i = 0; i < arr_len; i++)
	{
		if (ret < arr[i] && arr[i] != 0)
		{
			ret = arr[i];
		}
	}
	return ret;
}

int func_c(int arr[], int arr_len) //3
{
	const int INF = 1001;
	int ret = INF;
	for (int i = 0; i < arr_len; i++)
	{
		if (ret > arr[i] && arr[i] != 0)
		{
			ret = arr[i];
		}
	}
	return ret;
}

int solution(int arr[], int arr_len) //4
{
	int* counter = func_a(arr, arr_len);
	int max_cnt = func_b(counter, arr_len);
	int min_cnt = func_c(counter, arr_len);

	return max_cnt / min_cnt;
}

int main(void)
{
	int arr[10] = { 1, 2, 3, 3, 1, 3, 3, 2, 3, 2 };
	int arr_len = 10;
	int ret = solution(arr, arr_len);

	printf("The return value of solution function: %d\n", ret);
}