#include<stdio.h>
int main(){
    int pin,newpin;
    char ch,language;
    printf("Welcome to the ATM Machine\n");
    //language selection
printf("Select Language / ભાષા પસંદ કરો:\n");
printf("1. English\n");
printf("2. ગુજરાતી\n");
printf("Enter your choice (1 or 2): ");
scanf(" %c", &language);    
if(language=='1'){
    printf("You have selected English.\n");
    printf("you have already have bank account ?? (y/n)\n");
    scanf(" %c",&ch);
    if(ch=='y'){
        start:
        //PIN verification
    printf("Enter your ATM PIN: ");
    scanf("%d",&pin);
    if(pin==9999){
printf("your pin is correct\n");
printf("Welcome to ATM\n");
printf("\t************************************************\n");
//ATM operations menu
while(1){
printf("Please select an option:\n");
printf("1. Withdraw\n");
printf("2. Deposit\n");
printf("3. Check Balance\n");
printf("4.chanyge PIN\n");
printf("5. Exit\n");

int choice;
printf("Enter your choice: ");
scanf("%d",&choice);

float balance=1000.0;
switch(choice){
    //withdraw operation
    case 1:
    {
        float withdraw =0;
        printf("enter amount :");
        scanf("%f",&withdraw);
        if(withdraw<balance){
            printf("you withdraw money successfully\n");
            balance=balance - withdraw;
            printf("your current balance is: %.2f\n",balance);  

        } 
        else {
            printf("WARNING: you have insufficient balance!!");
        }
    }
    break;
    case 2:
    //deposit operation
    {
        float deposit;
        printf("enter amount to deposit:");
        scanf("%f",&deposit);
        balance=balance+deposit;
        printf("you have deposited successfully\n");
        printf("your current balance is: %.2f\n",balance);  
    }       
    break;
    case 3:{ 
            //check balance operation
    printf("your current balance is: %2.f\n",balance);
}
break;
case 4 :{
    //change PIN operation
    int newpin;
    printf("enter new pin :");
    scanf("%d",&newpin);
    pin=newpin;
    printf("your pin has been changed successfully\n");
}
case 5:{
    
    printf("Thank you for using our ATM service. Goodbye!\n");  

}
break;
default:
    printf("Invalid choice! Please select a valid option.\n");
}
}
}
    else{
        printf("Incorrect PIN. Access denied.\n");
    } 

    }
else if(ch=='n'){
    //creat account
    printf("Please create a bank account first.\n");
    struct account{
        int accno;
        char name[50];
        int pin;
        int balance;
    }e1;
printf("\nenter account number : ");
scanf("%d",&e1.accno);

printf("\nenter your name : ");
scanf("%s",e1.name);

printf("enter PIN : ");
scanf("%d",&e1.pin);

printf("enter balance : ");
scanf("%d",&e1.balance);

goto start;
}
}
else if(language=='2'){
    printf("તમે ગુજરાતી પસંદ કરી છે.\n");
    // Additional Gujarati language handling can be added here      
    printf("1.નાણાં ઉપાડવા\n");
    printf("2.જમા કરાવવી\n");
    printf("3.બેલેન્સ તપાસો\n"); 
    printf("4.પિન બદલો\n");
    printf("5.બહાર નીકળો\n");  

    int choice1;    
    printf("તમારી પસંદગી દાખલ કરો: ");
    scanf("%d",&choice1);
    // Further implementation for Gujarati options can be added here    
float balance=100.0; 
float withdraw=0.00;
switch(choice1){
    case 1:
    printf("પૈસા ની રકમ દાખલ કરો :");
    scanf("%f",&withdraw);
    if(withdraw<balance){
        printf("તમે સફળતાપૂર્વક પૈસા ઉપાડ્યા છે\n");
        balance=balance - withdraw;
        printf("તમારું વર્તમાન બેલેન્સ છે: %.2f\n",balance);     

}
case 2:
{
    float deposit;
    printf("જમા કરાવવાની રકમ દાખલ કરો:");
    scanf("%f",&deposit);
    balance=balance+deposit;
    printf("તમે સફળતાપૂર્વક જમા કરાવ્યા છે\n");
    printf("તમારું વર્તમાન બેલેન્સ છે: %.2f\n",balance);     
} 
int newpin = 0;
case 3:
    printf("તમારું વર્તમાન બેલેન્સ છે: %.2f\n",balance);     
    break;
    case 4:
    printf("નવો પિન દાખલ કરો :");
    scanf("%d",&newpin);
    printf("તમારો પિન સફળતાપૂર્વક બદલાયો છે\n");
    break;
    case 5:
    printf("અમારી ATM સેવા ઉપયોગ કરવા માટે આભાર. અલવિદા!\n");     
    break;
    default:
    printf("અમાન્ય પસંદગી! કૃપા કરીને માન્ય વિકલ્પ પસંદ કરો.\n");
}
}
    return 0;
}   