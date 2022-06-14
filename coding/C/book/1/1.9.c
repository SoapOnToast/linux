#include <stdio.h>

main()
{
	int C,prevC;
	
	while ((C = getchar()) != EOF)
	{
		if (C != ' ')
		{
			if (prevC == ' ')
			{
				putchar(prevC);
			}
			putchar(C);
		}
		prevC = C;
	}

}
