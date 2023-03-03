#include <stdio.h>

void num1(void);
void num2(void);
void num3(void);
void num4(void);
void num5(void);
void num6(void);
void num7(void);
void num8(void);
void num9(void);

void num1(void)
{
	int numArr[3][4] =
	{
		{ 11, 22, 33, 44 },
		{ 55, 66, 77, 88 },
		{ 99, 110, 121, 132 }
	};

	printf("%d\n", numArr[0][0]);
	printf("%d\n", numArr[1][2]);
	printf("%d\n", numArr[2][0]);
	printf("%d\n", numArr[2][3]);
}

void num2(void)
{
	int numArr[3][4] = { 0, };
	printf("%d\n", numArr[0][0]);
	printf("%d\n", numArr[1][2]);
	printf("%d\n", numArr[2][0]);
	printf("%d\n", numArr[2][3]);
}

void num3(void)
{
	int numArr[3][4];

	numArr[0][0] = 11;
	numArr[0][1] = 22;
	numArr[0][2] = 33;
	numArr[0][3] = 44;

	numArr[1][0] = 55;
	numArr[1][1] = 66;
	numArr[1][2] = 77;
	numArr[1][3] = 88;

	numArr[2][0] = 99;
	numArr[2][1] = 110;
	numArr[2][2] = 121;
	numArr[2][3] = 132;

	printf("%d\n", numArr[0][0]);
	printf("%d\n", numArr[1][2]);
	printf("%d\n", numArr[2][0]);
	printf("%d\n", numArr[2][3]);
}

void num4(void)
{
	int numArr[3][4];

	numArr[0][0] = 11;
	numArr[0][1] = 22;
	numArr[0][2] = 33;
	numArr[0][3] = 44;

	numArr[1][0] = 55;
	numArr[1][1] = 66;
	numArr[1][2] = 77;
	numArr[1][3] = 88;

	numArr[2][0] = 99;
	numArr[2][1] = 110;
	numArr[2][2] = 121;
	numArr[2][3] = 132;

	printf("%d\n", numArr[-1][-1]);
	printf("%d\n", numArr[0][4]);
	printf("%d\n", numArr[4][0]);
	printf("%d\n", numArr[5][5]);
}

void num5(void)
{
	int numArr[3][4] =
	{
		{ 11, 22, 33, 44 },
		{ 55, 66, 77, 88 },
		{ 99, 110, 121, 132 }
	};

	printf("%d\n", sizeof(numArr));

	int col = sizeof(numArr[0]) / sizeof(int);

	int row = sizeof(numArr) / sizeof(numArr[0]);

	printf("%d\n", col);
	printf("%d\n", row);
}

void num6(void)
{
	int numArr[3][4] =
	{
		{ 11, 22, 33, 44 },
		{ 55, 66, 77, 88 },
		{ 99, 110, 121, 132 }
	};

	printf("%d\n", sizeof(numArr));

	int col = sizeof(numArr[0]) / sizeof(int);

	int row = sizeof(numArr) / sizeof(numArr[0]);

	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < col; j++)
		{
			printf("%d ", numArr[i][j]);
		}
		printf("\n");
	}
}

void num7(void)
{
	int numArr[3][4] =
	{
		{ 11, 22, 33, 44 },
		{ 55, 66, 77, 88 },
		{ 99, 110, 121, 132 }
	};

	printf("%d\n", sizeof(numArr));

	int col = sizeof(numArr[0]) / sizeof(int);

	int row = sizeof(numArr) / sizeof(numArr[0]);

	for (int i = row - 1; i >= 0; i--)
	{
		for (int j = col - 1; j >= 0; j--)
		{
			printf("%d ", numArr[i][j]);
		}
		printf("\n");
	}
}

void num8(void)
{
	int numArr[3][4] =
	{
		{ 11, 22, 33, 44 },
		{ 55, 66, 77, 88 },
		{ 99, 110, 121, 132 }
	};

	int(*numPtr)[4] = numArr;

	printf("%p\n", *numPtr);
	printf("%p\n", *numArr);
	printf("%d\n", numPtr[2][1]);
	printf("%d\n", sizeof(numArr));
	printf("%d\n", sizeof(numPtr));

}

void num9(void)
{
	int matrix[8][8] =
	{
		{1,2,3,4,5,6,7,8},
		{9,10,11,12,13,14,15,16},
		{17,18,19,20,21,22,23,24},
		{25,26,27,28,29,30,31,32},
		{33,34,35,36,37,38,39,40},
		{41,42,43,44,45,46,47,48},
		{49,50,51,52,53,54,55,56},
		{57,58,59,60,61,62,63,64}
	};

	for (int i = 0; i < (sizeof(matrix) / sizeof(matrix[0])); i++)
	{
		printf("%d ", matrix[i][i]);
	}

}

int main(void) 
{

	num1();
	num2();
	num3();
	num4();
	num5();
	num6();
	num7();
	num8();
	num9();

	return 0;
}