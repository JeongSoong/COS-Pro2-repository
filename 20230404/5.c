#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int s[6];

int solution(int stones[], int stones_len) 
{
    int cnt = 0;
    int current = 0;
    while(current < stones_len) 
	{
        current += stones[current];
        cnt++;
    }
    return cnt;
}

int main(void)
{
	int ans = 0;
	scanf("%d %d %d %d %d %d", &s[0], &s[1], &s[2], &s[3], &s[4], &s[5]);
	ans = solution(s, 6);
	
	printf("개구리는 %d번안에 징검다리를 건널 수 있습니다.\n", ans);
	
	return 0;
}