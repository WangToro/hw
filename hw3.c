	#include <stdio.h>
	int main(void)
	{
	char ch;
	while(scanf("%c",&ch) !=EOF)
	{	
		if(ch!='\n')
		{
			printf("%c",ch-7);
		}else
		{
		printf("\n");
		}
	}
	}
