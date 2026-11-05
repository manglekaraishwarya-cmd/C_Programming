#include<stdio.h>
int main()
{
	int a, b, remainder;

	printf("Enter two numbers:");
	scanf("%d %d ", &a, &b);

	remainder = a % b;
        
	printf("The remainder is %d\n", remainder);
        return 0;
}


