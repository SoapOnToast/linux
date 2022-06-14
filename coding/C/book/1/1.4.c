#include <stdio.h>
//Celsius to fahrenheit table
int main()
{
	float celsius, fahr;
	int step, lower, upper;

	lower = 0;
	upper = 100;
	step = 20;

	celsius = lower;
	
	printf("%6s\t%8s","Celsius","Fahrenheit\n");
	while (celsius <= upper)
	{
		fahr = (celsius / (5.0/9.0)) +32.0;
		printf("%5.0f\t%6.1f\n",celsius, fahr);
		celsius += step;
	}
}
