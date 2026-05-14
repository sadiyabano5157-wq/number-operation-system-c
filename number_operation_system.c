#include<stdio.h>

int main()
{
    int choice, number;

    printf("Enter a choice\n");
    printf("1 = Check Even/Odd\n");
    printf("2 = Check Positive/Negative\n");
    printf("3 = Check Divisible by 5\n");
    printf("4 = Exit\n");

    scanf("%d", &choice);

    printf("Enter a number\n");
    scanf("%d", &number);

    switch(choice)
    {
        case 1:
            if(number % 2 == 0)
            {
                printf("Even Number\n");
            }
            else
            {
                printf("Odd Number\n");
            }
            break;

        case 2:
            if(number >= 0)
            {
                printf("Positive Number\n");
            }
            else
            {
                printf("Negative Number\n");
            }
            break;

        case 3:
            if(number % 5 == 0)
            {
                printf("Divisible by 5\n");
            }
            else
            {
                printf("Not Divisible by 5\n");
            }
            break;

        case 4:
            printf("Exit\n");
            break;

        default:
            printf("Wrong Entry\n");
            break;
    }

    return 0;
}
