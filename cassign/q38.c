#include <stdio.h>
int main()
{
     int i, j, space;
    int n;
    scanf("%d",&n);
    for(i = 0; i < n; i++) {
        for(space = 0; space < i; space++) {
            printf(" ");
        }
        
        for(j = 0; j < n - i; j++) {
            printf("%d",j);
        }
        printf("\n");
    }
return 0;  
}