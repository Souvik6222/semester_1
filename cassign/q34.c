#include <stdio.h>
int main()
{
     int i, j, k;
    int n;
    scanf("%d",&n);
    for(i = 1; i <= n; i++)
    {  
        for(j= 1; j <= i; j++)
        {
            printf(" ");
        }
        
        for(k = i-1; k >=1 ; k--)
        {
          
            printf("*");
            
        }
        printf("\n");
    }
return 0;  
}