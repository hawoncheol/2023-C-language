#include <stdio.h>
int main()
{
	int a, b;
	scanf("%d", &a);
	switch (a) {
	case 0:case 3:case 4:case 7:
		printf("13*13=");
		scanf("%d", &b);
		if (b == 169)
			printf("맞음");
		else
			printf("틀림");
		break;
	case 1:case 2:case 9:
		printf("17*17= ");
		scanf("%d", &b);
		if (b == 289)
			printf("맞음");
		else
			printf("틀림");
		break;
	case 5:case 6:case 8:
		printf("19*19= ");
		scanf("%d", &b);
		if (b == 361)
			printf("맞음");
		else
			printf("틀림");
		break;
	default:
		printf("none");
		break;
	}
}
