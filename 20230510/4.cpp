#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(const char* words[], int words_len, const char* word)
{
	int count = 0;

	for (int i = 0; i < words_len; i++) 
	{
		for (int j = 0; j < 4; j++) 
		{
			if (words[i][j] != word[j])
			{
				count++;
			}
		}
	}

	return count;
}

int main(void)
{
	const char* words[3] = { "CODE", "COED", "CDEO" };
	int words_len = 3;
	const char* word = "CODE";
	int ret = solution(words, words_len, word);

	printf("Solution함수의 반환 값은 %d입니다.\n", ret);

	return 0;
}