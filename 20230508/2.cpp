#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int* solution(int people[], int people_len)
{
	int* answer = (int*)malloc(sizeof(int) * 4);
	memset(answer, 0, sizeof(int) * 4);

	for (int i=0; i<people_len; i++)
	{
		if (people[i] >= 105) { answer[3]++; }
		else if (people[i] >= 100) { answer[2]++; }
		else if (people[i] >= 95) { answer[1]++; }
		else { answer[0]++; }
	}
	return answer;
}

int main(void)
{
	int people[] = { 97, 102, 93, 100, 107 };
	int people_len = 5;
	int* ret = solution(people, people_len);

	printf("solution함수의 반환값은 [");
	for (int i = 0; i < 4; i++)
	{
		if (i != 0)
		{
			printf(", ");
		}
		printf("%d", ret[i]);
	}
	printf("] 입니다.\n");
}