#include <iostream>
#include "HelloWorldConfig.h"

int main(int argc,char *argv[])
{
	(void)argc;
	(void)argv;
	std::cout<<"(CPP) Hello World Version : "<<HELLO_WORLD_MAJOR_NUMBER<<"."<<HELLO_WORLD_MINOR_NUMBER<<std::endl;
	if(argc == 1){
		std::cout<<"Hello World!!!\n";
	}else{
		for(int i=1;i<argc;i++){
			std::cout<<argv[i]<<" ";
		}
		std::cout<<std::endl;
	}
	return 0;
}
