#include <stdio.h>
int main()
{
	int N;
	int M;
	printf("���� N M �Է�: ");
	scanf("%d %d", &N, &M);
	printf("%d\n", N > M ? N / M : M / N);
	printf("%d", N > M ? N % M : M % N);
}