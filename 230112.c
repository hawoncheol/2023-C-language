#include <stdio.h>
int main()
{
	int N;
	printf("정수 입력: ");
	scanf("%d", &N);
	printf("%d", (20 <= N) && (N <= 30));
}