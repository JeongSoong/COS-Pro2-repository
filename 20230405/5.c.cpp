#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int arr1[][4], int arr_row_len, int arr_col_len, int k)
{
	int answer = 0;
	int size = arr_row_len * arr_col_len;
	int* arr2 = (int*)malloc(sizeof(int) * size);
	int count = 0;
	for (int i = 0; i < arr_row_len; i++)
	{
		for (int j = 0; j < arr_col_len; j++)
		{
			arr2[count++] = arr1[i][j];
		}
	}
	for (int i = 0; i < size; i++)
	{
		for (int j = 0; j < size - 1 - i; j++)
		{
			if (arr2[j] < arr2[j + 1])
			{
				int temp = arr2[j];
				arr2[j] = arr2[j + 1];
				arr2[j + 1] = temp;
			}
		}
	}
	answer = arr2[size - k];
	free(arr2);
	return answer;
}

int main() {
	int arr1[4][4] = {
	{5,12,4,31},
	{24,13,11,2},
	{43,44,19,26},
	{33,65,20,21}
	};
	printf(" n번째 작은 값 n = ");
	int num1;
	scanf("%d", &num1);
	int num2 = solution(arr1, 4, 4, num1);
	printf(" %d번째 작은 값 : %d\n", num1, num2);
	return 0;

}