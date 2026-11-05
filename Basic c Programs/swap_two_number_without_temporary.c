#include<stdio.h>
int main()
{
	int a,b,temp;

	printf("Enter first number:");
	scanf("%d", &a);

	printf("Enter second number:");
        scanf("%d", &b);

	printf("Before swapping\n");
	scanf("a = %d ,b = %d", &a, &b);

	a = a + b;
	b = a - b;
	a = a -b;


	printf("After a swapping : a = %d, b = %d\n", a,b);

	return 0;
}



