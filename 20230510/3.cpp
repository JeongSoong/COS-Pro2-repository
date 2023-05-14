#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int scores[], int scores_len)
{
	int answer = 0;
	int sum = 0;
	int score_high = 100;
	int score_low = 0;

	for (int i = 0; i < scores_len; i++)
	{
		sum += scores[i];
		if (scores[i] < score_high)
		{
			score_high = scores[i];
		}
		if (scores[i] > score_low)
		{
			score_low = scores[i];
		}
	}
	answer = (sum - score_high - score_low) / (scores_len - 2);

	return answer;
}

int main(void)
{
	int scores1[10] = { 35, 28, 98, 34, 20, 50, 85, 74, 71, 7 };
	int scores1_len = 10;
	int ret1 = solution(scores1, scores1_len);

	printf("Solution함수의 반환 값은 %d입니다.\n", ret1);

	int scores2[5] = {1, 1, 1, 1, 1};
	int scores2_len = 5;
	int ret2 = solution(scores2, scores2_len);

	printf("Solution함수의 반환 값은 %d입니다.\n", ret2);

	return 0;
}