#include <stdio.h>
int main()
{
	int N;
	printf("10000~99999 ������ ���� ���� �Է�: ");
	scanf("%d", &N);
	printf("%d", (N/100)%10);
}