#include <stdio.h>
#include <string.h>
int main(void){
	char s[]="";
	char s1[]="hello";
	char s2[]="guan-yu";
	char s3[]="help";
	char s4[]="exit";
	
	while(1){
		printf(">");
		scanf("%s",s);
		if(strcmp(s,s1)==0){
			printf("hello world\n");
		}else if(strcmp(s,s2)==0){
			printf("87 \n");
		}else if(strcmp(s,s3)==0){
			printf("you can input \"help\"  \"guan-yu\"  \"hello\"  				\"exit\" \n ");
		}else if(strcmp(s,s4)==0){
			printf("bye\n");
			return 0;
		}else{
			printf("wrong input\n");
			printf("you can input help for help\n");
		}
	}
}
