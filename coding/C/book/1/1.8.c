#include <stdio.h>

main()
{
	int c,nl,nb,nt;
	nl,nb,nt= 0;
	while ((c = getchar()) != EOF){
		if (c=='\n')
			++nl;
		if (c=='\t')
			++nt;
		if (c==' ')
			++nb;
	}
	printf("Newlines: %d\n",nl);
	printf("Blanks: %d\n",nb);
	printf("Tabs: %d\n",nt);

}
