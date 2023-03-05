#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void num1(void);
void num2(void);
void num3(void);
void num4(void);
void num5(void);
void num6(void);
void num7(void);

void num1(void) 
{
	char* s1 = "Hello";
	char s2[10] = "Hello";

	printf("%d\n", strlen(s1));
	printf("%d\n", strlen(s2));
}

void num2(void) 
{
	char* s1 = "Hello";
	char s2[10] = "Hello";

	int ret = strcmp(s1, s2);

	printf("%d\n", ret);
}

void num3(void) 
{
	printf("%d\n", strcmp("aaa", "aaa"));
	printf("%d\n", strcmp("aab", "aaa"));
	printf("%d\n", strcmp("aab", "aac"));
}

void num4(void) 
{
	char s1[20];
	char s2[20];

	printf("문자열 두 개를 입력하세요: ");
	scanf("%s %s", s1, s2);

	int ret = strcmp(s1, s2);

	switch (ret) 
	{
	case 0:
		printf("두 문자열이 같음\n");
		break;
	case 1:
		printf("%s보다 %s가 큼\n", s2, s1);
		break;
	case -1:
		printf("%s보다 %s가 큼\n", s1, s2);
		break;
	}
}

void num5(void) 
{
	char s1[20];
	char s2[20];

	printf("문자열 두 개를 입력하세요: ");
	scanf("%s %s", s1, s2);

	int ret = strcmp(s1, s2);

	printf("변환값: %d\n", ret);

	if (ret == 0) 
	{
		printf("두 문자열이 같음\n");
	}
	else if (ret > 0) 
	{
		printf("%s보다 %s가 큼\n", s2, s1);
	}
	else if (ret < 0) 
	{
		printf("%s보다 %s가 큼\n", s1, s2);
	}
}

void num6(void) 
{
	char* s1 = "C Language";
	printf("%d\n", strlen(s1));
}

void num7(void) 
{
	char* s1 = "Pachelbel Canon";
	char* s2 = "Pachelbel Canon";

	int ret = strcmp(s1, s2);

	printf("%d", ret);
}

int main(void) 
{

	num1();
	num2();
	num3();
	num4();
	num5();
	num6();
	num7();

	return 0;
}