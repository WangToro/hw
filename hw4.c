#include <stdio.h>
	int main(void)
	{
	char ch;
	while(scanf("%c",&ch) ==1)
	{	
		if(ch =='\n')
		{
			printf("\n");
		}else
		{
		printf("%c",ch-7);
		}
	}
	return 0;
	}
