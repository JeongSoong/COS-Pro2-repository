#include <stdio.h>

void num1(void);
void num2(void);
void num3(void);
void num4(void);

void num1(void)
{
	char c1 = 'a';
	const char* s1 = "Hello";

	printf("%c\n", c1);
	printf("%s\n", s1);
}

void num2(void)
{
	const char* s1 = "Hello";

	printf("%c\n", s1[1]);
	printf("%c\n", s1[4]);
	printf("%c\n", s1[5]);
}

void num3(void)
{
	const char *s1 = "Hello";

	s1[0] = 'A';

	printf("%c\n", s1[0]);
}

void num4(void)
{
	char s1[30] = "Beethoven 9th Symphony";

	printf("%c\n", s1[10]);
}

int main(void)
{
	num1();
	num2();
	num3();
	num4();

	return 0;
}
