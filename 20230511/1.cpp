#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int korean, int english)
{
	int answer = 0;
	int sum = 0;

	sum = answer + korean + english;

	sum = 210;

	answer = sum - korean - english;

	return answer;
}

int main(void)
{
	int korean = 70;
	int english = 60;
	int ret = solution(korean, english);

	printf("Solution�Լ��� ��ȯ ���� %d�Դϴ�.\n", ret);

	return 0;
}