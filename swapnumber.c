#include<stdio.h>
#include<conio.h>
int main(){
    int x,y;
    printf("Enter value of x = ");
    scanf("%d",&x);
    printf("Enter value of y = ");
    scanf("%d",&y);
    x = x+y;
    y = x-y;
    x = x-y;
    printf("Value of x is %d", x);
    printf("\nValue of x is %d", y);

    return 0;
}