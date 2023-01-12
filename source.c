#include <stdio.h>
int main()
{
	char c1, c2, tmp;

	printf("가로 입력: ");
	scanf("%c%c", &c1, &tmp);
	printf(" 입력: ");
	scanf("%c%c", &c2, &tmp);

	printf("문자 출력: [%c][%c]\n", c1, c2);

}