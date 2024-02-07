// Online C compiler to run C program online
#include <stdio.h>

int main() {
    int Secret_number;
    int Guessing_number,turn;
    printf("player 1 should enter the Secret number:");
    scanf("%d",&Secret_number);
    printf("Determine the Turns for player 2:");
    scanf("%d",&turn);
    for(int i=1;i<=turn;i++)
    {
        printf("Guess the number:");
        scanf("%d",&Guessing_number);
    
    if(Secret_number == Guessing_number)
    {
        printf("YOU WON");
    
        break;
    }
    }
    if(Secret_number != Guessing_number)
    {
        printf("Sorry NEXT time");
    }
    
    
    return 0;
}