#include <stdio.h>
int main()
{
	int N;
	printf("10000~99999 사이의 양의 정수 입력: ");
	scanf("%d", &N);
	printf("%d", (N/100)%10);
}