#include <stdio.h>
int main()
 {
     int n ;
    scanf("%d",&n);
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            if (i == 1 || i == n||j == 1 || j == n ) {
                printf("1");
            } else if ( j==(n/2)+1 && i==(n/2)+1) {
                printf("3");
            } else {
                printf("2");
            }
        }
        printf("\n");
    }
    return 0;
}