#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int solution(int korean, int english)
{
	return 70 * 3 - korean - english;
}

int main(void)
{
	int korean = 70;
	int english = 60;
	int ret = solution(korean, english);

	printf("solution �Լ��� ��ȯ ���� %d�Դϴ�.\n", ret);
}