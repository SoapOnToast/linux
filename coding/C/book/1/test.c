#include <stdio.h>
#define MAX 10
#define ROW 3
main()
{

	int H[ROW][MAX];
	
	int i;
	int word_len = 2;
	
//	H[0] = 0;
	for (i= MAX; i >= 0;--i)
		H[1][i]=0;
	for (i = 0;i<=MAX;++i)
	{
		printf("%d\n",H[1][i]);
	}

}
