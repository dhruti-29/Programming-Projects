#include <stdio.h>
#include<math.h> 

int main(){
    int n1, n2, choice=0,total=0;
    char answer;
    printf("************* WELCOME TO CALCULATOR PROJECT ************* ");
    while(choice!=7){ 
    
    printf("\n1. Addition");
    printf("\n2. Subtraction");
    printf("\n3. Multiplication");
    printf("\n4. Division");
    printf("\n5.Percentage");
    printf("\n6.Power");
    printf("\n7.Exit");

    printf("\nWhat do you want to do? ");
    scanf("%d", &choice);
    if(choice==7) {
        printf("are you sure you want to exit (y/n) ?? ");
        scanf(" %c",&answer);
        if(answer=='y'||answer=='Y'){ 
            printf("\a THANKYOU FOR USING THIS");
        break;
        }
            else {
                choice=0;
                continue;
            }
        }
    printf("\nEnter first number : ");
    scanf("%d", &n1);
    printf("\nEnter second number : ");
    scanf("%d", &n2);

    if (choice == 1) {
        printf("Result: %d", n1 + n2);
    } else if (choice == 2) {
        printf("Result: %d", n1 - n2);
    } else if (choice == 3) {
        printf("Result: %d", n1 * n2);
    } else if (choice == 4) {
        if(n2!=0){ 
printf("Result: %f", (float)n1/n2);
        }
        else {
        printf("Please choose correct number!!");
    printf("can not divide  by zero !!");
        }
    }
        else if(choice==5){
printf("Result: %d",(n1/n2)*100);
        }
        else if(choice==6){
            printf("Result: %d and %d",n1*n1,n2*n2);
        }
     
    total++;
            }

printf("\nyou use %d  time caluclator",total);
    return 0;
}
