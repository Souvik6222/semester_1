#include <stdio.h>
int main()
{
    int i, j, space;
    int n;
    scanf("%d",&n);
    for(i = 0; i < n; i++)
    {
        int b=1;
        for(space = 0; space < i; space++)
        {
            printf(" ");
        }
        
        for(j = 0; j < n - i; j++)
        {
          int d= b+64;
          char ch=(char)d;
            printf("%c", ch);
            b++;
        }
        printf("\n");
    }
return 0;  
}