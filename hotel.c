#include <stdio.h>

int main(){
    double luxRoomPrice = 180;
    double standartRoomPrice = 120;

    printf("Welcome to hotel Sunrise!\n");
    printf("In our hotel we have luxury and standard rooms\n");
    printf("Please make your choice!\n");

    char choice = 0;
    unsigned short int nights = 0;
    double subTotal = 0;
    
    while(choice!='3'){
        printf("For standart room type 1\n");
        printf("For luxury room type 2\n");
        printf("For exit type 3\n");
        scanf("%s",&choice);
        if(choice=='1'){
            printf("Your choice is standart room.\n");
            printf("How many nights you are going to stay?\n");
            scanf("%d", &nights);
            if (nights > 14){
                printf("The offer is valid for maximum 14 days\n");
            }
            else{
            subTotal = (subTotal + (nights * standartRoomPrice));
            printf("Your bill is: %.2f\n", subTotal);}}
        else if (choice=='2'){
            printf("Your choice is luxury room.\n");
            printf("How many nights you are going to stay?\n");
            scanf("%d", &nights);
            if (nights > 14){
                printf("The offer is valid for maximum 14 days\n");
            }
            else{
            subTotal = (subTotal + (nights * luxRoomPrice));
            printf("Your bill is: %.2f\n", subTotal);}}
        else if( choice=='3')
        {break;}
        else 
        {
            printf("Invalid choice!\n");
        }
    }
    float toristTax = subTotal * 0.06;
    printf("You owe tourist tax: %.2f\n", toristTax);
    subTotal = subTotal + toristTax;
    printf("Your bill with taxes is: %.2f\n", subTotal);

    return 0;
}
