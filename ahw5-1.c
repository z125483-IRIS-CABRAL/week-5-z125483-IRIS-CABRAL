
#include <stdio.h>

int main()
{
    int n, m;
    scanf("%d %d", &n, &m);
    
    if(n > m){
        printf("Cannot transform %d to %d\n", n, m);
        return 0;
    }
    
    int ans = 0;

    while(m > n){
        if(m%2 ==0){
            m = m/2;
        } else{
            m = m - 1;
        }
        ans+=1;
    }

    if(m == n){
        printf("Numbers of steps taken: %d", ans);
    } else{
        printf("Cannot transform %d to %d", n, m);
    }
 
    printf("\n");
    return 0;
}
