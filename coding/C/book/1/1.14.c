#include <stdio.h>
#define MAX 256 
#define MAXL 10

int main()
{	
	int H[MAX][2];
	int length;
	int i,j;
	int word=1;
	int c;

	for (i=MAX;i>=0;--i)
	{
		H[i][1] =0;
	}

	printf("%s%d%s\n","Please enter words (max ",MAX-1,"): ");
	while ((c = getchar()) != EOF)
	{
		H[c][1]++;
	}
	for (i=0;i<MAX;++i)
	{
		if (H[i][1] != 0)
		{
			printf("%c: %d\n",i,H[i][1]);
		}
	}
//	printf("%d\n",H[c][1]);
	return 0;
}
