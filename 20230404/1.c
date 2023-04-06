#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int main(void)
{
    int i, n, m, sum1 = 0, sum2 = 0, ans;
	
    printf("처음값과 끝값을 입력하시오: ");
    scanf("%d %d", &n, &m);
	
    for(i=0; i<n; i++)
    {
        sum1 += i;
    }
	
    for(i=0; i<=m; i++)
    {
        sum2 += i;
    }
    ans = sum2-sum1;
	
    printf("n부터 m까지의 합은 %d입니다.\n", ans);
	
    return 0;
}