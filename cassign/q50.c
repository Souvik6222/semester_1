#include <stdio.h>

int main()
 {
     int n ;
    int count=15;
    scanf("%d",&n);
    for (int i = 1; i <= n; i++) {
        for (int j = i; j >= 1; j--) {
            
                printf("%d\t",count);
            count-=1;
            }
       
        printf("\n");
    }

    return 0;
}