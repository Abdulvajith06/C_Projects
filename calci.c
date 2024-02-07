// Online C compiler to run C program online
#include <stdio.h>

int main() {
  int a,b,c;
  printf("Enter the value for 1st Element:");
  scanf("%d ",&a);
  printf("Enter the value for 2nd Element:");
  scanf("%d",&b);
  int ch;
  
    printf("1.Addtion\n");
    printf("2.Subtraction\n");
    printf("3.Multiplication\n");
    printf("4.Division\n");
    scanf("%d",&ch);
    switch(ch)
    {
        case 1:
        c=a+b;
        printf("%d",c);
        break;
        case 2:
        c=a-b;
        printf("%d",c);
        case 3:
        c=a*b;
        printf("%d",c);
        break;
        case 4:
        c=a/b;
        printf("%d",c);
        break;
        default:
        printf("Please Enter the Correct options:");
        break;
    }
    return 0;
}