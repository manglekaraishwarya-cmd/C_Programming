#include<stdio.h>
int main()
{
	int num;
	printf("Enter a number :");
	scanf("%d",&num);

	if(num > 0)
	{
		printf("It is positive\n");
	}
	else if(num < 0)
	{
		printf("It is negative\n");
	}
	else
	{
		printf("It is zero\n");
	}
	return 0;
}
