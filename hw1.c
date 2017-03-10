#include <stdio.h>

int main(void){
	FILE*fp_w=fopen("hw1.txt","w");
	for(int i=1;i<=9;i++){
		for(int j=1;j<=9;j++){
			fprintf(fp_w,"%d*%d=%d\n",i,j,i*j);
		}
	} 
}
