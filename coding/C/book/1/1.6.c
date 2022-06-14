#include <stdio.h>

main()
{
	int c;

	while ((c= getchar()) != EOF)
		printf("%c\n",c);
	printf("%c - at EOF\n", c);
}
