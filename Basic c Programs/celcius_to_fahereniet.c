#include<stdio.h>
int main()
{
	float celcius, fahereniet;

	printf("Enter a celcius in temperature :");
	scanf("%f", &celcius);

	fahereniet = (celcius * 9 / 5 ) + 32;

	printf("Faherenite = %0.2f\n", fahereniet);
	return 0;
}


