#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
int solution(int price, char* grade)
{
	int answer = 0;
	double percent;
	int sale_price;

	if (grade == "S")
	{
		percent = 0.05;
	}
	else if (grade == "G")
	{
		percent = 0.1;
	}
	else if (grade == "V")
	{
		percent = 0.15;
	}

	sale_price = price * percent;

	answer = price - sale_price;

	return answer;
}

int main(void)
{
	int price1 = 2500;
	char* grade1 = "V";
	int ret1 = solution(price1, grade1);

	printf("solution 함수의 반환 값은 %d입니다.\n", ret1);

	int price2 = 96900;
	char* grade2 = "S";
	int ret2 = solution(price2, grade2);

	printf("solution 함수의 반환 값은 %d입니다.\n", ret2);
}