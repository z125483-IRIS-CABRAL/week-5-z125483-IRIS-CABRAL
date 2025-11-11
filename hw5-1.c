#include <stdio.h>

int main()
{
    int maxNum;
    printf("max? ");
    scanf("%d", &maxNum);
    
    int power = 1;
    while(power < maxNum){
        printf("%d ", power);
        power *= 2;
    }
    
    printf("\n");

    return 0;
}
