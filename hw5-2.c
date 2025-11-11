
#include <stdio.h>

int main()
{
    int num;
    printf("max? ");
    scanf("%d", &num);
    
    int divisor = 1;
    while(divisor <= num){
        if(num % divisor == 0){
            printf("%d ", divisor);
            divisor+=1;
        } else{
            divisor += 1;
        }
    }

    printf("\n");
    return 0;
}
