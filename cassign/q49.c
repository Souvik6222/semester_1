#include <stdio.h>

int main()
 {
     int n ;
    int count=1;
    scanf("%d",&n);
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j+=1) {
            
                printf("%c ",count+'@');
            count+=1;
            }
       
        printf("\n");
    }

    return 0;
}