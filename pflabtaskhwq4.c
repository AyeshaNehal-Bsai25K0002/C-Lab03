#include <stdio.h>
int main(){
    
    float basicsalary,houserentallowed,dearnessallowance,grosssalary ;

    printf("Please enter your basic salary:");
    scanf("%f",&basicsalary);

    houserentallowed=0.10 * basicsalary;
    dearnessallowance=0.05 * basicsalary;

    grosssalary= basicsalary + houserentallowed + dearnessallowance ;

    printf("the gross salary= %.2f\n",grosssalary);
    return 0;







}