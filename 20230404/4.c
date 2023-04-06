#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int* solution(int scores[], int scores_len)
{
    int* grade_counter = (int*)malloc(sizeof(int)*5);
    for(int i = 0; i < 5; ++i)
	{
        grade_counter[i] = 0;
	}

    for(int i = 0; i < scores_len; ++i)
    {
        if(scores[i] >= 85)
		{
            grade_counter[0] += 1;
		}
        else if(scores[i] >=70)
		{
            grade_counter[1] += 1;
		}
        else if(scores[i] >= 55)
		{
            grade_counter[2] += 1;
		}
        else if(scores[i] >= 40)
		{
            grade_counter[3] += 1;
		}
        else
		{
            grade_counter[4] += 1;
		}
    }
    return grade_counter;
}

int main(void)
{
    int scores[5];
    printf("학생들의 점수 5개를 입력하세요: ");
    scanf("%d %d %d %d %d", &scores[0], &scores[1], &scores[2], &scores[3], &scores[4]);

    int* grade_counter = solution(scores, 5);
	
    printf("[A,B,C,D,F]의 수: [%d, %d, %d, %d, %d]", grade_counter[0], grade_counter[1], grade_counter[2], grade_counter[3], grade_counter[4]);

    free(grade_counter);
    return 0;
}