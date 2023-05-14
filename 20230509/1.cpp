#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int a, int b)
{
	int answer = 0;

	for (int i=1; i<a*b; i++)
	{
		if (i%a==0 && i%b==0)
		{
			answer = i;
			break;
		}
	}
	return answer;
}

int main(void)
{
	int a = 4;
	int b = 6;
	int ret = solution(a, b);

	printf("Solution함수의 반환 값은 %d입니다.\n", ret);

	return 0;
}