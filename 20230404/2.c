#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int s[6] = {0, 0, 0, 0, 0, 0};

int max(int s[], int arr_size)
{
    int ret = 0;
    for(int i = 0; i < arr_size; i++)
        if(s[i] > ret)
            ret = s[i];
    return ret;
}

int sum(int s[], int arr_size)
{
    int ret = 0;
    for(int i = 0; i < arr_size; i++)
        ret += s[i];
    return ret;
}

int min(int s[], int arr_size)
{
    int ret = 101;
    for(int i = 0; i < arr_size; i++)
        if(s[i] < ret)
            ret = s[i];
    return ret;
}

int main(void)
{
    int ans;

    printf("비교할 점수 5개를 입력하세요:");
    scanf("%d %d %d %d %d", &s[0], &s[1], &s[2], &s[3], &s[4]);

    ans = sum(s, 5) - max(s, 5) - min(s, 5);

    printf("가장 높은 점수: %d\n", max(s, 5));
    printf("가장 낮은 점수: %d\n", min(s, 5));
    printf("가장 높은 점수와 가장 낮은 점수를 제외한 나머지 점수의 합: %d\n", ans);

    return 0;
}