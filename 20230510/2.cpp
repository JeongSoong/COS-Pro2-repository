#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

int solution(int member_age[], int member_age_len, const char* transportation)
{
	int adult_expense = 0;
	int child_expense = 0;

	if (!strcmp(transportation, "Bus")) 
	{
		adult_expense = 40000;
		child_expense = 15000;
	}
	else if (!strcmp(transportation, "Ship")) 
	{
		adult_expense = 30000;
		child_expense = 13000;
	}
	else if (!strcmp(transportation, "Airplane")) 
	{
		adult_expense = 70000;
		child_expense = 45000;
	}

	if (member_age_len >= 10) 
	{
		adult_expense -= adult_expense * 0.1;
		child_expense -= child_expense * 0.2;
	}

	int total_expenses = 0;

	for (int i = 0; i < member_age_len; i++) 
	{
		if (member_age[i] >= 20)
		{
			total_expenses += adult_expense;
		}
		else
		{
			total_expenses += child_expense;
		}
	}

	return total_expenses;
}

int main(void) 
{
	int member_age1[5] = { 13,33,45,11,20 };
	int member_age1_len = 5;
	const char* transportation1 = (char*)malloc(sizeof(char) * 3);
	transportation1 = "Bus";
	int ret1 = solution(member_age1, member_age1_len, transportation1);

	printf("solution 함수의 변환 값은 %d 입니다.\n", ret1);



	int member_age2[10] = { 25,11,27,56,7,19,52,31,77,8 };
	int member_age2_len = 10;
	const char* transportation2 = (char*)malloc(sizeof(char) * 4);
	transportation2 = "Ship";
	int ret2 = solution(member_age2, member_age2_len, transportation2);

	printf("solution 함수의 변환 값은 %d 입니다.\n", ret2);

	return 0;
}