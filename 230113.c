#include <stdio.h>
int main()
{
	char N;
	int a;
	printf("문자 입력: ");
	scanf("%c", &N);
	a = ('A' <= N) && (N <= 'Z') || ('a' <= N) && (N <= 'z') ? 1 : 0;
	printf("%d", a);
}