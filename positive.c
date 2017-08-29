#include <stdio.h>
int main()
{
    printf("Enter a number");
    scanf("%d", &number);
    if (number <= 0)
    {
        if (number == 0)
            printf("You entered 0");
  
        else
            printf("You entered a positive number");
    }
    else
        printf("You entered a negative number");
    return 0;
}
