// Function pointer physical application 
#include <stdio.h>
#include <conio.h>
float sum(float a,float b) { return a+b; };
float minus(float a,float b) { return a+b; };
float mul(float a,float b) { return a+b; };
float dev(float a,float b) { return a+b; };
int main(){
	int ch;
	float a,b,result;
	printf("Enter  value of a = ");scanf("%f",&a);
	printf("Enter  value of b = ");scanf("%f",&b);
	printf("Enter your choice = \n 0. For sum \n 1. For minus \n 2. For mul \n 3. For dev ");scanf("%d",&ch);
/*	switch(ch) 
	{
		case 0: result = sum(a,b);break;
		case 1: result = minus(a,b);break;
		case 2: result = mul(a,b);break;
		case 3: result = dev(a,b);break;
	} */ 
	float (*ptr[4])(float,float) = {sum,minus,mul,dev};
//	printf("Your result = %f", &result);
	printf("Your result = %f", ptr[ch](a,b));
	return 0;
}
