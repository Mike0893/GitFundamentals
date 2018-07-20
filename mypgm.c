#include <stdio.h>

int main()
{
	int a,b;

	a=3;
	b=3;

	printf("Git Fundamentals.\n");

	printf("sum = %d\n", (a+b));
	printf("diff = %d\n", (a-b));
	printf("prod = %d\n", (a*b));
	if(b != 0) {
		printf("div = %d\n", (a/b));
	} else {
		printf("Division by 0 is not allowed\n");
	}
	return 0;
}
