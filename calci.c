/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

// Online C compiler to run C program online
#include <stdio.h>
#include <math.h>

int main() {
  double a,b,c;
  printf("Enter the value for 1st Element:");
  scanf("%lf ",&a);
  printf("Enter the value for 2nd Element:");
  scanf("%lf",&b);
  int ch;
  
    printf("1.Addtion\n");
    printf("2.Subtraction\n");
    printf("3.Multiplication\n");
    printf("4.Division\n");
    printf("5.sin angle\n");
     //printf("5.sin angle\n");
      printf("6.cos angle\n");
       printf("7.tan angle\n");
    
    scanf("%d",&ch);
    switch(ch)
    {
        case 1:
        c=a+b;
        printf("%lf",c);
        break;
        case 2:
        c=a-b;
        printf("%lf",c);
        case 3:
        c=a*b;
        printf("%lf",c);
        break;
        case 4:
        c=a/b;
        printf("%lf",c);
        break;
        case 5:
        printf("%lf\n",sin(a));
         printf("%lf",sin(b));
        break;
        case 6:
        printf("%lf\n",cos(a));
        printf("%lf",cos(b));
        break;
        case 7:
        printf("%lf\n",tan(a));
        printf("%lf",tan(b));
        break;
        default:
        printf("Please Enter the Correct options:");
        break;
    }
    return 0;
}
