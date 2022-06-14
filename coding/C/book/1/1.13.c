#include <stdio.h>
#define MAX 5
#define MAXL 10

int main()
{	
	int H[MAX][MAXL];
	int length;
	int i,j;
	int word=1;
	int c;
	printf("%s%d%s\n","Please enter words (max ",MAX-1,"): ");
	while ((c = getchar()) != EOF)
	{
		if (c != ' '&& c != '\n' && c != '\t')
		{
			//putchar(c);
			length++;
		}
		else
		{
			//putchar('\t');
			//printf("word length: %d\n",length);
			//printf("word number: %d\n",word);
			for (i= MAXL; i >= 0;--i)
			{
				H[word][i]=0;
			}

			for (i=0; i <= length-1 ;++i)
			{
				H[word][i] = 1;
			}
			++word;
			length =0;
		}
	}
	putchar('\n');
	for (i=MAXL-1; i>=0 ; --i)
	{
		for (j=1; j<word;++j)
		{
			printf("%d\t",H[j][i]);
		}
		printf("\n");
	}

	return 0;
}
