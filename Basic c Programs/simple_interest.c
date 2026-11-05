#include<stdio.h>
int main()
{
	float si, p, t, r;
	printf("Enter principal of amount :");
	scanf("%f", &p);

	printf("Enter Time of amount  :");
        scanf("%f", &t);
        
	printf("Enter rate of amount :");
        scanf("%f", &r);
   
	si = (p*t*r)/100;

	printf("si = %0.2f\n", si);
	return 0;
}

