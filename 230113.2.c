#include <stdio.h>
int main()
{
	int N;
	int M;
	printf("정수 N M 입력: ");
	scanf("%d %d", &N, &M);
	printf("%d\n", N > M ? N / M : M / N);
	printf("%d", N > M ? N % M : M % N);
}