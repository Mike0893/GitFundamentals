#include <stdio.h>

int main()
{
	int a,b;

	//a=3;
	//b=3;
	printf("Enter value of a:");
	scanf("%d", &a);
	printf("Enter value of b:");
	scanf("%d", &b);

	printf("Git Fundamentals.\n");

	printf("sum = %d\n", (a+b));
	printf("diff = %d\n", (a-b));
	printf("prod = %d\n", (a*b));
	printf("div = %d\n", (a/b));
	return 0;
}
