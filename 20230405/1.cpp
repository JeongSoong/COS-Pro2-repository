#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int height[], int height_len, int k)
{
    int answer = 0;
    for (int i = 0; i < height_len; i++)
        if (height[i] > k)
        {
            answer++;
        }
    return answer;
}

int main(void)
{
    int h[5];

    int ans = 0;

    int a;

    printf("�л� 5���� Ű�� �Է��ϼ���: ");
    scanf("%d %d %d %d %d", &h[0], &h[1], &h[2], &h[3], &h[4]);

    printf("������ �Ǵ� Ű�� �Է��ϼ���: ");
    scanf("%d", &a);

    ans = solution(h, 5, a);

    printf("Ű %d���� ū ����� %d���Դϴ�.\n", a, ans);

    return 0;
}


