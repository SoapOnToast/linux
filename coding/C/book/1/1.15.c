#include <stdio.h>

void Celsius_to_Fahrenheit(int lower, int step, int upper)
{
	
	float fahr;
	
	printf("%s\t%s","Fahrenheit","Celsius\n");
	
	for (fahr = lower; fahr <= upper; fahr += step)
	{
		printf("%6.0f\t%12.1f\n",fahr,(5.0/9.0)*(fahr-32));

	}
}

void Fahrenheit_To_Celsius(int lower, int step, int upper)
{
	float cels;
	
	printf("%s\t%s","Celsius","Fahrenheit\n");
	
	for (cels = lower; cels <= upper; cels += step)
	{
		printf("%6.0f\t%12.1f\n",cels,(5.0/9.0)*(cels-32));

	}
}
int main()
{
	Fahrenheit_To_Celsius(0,10,300);
	Celsius_to_Fahrenheit(0,10,300);
	return 0;
}
