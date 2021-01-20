#include <stdio.h>

int main(){
    double luxRoomPrice = 180;
    double standartRoomPrice = 120;

    printf("Welcome to hotel Sunrise!\n");
    printf("In our hotel we have luxury and standard rooms\n");
    printf("Please make your choice!\n");

    char choice = 0;
    int nights = 0;
    double subTotal = 0;
    
    while(choice!='3'){
        printf("For standart room type 1\n");
        printf("For luxury room type 2\n");
        printf("For exit type 3\n");
        scanf("%s",&choice);
        if(choice=='1'){
            printf("Your choice is standart room.\n");
            printf("How many night you are going to stay?\n");
            scanf("%d", &nights);
            subTotal = subTotal + (nights * standartRoomPrice);
            printf("Your bill is: %d\n", subTotal);}
        else if (choice=='2'){
            printf("Your choice is luxury room.\n");
            printf("How many night you are going to stay?\n");
            scanf("%d", &nights);
            subTotal = subTotal + (nights * luxRoomPrice);
            printf("Your bill is: %d\n", subTotal);}
        else if( choice=='3')
        {break;}
        else 
        {
            printf("Invalid choice!\n");
        }
    }
    return 0;
}
