#include <stdio.h>
int main(){
    
    int usernumber;

    printf("please enter the number between 65 and 90 you would like the ASCII code for");
    scanf("%d",&usernumber);

    if (usernumber >=65 &&usernumber <=90){

        printf("%d = %c\n",usernumber,usernumber);

    }

    else{

        printf("you have not entered the right number-please try again:");
    }

return 0;



}