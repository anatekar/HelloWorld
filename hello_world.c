#include <stdio.h>

int main(int argc,char *argv[])
{
	(void)argc;
	(void)argv;
	if(argc != 2){
		fprintf(stdout,"Hello World!!!\n");
	}else{
		fprintf(stdout,"%s\n",argv[1]);
	}

	return 0;
}
