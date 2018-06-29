#include<stdio.h>

main ()
{
	int number;
	printf("Enter an integer:");
	scanf("%d",&number);
	int factorial=1;
	int counter=1;
	
	
	do
	{
		factorial*=counter;
		counter++;
		
	} while(counter <= number);
	
	
	printf("Factorial= %d",factorial);
}

