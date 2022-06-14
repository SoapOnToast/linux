#include <stdio.h>
#define LOWER 0
#define UPPER 300
#define STEP 20

main()
{
	float fahr;
	
	printf("%s\t%s","Fahrenheit","Celsius\n");
	
	for (fahr = LOWER; fahr <= UPPER; fahr += STEP)
	{
		printf("%6.0f\t%12.1f\n",fahr,(5.0/9.0)*(fahr-32));

	}

}
