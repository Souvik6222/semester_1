#include <stdio.h>
int main()
{
  int i, j, k;
    int n;
    scanf("%d",&n);
    for(i = 1; i <= n; i++)
    {
        int a=1;
        for(j= 1; j <= i; j++)
        {
            int d=64+a;
            char ch=(char)d;
            printf("%c",ch);
            a++;
        }
        
        for(j = i-2; j >=0 ; j--)
        {
            printf("%c",'A'+j);
            a++;
        }
        printf("\n");
    }

return 0;  
}