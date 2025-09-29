#include <stdio.h>
int main()
{
  int i, j, k;
    int n;
    scanf("%d",&n);
    for(i = n; i >= 1; i--)
    {  
        for(j=1;j<=i;j++)
    {
        if(i==1||i==n || j==i||j==1)
        {
            printf("*");
        }
        else{
            printf(" ");
        }
        
    }
      printf("\n"); 
    }
return 0;  
}