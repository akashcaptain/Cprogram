#include <stdio.h>
#include<conio.h>
int main(int argc,char* argv[]){ // agrgument count and argument Value 
	int i;
	for(i=0; i < argc; i++){
		printf("argv[%d] = %s \n ", i, argv[i]);
	}
	return 0;
}
