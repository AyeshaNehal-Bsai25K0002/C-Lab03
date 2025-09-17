#include <stdio.h>

int main(){
    int subject1,subject2,subject3;
    int totalmarks;
    float percentage;

    printf("Please enter the marks for subject 1:"); //marks input for  subject 1
    scanf("%d",&subject1);

    printf("Please enter the marks for subject 2:"); // marks input for subject 2
    scanf("%d",&subject2);

    printf("Please enter the marks for subject 3:");
    scanf("%d",&subject3);

    totalmarks= subject1 + subject2 + subject3 ;
    percentage= (totalmarks/300.0) *100 ;

    printf("the total marks are %d\n ", totalmarks);
    printf("the percentage is  %.2f%%\n",percentage);

    return 0;











}