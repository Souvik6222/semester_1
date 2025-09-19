#include <stdio.h>
int main()
{
    int i, j, space, stars;
    int n; 
  scanf("%d",&n);
    for(i = 1; i <= n; i++) {
        space = n - i;
        stars = 2 * i - 1;
        for(j = 1; j <= space; j++) 
        printf(" ");
        for(j = 1; j <= stars; j++) 
        printf("*");
        printf("\n");
    }
    
    for(i = n - 1; i >= 1; i--) {
        space = n - i;
        stars = 2 * i - 1;
        for(j = 1; j <= space; j++) 
        printf(" ");
        for(j = 1; j <= stars; j++) 
        printf("*");
        printf("\n");
    }

    return 0;
}