#include <stdio.h>                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                             ////////////////////////#include <stdio.h>
int main()
{
	char ch;
	int a, b;
	ch = 0;
	a = 0;
	scanf("%c %d", &ch, &a);
	for (b = 1; a >= b; b++) {
		printf(" %c", ch);
	}
}
