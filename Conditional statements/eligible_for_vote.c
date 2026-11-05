#include<stdio.h>
int main()
{
	int age;
	
	printf("Enter a age :");
	scanf("%d", &age);

	if(age >= 18)
	{
		printf("You are eligible for vote :\n",age);
	}
	else
	{
	        printf("You are not eligible for vote :\n",age);
	}
	return 0;
}


