#include <stdio.h>
#include <conio.h>
int add(int a, int b){
	return a+b;
}
int main(){
	int result;
	int (*ptr)(int , int) = &add; // function pointer declearation and assign 
	result = ptr(10,12); // its return faction value not ptr value 
	printf("%d",result);
	getch();
	return 0;
}

