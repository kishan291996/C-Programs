#include <stdio.h>
int main()
{
    int number;

    printf("Enter an integer: ");
    scanf("%d", &number);

    //if(0)-->false
    if(number % 2)
        printf("%d is odd.", number);
    else
        printf("%d is even.", number);

    return 0;
}
