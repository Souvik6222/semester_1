#include <stdio.h>

int main()
 {
     int n ;
    int count=1;
    scanf("%d",&n);
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j+=1) {
            
                printf("%d ",count);
            count+=2;
            }
       
        printf("\n");
    }

    return 0;
}