#include <stdio.h>

int i = 0, j = 0;

int *score_rank(int *score)
{
	static int Rank[8] = { 1, 1, 1, 1, 1, 1, 1, 1 };
	for (i = 0; i < 8; i++)
	{
		for (j = i; j < 8; j++)
		{
			if (score[i] < score[j])
			{
				Rank[i] += 1;
			}
			else if (score[i] > score[j])
			{
				Rank[j] += 1;
			}
		}
	}

	return Rank;
}

int main(void)
{
	int score[8] = { 90, 87, 87, 23, 35, 28, 12, 46 };
	int *Rank=score_rank(score);

	printf("µî¼ö´Â: ");
	for (i = 0; i < 8; i++)
	{
		printf("%d ", Rank[i]);
	}
	return 0;
}