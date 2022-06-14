#include <stdio.h>
#define TAB "\\t"
main()
{
	int C;

	while ((C = getchar()) != EOF)
	{
		if (C == '\t')
			printf("\\t");
	
		if (C == '\b')
			printf("\\b");

		if (C == '\\')
			printf("\\\\");
		if (C != '\\' && C != '\t' && C != '\b')
			putchar(C);
	}

}
