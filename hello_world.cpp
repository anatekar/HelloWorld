#include <iostream>

int main(int argc,char *argv[])
{
	(void)argc;
	(void)argv;
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
