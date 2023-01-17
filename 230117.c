#include <stdio.h>
int main()
{
	char a;
	scanf("%c", &a);
	if (a == 'L' || a == 'l')
		printf("Lions");
	else 
		if (a == 'E' || a == 'e') 
			printf("Eagles");
		else 
			if (a == 'B' ||a == 'b') 
				printf("Bears");
            else 
            printf("none");
}
