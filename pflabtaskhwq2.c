#include <stdio.h>
int main(){
    int a,b,temporaryvariable;

    printf("please enter the value of the first integer:");
    scanf("%d",&a);

    printf("please enter the value of the second integer:");
    scanf("%d",&b);

    temporaryvariable=a;
    a=b;
    b=temporaryvariable;

    printf("the result of swapping is that a=%d , b=%d\n", a, b);
    return 0;













}