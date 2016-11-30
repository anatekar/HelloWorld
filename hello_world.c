#include <stdio.h>
#include "HelloWorldConfig.h"

int main(int argc,char *argv[])
{
	(void)argc;
	(void)argv;
	fprintf(stdout,"(C) Hello World Version : %d.%d \n",HELLO_WORLD_MAJOR_NUMBER,HELLO_WORLD_MINOR_NUMBER);
	if(argc != 2){
		fprintf(stdout,"Hello World!!!\n");
	}else{
		int i=1;
		for(i=1;i<argc;i++){
			fprintf(stdout,"%s ",argv[i]);
		}
		fprintf(stdout,"\n");
	}

	return 0;
}
