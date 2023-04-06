#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int price[], int price_len, int money)
{
    int answer = 0;
    for (int i = 0; i < price_len; i++)
    {
        answer += price[i];
    }
    if (money >= answer)
    {
        answer = money - answer;
        return answer;
    }
    else
    {
        return -1;
    }
}

int main(void)
{
    int m[4];

    int money;

    int ans = 0;

    printf("물건값 4개를 입력하세요: ");
    scanf("%d %d %d %d", &m[0], &m[1], &m[2], &m[3]);

    printf("받은 돈을 입력하세요: ");
    scanf("%d", &money);

    ans = solution(m, 4, money);

    if (money != -1) 
    {
        printf("거스름돈은 %d원 입니다.\n", ans);
    }
    else { printf("지불 금액이 모자랍니다.\n"); }

    return 0;
}