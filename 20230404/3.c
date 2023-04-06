#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

#define NUM_PEOPLE 5

int n[NUM_PEOPLE];

void* remove_element(int arr[], int arr_size, int num)
{
    int* ret = (int*)malloc(sizeof(int)*(arr_size - 1));
    int idx = 0;
    for(int i = 0; i < arr_size; ++i)
        if(arr[i] != num)
            ret[idx++] = arr[i];
    return ret;
}

int get_diff(int a, int b)
{
    if(a >= b)
        return a - b;
    else
        return b - a;
}

int get_max(int arr[], int arr_size)
{
    int ret = -1;
    for(int i = 0; i < arr_size; ++i)
        if(ret<arr[i])
            ret = arr[i];
    return ret;
}

int main(void)
{
    int max_first, max_second, ans;
    int* visitor_removed;
    
    printf("비교할 사람 수 %d개를 입력하세요:", NUM_PEOPLE);
    for(int i=0; i<NUM_PEOPLE; ++i)
        scanf("%d", &n[i]);
    
    max_first = get_max(n, NUM_PEOPLE);
    visitor_removed = remove_element(n, NUM_PEOPLE, max_first);
    max_second = get_max(visitor_removed, NUM_PEOPLE - 1);
    
    ans = get_diff(max_first, max_second);
    
    printf("가장 많은 수의 날과 그 다음 많은 수의 날의 차: %d\n", ans);
    
    free(visitor_removed);
    
    return 0;
}