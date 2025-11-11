
#include <stdio.h>

int main()
{
    int num1, num2;
    printf("Please enter two different numbers \n");
    scanf("%d %d", &num1, &num2);

    while(num1 == num2){
        printf("Same, please enter two different numbers \n");
        printf("Input: ");
        scanf("%d %d", &num1, &num2);
    }
    
    printf("You entered %d and %d", num1, num2);
    

    printf("\n");
    return 0;
}
